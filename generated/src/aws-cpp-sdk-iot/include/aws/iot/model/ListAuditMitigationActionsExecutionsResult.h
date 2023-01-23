/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionExecutionMetadata.h>
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
  class ListAuditMitigationActionsExecutionsResult
  {
  public:
    AWS_IOT_API ListAuditMitigationActionsExecutionsResult();
    AWS_IOT_API ListAuditMitigationActionsExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditMitigationActionsExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline const Aws::Vector<AuditMitigationActionExecutionMetadata>& GetActionsExecutions() const{ return m_actionsExecutions; }

    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline void SetActionsExecutions(const Aws::Vector<AuditMitigationActionExecutionMetadata>& value) { m_actionsExecutions = value; }

    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline void SetActionsExecutions(Aws::Vector<AuditMitigationActionExecutionMetadata>&& value) { m_actionsExecutions = std::move(value); }

    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& WithActionsExecutions(const Aws::Vector<AuditMitigationActionExecutionMetadata>& value) { SetActionsExecutions(value); return *this;}

    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& WithActionsExecutions(Aws::Vector<AuditMitigationActionExecutionMetadata>&& value) { SetActionsExecutions(std::move(value)); return *this;}

    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& AddActionsExecutions(const AuditMitigationActionExecutionMetadata& value) { m_actionsExecutions.push_back(value); return *this; }

    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& AddActionsExecutions(AuditMitigationActionExecutionMetadata&& value) { m_actionsExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditMitigationActionsExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuditMitigationActionExecutionMetadata> m_actionsExecutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
