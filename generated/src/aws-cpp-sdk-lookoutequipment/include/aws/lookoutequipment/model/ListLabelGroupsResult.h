/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/LabelGroupSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListLabelGroupsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLabelGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A summary of the label groups. </p>
     */
    inline const Aws::Vector<LabelGroupSummary>& GetLabelGroupSummaries() const { return m_labelGroupSummaries; }
    template<typename LabelGroupSummariesT = Aws::Vector<LabelGroupSummary>>
    void SetLabelGroupSummaries(LabelGroupSummariesT&& value) { m_labelGroupSummariesHasBeenSet = true; m_labelGroupSummaries = std::forward<LabelGroupSummariesT>(value); }
    template<typename LabelGroupSummariesT = Aws::Vector<LabelGroupSummary>>
    ListLabelGroupsResult& WithLabelGroupSummaries(LabelGroupSummariesT&& value) { SetLabelGroupSummaries(std::forward<LabelGroupSummariesT>(value)); return *this;}
    template<typename LabelGroupSummariesT = LabelGroupSummary>
    ListLabelGroupsResult& AddLabelGroupSummaries(LabelGroupSummariesT&& value) { m_labelGroupSummariesHasBeenSet = true; m_labelGroupSummaries.emplace_back(std::forward<LabelGroupSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLabelGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LabelGroupSummary> m_labelGroupSummaries;
    bool m_labelGroupSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
