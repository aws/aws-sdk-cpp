﻿/**
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
    AWS_INSPECTOR_API DescribeAssessmentTemplatesResult();
    AWS_INSPECTOR_API DescribeAssessmentTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeAssessmentTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assessment templates.</p>
     */
    inline const Aws::Vector<AssessmentTemplate>& GetAssessmentTemplates() const{ return m_assessmentTemplates; }
    inline void SetAssessmentTemplates(const Aws::Vector<AssessmentTemplate>& value) { m_assessmentTemplates = value; }
    inline void SetAssessmentTemplates(Aws::Vector<AssessmentTemplate>&& value) { m_assessmentTemplates = std::move(value); }
    inline DescribeAssessmentTemplatesResult& WithAssessmentTemplates(const Aws::Vector<AssessmentTemplate>& value) { SetAssessmentTemplates(value); return *this;}
    inline DescribeAssessmentTemplatesResult& WithAssessmentTemplates(Aws::Vector<AssessmentTemplate>&& value) { SetAssessmentTemplates(std::move(value)); return *this;}
    inline DescribeAssessmentTemplatesResult& AddAssessmentTemplates(const AssessmentTemplate& value) { m_assessmentTemplates.push_back(value); return *this; }
    inline DescribeAssessmentTemplatesResult& AddAssessmentTemplates(AssessmentTemplate&& value) { m_assessmentTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Assessment template details that cannot be described. An error code is
     * provided for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }
    inline DescribeAssessmentTemplatesResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}
    inline DescribeAssessmentTemplatesResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline DescribeAssessmentTemplatesResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    inline DescribeAssessmentTemplatesResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }
    inline DescribeAssessmentTemplatesResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeAssessmentTemplatesResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAssessmentTemplatesResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeAssessmentTemplatesResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssessmentTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssessmentTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssessmentTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentTemplate> m_assessmentTemplates;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
