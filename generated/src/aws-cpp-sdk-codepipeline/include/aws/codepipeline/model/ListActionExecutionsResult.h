/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionExecutionDetail.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListActionExecutionsResult
  {
  public:
    AWS_CODEPIPELINE_API ListActionExecutionsResult();
    AWS_CODEPIPELINE_API ListActionExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListActionExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline const Aws::Vector<ActionExecutionDetail>& GetActionExecutionDetails() const{ return m_actionExecutionDetails; }

    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline void SetActionExecutionDetails(const Aws::Vector<ActionExecutionDetail>& value) { m_actionExecutionDetails = value; }

    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline void SetActionExecutionDetails(Aws::Vector<ActionExecutionDetail>&& value) { m_actionExecutionDetails = std::move(value); }

    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline ListActionExecutionsResult& WithActionExecutionDetails(const Aws::Vector<ActionExecutionDetail>& value) { SetActionExecutionDetails(value); return *this;}

    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline ListActionExecutionsResult& WithActionExecutionDetails(Aws::Vector<ActionExecutionDetail>&& value) { SetActionExecutionDetails(std::move(value)); return *this;}

    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline ListActionExecutionsResult& AddActionExecutionDetails(const ActionExecutionDetail& value) { m_actionExecutionDetails.push_back(value); return *this; }

    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline ListActionExecutionsResult& AddActionExecutionDetails(ActionExecutionDetail&& value) { m_actionExecutionDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline ListActionExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline ListActionExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline ListActionExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActionExecutionDetail> m_actionExecutionDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
