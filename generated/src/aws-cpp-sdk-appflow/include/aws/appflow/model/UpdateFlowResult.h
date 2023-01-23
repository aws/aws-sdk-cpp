/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
  class UpdateFlowResult
  {
  public:
    AWS_APPFLOW_API UpdateFlowResult();
    AWS_APPFLOW_API UpdateFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API UpdateFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }

    /**
     * <p>Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatus = value; }

    /**
     * <p>Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatus = std::move(value); }

    /**
     * <p>Indicates the current status of the flow. </p>
     */
    inline UpdateFlowResult& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}

    /**
     * <p>Indicates the current status of the flow. </p>
     */
    inline UpdateFlowResult& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}

  private:

    FlowStatus m_flowStatus;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
