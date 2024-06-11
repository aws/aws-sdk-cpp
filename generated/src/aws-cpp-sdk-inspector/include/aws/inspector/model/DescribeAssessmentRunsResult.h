/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentRun.h>
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
  class DescribeAssessmentRunsResult
  {
  public:
    AWS_INSPECTOR_API DescribeAssessmentRunsResult();
    AWS_INSPECTOR_API DescribeAssessmentRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeAssessmentRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assessment run.</p>
     */
    inline const Aws::Vector<AssessmentRun>& GetAssessmentRuns() const{ return m_assessmentRuns; }
    inline void SetAssessmentRuns(const Aws::Vector<AssessmentRun>& value) { m_assessmentRuns = value; }
    inline void SetAssessmentRuns(Aws::Vector<AssessmentRun>&& value) { m_assessmentRuns = std::move(value); }
    inline DescribeAssessmentRunsResult& WithAssessmentRuns(const Aws::Vector<AssessmentRun>& value) { SetAssessmentRuns(value); return *this;}
    inline DescribeAssessmentRunsResult& WithAssessmentRuns(Aws::Vector<AssessmentRun>&& value) { SetAssessmentRuns(std::move(value)); return *this;}
    inline DescribeAssessmentRunsResult& AddAssessmentRuns(const AssessmentRun& value) { m_assessmentRuns.push_back(value); return *this; }
    inline DescribeAssessmentRunsResult& AddAssessmentRuns(AssessmentRun&& value) { m_assessmentRuns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Assessment run details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }
    inline DescribeAssessmentRunsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}
    inline DescribeAssessmentRunsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline DescribeAssessmentRunsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    inline DescribeAssessmentRunsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }
    inline DescribeAssessmentRunsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeAssessmentRunsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAssessmentRunsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeAssessmentRunsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssessmentRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssessmentRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssessmentRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentRun> m_assessmentRuns;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
