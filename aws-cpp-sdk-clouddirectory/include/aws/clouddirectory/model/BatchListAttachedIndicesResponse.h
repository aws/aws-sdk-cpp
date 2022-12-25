/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/IndexAttachment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>ListAttachedIndices</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListAttachedIndicesResponse">AWS
   * API Reference</a></p>
   */
  class BatchListAttachedIndicesResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListAttachedIndicesResponse();
    AWS_CLOUDDIRECTORY_API BatchListAttachedIndicesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListAttachedIndicesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline const Aws::Vector<IndexAttachment>& GetIndexAttachments() const{ return m_indexAttachments; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline bool IndexAttachmentsHasBeenSet() const { return m_indexAttachmentsHasBeenSet; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline void SetIndexAttachments(const Aws::Vector<IndexAttachment>& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments = value; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline void SetIndexAttachments(Aws::Vector<IndexAttachment>&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments = std::move(value); }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline BatchListAttachedIndicesResponse& WithIndexAttachments(const Aws::Vector<IndexAttachment>& value) { SetIndexAttachments(value); return *this;}

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline BatchListAttachedIndicesResponse& WithIndexAttachments(Aws::Vector<IndexAttachment>&& value) { SetIndexAttachments(std::move(value)); return *this;}

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline BatchListAttachedIndicesResponse& AddIndexAttachments(const IndexAttachment& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments.push_back(value); return *this; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline BatchListAttachedIndicesResponse& AddIndexAttachments(IndexAttachment&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListAttachedIndicesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListAttachedIndicesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListAttachedIndicesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IndexAttachment> m_indexAttachments;
    bool m_indexAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
