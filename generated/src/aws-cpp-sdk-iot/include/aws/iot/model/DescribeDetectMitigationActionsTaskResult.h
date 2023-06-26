﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/DetectMitigationActionsTaskSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class DescribeDetectMitigationActionsTaskResult
  {
  public:
    AWS_IOT_API DescribeDetectMitigationActionsTaskResult();
    AWS_IOT_API DescribeDetectMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeDetectMitigationActionsTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The description of a task. </p>
     */
    inline const DetectMitigationActionsTaskSummary& GetTaskSummary() const{ return m_taskSummary; }

    /**
     * <p> The description of a task. </p>
     */
    inline void SetTaskSummary(const DetectMitigationActionsTaskSummary& value) { m_taskSummary = value; }

    /**
     * <p> The description of a task. </p>
     */
    inline void SetTaskSummary(DetectMitigationActionsTaskSummary&& value) { m_taskSummary = std::move(value); }

    /**
     * <p> The description of a task. </p>
     */
    inline DescribeDetectMitigationActionsTaskResult& WithTaskSummary(const DetectMitigationActionsTaskSummary& value) { SetTaskSummary(value); return *this;}

    /**
     * <p> The description of a task. </p>
     */
    inline DescribeDetectMitigationActionsTaskResult& WithTaskSummary(DetectMitigationActionsTaskSummary&& value) { SetTaskSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDetectMitigationActionsTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDetectMitigationActionsTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDetectMitigationActionsTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DetectMitigationActionsTaskSummary m_taskSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
