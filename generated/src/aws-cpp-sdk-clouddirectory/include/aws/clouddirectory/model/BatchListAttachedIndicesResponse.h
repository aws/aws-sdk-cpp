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
    AWS_CLOUDDIRECTORY_API BatchListAttachedIndicesResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListAttachedIndicesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListAttachedIndicesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline const Aws::Vector<IndexAttachment>& GetIndexAttachments() const { return m_indexAttachments; }
    inline bool IndexAttachmentsHasBeenSet() const { return m_indexAttachmentsHasBeenSet; }
    template<typename IndexAttachmentsT = Aws::Vector<IndexAttachment>>
    void SetIndexAttachments(IndexAttachmentsT&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments = std::forward<IndexAttachmentsT>(value); }
    template<typename IndexAttachmentsT = Aws::Vector<IndexAttachment>>
    BatchListAttachedIndicesResponse& WithIndexAttachments(IndexAttachmentsT&& value) { SetIndexAttachments(std::forward<IndexAttachmentsT>(value)); return *this;}
    template<typename IndexAttachmentsT = IndexAttachment>
    BatchListAttachedIndicesResponse& AddIndexAttachments(IndexAttachmentsT&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments.emplace_back(std::forward<IndexAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchListAttachedIndicesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexAttachment> m_indexAttachments;
    bool m_indexAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
