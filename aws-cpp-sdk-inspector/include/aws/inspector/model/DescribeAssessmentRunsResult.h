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
#include <aws/inspector/model/AssessmentRun.h>
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
  class AWS_INSPECTOR_API DescribeAssessmentRunsResult
  {
  public:
    DescribeAssessmentRunsResult();
    DescribeAssessmentRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAssessmentRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the assessment run.</p>
     */
    inline const Aws::Vector<AssessmentRun>& GetAssessmentRuns() const{ return m_assessmentRuns; }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline void SetAssessmentRuns(const Aws::Vector<AssessmentRun>& value) { m_assessmentRuns = value; }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline void SetAssessmentRuns(Aws::Vector<AssessmentRun>&& value) { m_assessmentRuns = std::move(value); }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline DescribeAssessmentRunsResult& WithAssessmentRuns(const Aws::Vector<AssessmentRun>& value) { SetAssessmentRuns(value); return *this;}

    /**
     * <p>Information about the assessment run.</p>
     */
    inline DescribeAssessmentRunsResult& WithAssessmentRuns(Aws::Vector<AssessmentRun>&& value) { SetAssessmentRuns(std::move(value)); return *this;}

    /**
     * <p>Information about the assessment run.</p>
     */
    inline DescribeAssessmentRunsResult& AddAssessmentRuns(const AssessmentRun& value) { m_assessmentRuns.push_back(value); return *this; }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline DescribeAssessmentRunsResult& AddAssessmentRuns(AssessmentRun&& value) { m_assessmentRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline DescribeAssessmentRunsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

  private:

    Aws::Vector<AssessmentRun> m_assessmentRuns;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
