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
   * <p>Represents the output of a <a>ListIndex</a> response operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListIndexResponse">AWS
   * API Reference</a></p>
   */
  class BatchListIndexResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListIndexResponse();
    AWS_CLOUDDIRECTORY_API BatchListIndexResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListIndexResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline const Aws::Vector<IndexAttachment>& GetIndexAttachments() const{ return m_indexAttachments; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline bool IndexAttachmentsHasBeenSet() const { return m_indexAttachmentsHasBeenSet; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline void SetIndexAttachments(const Aws::Vector<IndexAttachment>& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments = value; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline void SetIndexAttachments(Aws::Vector<IndexAttachment>&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments = std::move(value); }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline BatchListIndexResponse& WithIndexAttachments(const Aws::Vector<IndexAttachment>& value) { SetIndexAttachments(value); return *this;}

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline BatchListIndexResponse& WithIndexAttachments(Aws::Vector<IndexAttachment>&& value) { SetIndexAttachments(std::move(value)); return *this;}

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline BatchListIndexResponse& AddIndexAttachments(const IndexAttachment& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments.push_back(value); return *this; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline BatchListIndexResponse& AddIndexAttachments(IndexAttachment&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments.push_back(std::move(value)); return *this; }


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
    inline BatchListIndexResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIndexResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIndexResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IndexAttachment> m_indexAttachments;
    bool m_indexAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
