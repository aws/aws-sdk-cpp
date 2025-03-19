/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/LabelSummary.h>
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
  class ListLabelsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListLabelsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLabelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline const Aws::Vector<LabelSummary>& GetLabelSummaries() const { return m_labelSummaries; }
    template<typename LabelSummariesT = Aws::Vector<LabelSummary>>
    void SetLabelSummaries(LabelSummariesT&& value) { m_labelSummariesHasBeenSet = true; m_labelSummaries = std::forward<LabelSummariesT>(value); }
    template<typename LabelSummariesT = Aws::Vector<LabelSummary>>
    ListLabelsResult& WithLabelSummaries(LabelSummariesT&& value) { SetLabelSummaries(std::forward<LabelSummariesT>(value)); return *this;}
    template<typename LabelSummariesT = LabelSummary>
    ListLabelsResult& AddLabelSummaries(LabelSummariesT&& value) { m_labelSummariesHasBeenSet = true; m_labelSummaries.emplace_back(std::forward<LabelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLabelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LabelSummary> m_labelSummaries;
    bool m_labelSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
