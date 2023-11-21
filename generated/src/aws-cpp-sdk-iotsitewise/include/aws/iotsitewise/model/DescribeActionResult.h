/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TargetResource.h>
#include <aws/iotsitewise/model/ActionPayload.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeActionResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeActionResult();
    AWS_IOTSITEWISE_API DescribeActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetActionId(const char* value) { m_actionId.assign(value); }

    /**
     * <p>The ID of the action.</p>
     */
    inline DescribeActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The ID of the action.</p>
     */
    inline DescribeActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action.</p>
     */
    inline DescribeActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline const TargetResource& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline void SetTargetResource(const TargetResource& value) { m_targetResource = value; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline void SetTargetResource(TargetResource&& value) { m_targetResource = std::move(value); }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline DescribeActionResult& WithTargetResource(const TargetResource& value) { SetTargetResource(value); return *this;}

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline DescribeActionResult& WithTargetResource(TargetResource&& value) { SetTargetResource(std::move(value)); return *this;}


    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const{ return m_actionDefinitionId; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(const Aws::String& value) { m_actionDefinitionId = value; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(Aws::String&& value) { m_actionDefinitionId = std::move(value); }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(const char* value) { m_actionDefinitionId.assign(value); }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline DescribeActionResult& WithActionDefinitionId(const Aws::String& value) { SetActionDefinitionId(value); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline DescribeActionResult& WithActionDefinitionId(Aws::String&& value) { SetActionDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline DescribeActionResult& WithActionDefinitionId(const char* value) { SetActionDefinitionId(value); return *this;}


    /**
     * <p>The JSON payload of the action.</p>
     */
    inline const ActionPayload& GetActionPayload() const{ return m_actionPayload; }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline void SetActionPayload(const ActionPayload& value) { m_actionPayload = value; }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline void SetActionPayload(ActionPayload&& value) { m_actionPayload = std::move(value); }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline DescribeActionResult& WithActionPayload(const ActionPayload& value) { SetActionPayload(value); return *this;}

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline DescribeActionResult& WithActionPayload(ActionPayload&& value) { SetActionPayload(std::move(value)); return *this;}


    /**
     * <p>The time the action was executed.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The time the action was executed.</p>
     */
    inline void SetExecutionTime(const Aws::Utils::DateTime& value) { m_executionTime = value; }

    /**
     * <p>The time the action was executed.</p>
     */
    inline void SetExecutionTime(Aws::Utils::DateTime&& value) { m_executionTime = std::move(value); }

    /**
     * <p>The time the action was executed.</p>
     */
    inline DescribeActionResult& WithExecutionTime(const Aws::Utils::DateTime& value) { SetExecutionTime(value); return *this;}

    /**
     * <p>The time the action was executed.</p>
     */
    inline DescribeActionResult& WithExecutionTime(Aws::Utils::DateTime&& value) { SetExecutionTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_actionId;

    TargetResource m_targetResource;

    Aws::String m_actionDefinitionId;

    ActionPayload m_actionPayload;

    Aws::Utils::DateTime m_executionTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
