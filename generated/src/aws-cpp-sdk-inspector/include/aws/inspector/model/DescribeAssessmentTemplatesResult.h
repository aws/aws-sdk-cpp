/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentTemplate.h>
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
  class DescribeAssessmentTemplatesResult
  {
  public:
    AWS_INSPECTOR_API DescribeAssessmentTemplatesResult() = default;
    AWS_INSPECTOR_API DescribeAssessmentTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeAssessmentTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assessment templates.</p>
     */
    inline const Aws::Vector<AssessmentTemplate>& GetAssessmentTemplates() const { return m_assessmentTemplates; }
    template<typename AssessmentTemplatesT = Aws::Vector<AssessmentTemplate>>
    void SetAssessmentTemplates(AssessmentTemplatesT&& value) { m_assessmentTemplatesHasBeenSet = true; m_assessmentTemplates = std::forward<AssessmentTemplatesT>(value); }
    template<typename AssessmentTemplatesT = Aws::Vector<AssessmentTemplate>>
    DescribeAssessmentTemplatesResult& WithAssessmentTemplates(AssessmentTemplatesT&& value) { SetAssessmentTemplates(std::forward<AssessmentTemplatesT>(value)); return *this;}
    template<typename AssessmentTemplatesT = AssessmentTemplate>
    DescribeAssessmentTemplatesResult& AddAssessmentTemplates(AssessmentTemplatesT&& value) { m_assessmentTemplatesHasBeenSet = true; m_assessmentTemplates.emplace_back(std::forward<AssessmentTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Assessment template details that cannot be described. An error code is
     * provided for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const { return m_failedItems; }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    DescribeAssessmentTemplatesResult& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsKeyT = Aws::String, typename FailedItemsValueT = FailedItemDetails>
    DescribeAssessmentTemplatesResult& AddFailedItems(FailedItemsKeyT&& key, FailedItemsValueT&& value) {
      m_failedItemsHasBeenSet = true; m_failedItems.emplace(std::forward<FailedItemsKeyT>(key), std::forward<FailedItemsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssessmentTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentTemplate> m_assessmentTemplates;
    bool m_assessmentTemplatesHasBeenSet = false;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
    bool m_failedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
