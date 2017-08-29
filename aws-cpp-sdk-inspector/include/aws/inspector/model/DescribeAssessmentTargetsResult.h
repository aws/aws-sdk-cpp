/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector/model/AssessmentTarget.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_INSPECTOR_API DescribeAssessmentTargetsResult
  {
  public:
    DescribeAssessmentTargetsResult();
    DescribeAssessmentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAssessmentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the assessment targets.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const{ return m_assessmentTargets; }

    /**
     * <p>Information about the assessment targets.</p>
     */
    inline void SetAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { m_assessmentTargets = value; }

    /**
     * <p>Information about the assessment targets.</p>
     */
    inline void SetAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { m_assessmentTargets = std::move(value); }

    /**
     * <p>Information about the assessment targets.</p>
     */
    inline DescribeAssessmentTargetsResult& WithAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { SetAssessmentTargets(value); return *this;}

    /**
     * <p>Information about the assessment targets.</p>
     */
    inline DescribeAssessmentTargetsResult& WithAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { SetAssessmentTargets(std::move(value)); return *this;}

    /**
     * <p>Information about the assessment targets.</p>
     */
    inline DescribeAssessmentTargetsResult& AddAssessmentTargets(const AssessmentTarget& value) { m_assessmentTargets.push_back(value); return *this; }

    /**
     * <p>Information about the assessment targets.</p>
     */
    inline DescribeAssessmentTargetsResult& AddAssessmentTargets(AssessmentTarget&& value) { m_assessmentTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentTargetsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
