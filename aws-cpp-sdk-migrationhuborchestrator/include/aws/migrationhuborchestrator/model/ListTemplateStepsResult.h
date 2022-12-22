/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateStepSummary.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class ListTemplateStepsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepsResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplateStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplateStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplateStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline const Aws::Vector<TemplateStepSummary>& GetTemplateStepSummaryList() const{ return m_templateStepSummaryList; }

    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline void SetTemplateStepSummaryList(const Aws::Vector<TemplateStepSummary>& value) { m_templateStepSummaryList = value; }

    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline void SetTemplateStepSummaryList(Aws::Vector<TemplateStepSummary>&& value) { m_templateStepSummaryList = std::move(value); }

    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline ListTemplateStepsResult& WithTemplateStepSummaryList(const Aws::Vector<TemplateStepSummary>& value) { SetTemplateStepSummaryList(value); return *this;}

    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline ListTemplateStepsResult& WithTemplateStepSummaryList(Aws::Vector<TemplateStepSummary>&& value) { SetTemplateStepSummaryList(std::move(value)); return *this;}

    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline ListTemplateStepsResult& AddTemplateStepSummaryList(const TemplateStepSummary& value) { m_templateStepSummaryList.push_back(value); return *this; }

    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline ListTemplateStepsResult& AddTemplateStepSummaryList(TemplateStepSummary&& value) { m_templateStepSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TemplateStepSummary> m_templateStepSummaryList;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
