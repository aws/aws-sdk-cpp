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
  class CreateFlowResult
  {
  public:
    AWS_APPFLOW_API CreateFlowResult();
    AWS_APPFLOW_API CreateFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API CreateFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline CreateFlowResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline CreateFlowResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline CreateFlowResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatus = value; }
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatus = std::move(value); }
    inline CreateFlowResult& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}
    inline CreateFlowResult& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;

    FlowStatus m_flowStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
