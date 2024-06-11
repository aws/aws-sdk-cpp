﻿/**
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
    AWS_INSPECTOR_API DescribeAssessmentTargetsResult();
    AWS_INSPECTOR_API DescribeAssessmentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeAssessmentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assessment targets.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const{ return m_assessmentTargets; }
    inline void SetAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { m_assessmentTargets = value; }
    inline void SetAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { m_assessmentTargets = std::move(value); }
    inline DescribeAssessmentTargetsResult& WithAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { SetAssessmentTargets(value); return *this;}
    inline DescribeAssessmentTargetsResult& WithAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { SetAssessmentTargets(std::move(value)); return *this;}
    inline DescribeAssessmentTargetsResult& AddAssessmentTargets(const AssessmentTarget& value) { m_assessmentTargets.push_back(value); return *this; }
    inline DescribeAssessmentTargetsResult& AddAssessmentTargets(AssessmentTarget&& value) { m_assessmentTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Assessment target details that cannot be described. An error code is provided
     * for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }
    inline DescribeAssessmentTargetsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}
    inline DescribeAssessmentTargetsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline DescribeAssessmentTargetsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    inline DescribeAssessmentTargetsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }
    inline DescribeAssessmentTargetsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeAssessmentTargetsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAssessmentTargetsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeAssessmentTargetsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssessmentTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssessmentTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssessmentTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
