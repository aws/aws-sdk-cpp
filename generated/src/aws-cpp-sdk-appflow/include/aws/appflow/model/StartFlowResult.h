﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/FlowStatus.h>
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
namespace Appflow
{
namespace Model
{
  class StartFlowResult
  {
  public:
    AWS_APPFLOW_API StartFlowResult();
    AWS_APPFLOW_API StartFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API StartFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline StartFlowResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline StartFlowResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline StartFlowResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatus = value; }
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatus = std::move(value); }
    inline StartFlowResult& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}
    inline StartFlowResult& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }
    inline StartFlowResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline StartFlowResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline StartFlowResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;

    FlowStatus m_flowStatus;

    Aws::String m_executionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
