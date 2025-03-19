/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentTarget.h>
#include <aws/inspector/model/FailedItemDetails.h>
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
namespace Inspector
{
namespace Model
{
  class DescribeAssessmentTargetsResult
  {
  public:
    AWS_INSPECTOR_API DescribeAssessmentTargetsResult() = default;
    AWS_INSPECTOR_API DescribeAssessmentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeAssessmentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assessment targets.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const { return m_assessmentTargets; }
    template<typename AssessmentTargetsT = Aws::Vector<AssessmentTarget>>
    void SetAssessmentTargets(AssessmentTargetsT&& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets = std::forward<AssessmentTargetsT>(value); }
    template<typename AssessmentTargetsT = Aws::Vector<AssessmentTarget>>
    DescribeAssessmentTargetsResult& WithAssessmentTargets(AssessmentTargetsT&& value) { SetAssessmentTargets(std::forward<AssessmentTargetsT>(value)); return *this;}
    template<typename AssessmentTargetsT = AssessmentTarget>
    DescribeAssessmentTargetsResult& AddAssessmentTargets(AssessmentTargetsT&& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets.emplace_back(std::forward<AssessmentTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const { return m_failedItems; }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    DescribeAssessmentTargetsResult& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsKeyT = Aws::String, typename FailedItemsValueT = FailedItemDetails>
    DescribeAssessmentTargetsResult& AddFailedItems(FailedItemsKeyT&& key, FailedItemsValueT&& value) {
      m_failedItemsHasBeenSet = true; m_failedItems.emplace(std::forward<FailedItemsKeyT>(key), std::forward<FailedItemsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssessmentTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;
    bool m_assessmentTargetsHasBeenSet = false;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
    bool m_failedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
