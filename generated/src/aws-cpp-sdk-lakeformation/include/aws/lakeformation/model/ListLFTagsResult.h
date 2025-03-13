/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagPair.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LakeFormation
{
namespace Model
{
  class ListLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API ListLFTagsResult() = default;
    AWS_LAKEFORMATION_API ListLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const { return m_lFTags; }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    void SetLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::forward<LFTagsT>(value); }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    ListLFTagsResult& WithLFTags(LFTagsT&& value) { SetLFTags(std::forward<LFTagsT>(value)); return *this;}
    template<typename LFTagsT = LFTagPair>
    ListLFTagsResult& AddLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags.emplace_back(std::forward<LFTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLFTagsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLFTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LFTagPair> m_lFTags;
    bool m_lFTagsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
