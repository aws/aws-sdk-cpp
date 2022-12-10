/**
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


    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline StartFlowResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline StartFlowResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline StartFlowResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatus = value; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatus = std::move(value); }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline StartFlowResult& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline StartFlowResult& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}


    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline StartFlowResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline StartFlowResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p> Returns the internal execution ID of an on-demand flow when the flow is
     * started. For scheduled or event-triggered flows, this value is null. </p>
     */
    inline StartFlowResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}

  private:

    Aws::String m_flowArn;

    FlowStatus m_flowStatus;

    Aws::String m_executionId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
