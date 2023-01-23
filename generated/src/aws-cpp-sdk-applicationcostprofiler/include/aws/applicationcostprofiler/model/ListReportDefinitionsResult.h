/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/applicationcostprofiler/model/ReportDefinition.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{
  class ListReportDefinitionsResult
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API ListReportDefinitionsResult();
    AWS_APPLICATIONCOSTPROFILER_API ListReportDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API ListReportDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved reports.</p>
     */
    inline const Aws::Vector<ReportDefinition>& GetReportDefinitions() const{ return m_reportDefinitions; }

    /**
     * <p>The retrieved reports.</p>
     */
    inline void SetReportDefinitions(const Aws::Vector<ReportDefinition>& value) { m_reportDefinitions = value; }

    /**
     * <p>The retrieved reports.</p>
     */
    inline void SetReportDefinitions(Aws::Vector<ReportDefinition>&& value) { m_reportDefinitions = std::move(value); }

    /**
     * <p>The retrieved reports.</p>
     */
    inline ListReportDefinitionsResult& WithReportDefinitions(const Aws::Vector<ReportDefinition>& value) { SetReportDefinitions(value); return *this;}

    /**
     * <p>The retrieved reports.</p>
     */
    inline ListReportDefinitionsResult& WithReportDefinitions(Aws::Vector<ReportDefinition>&& value) { SetReportDefinitions(std::move(value)); return *this;}

    /**
     * <p>The retrieved reports.</p>
     */
    inline ListReportDefinitionsResult& AddReportDefinitions(const ReportDefinition& value) { m_reportDefinitions.push_back(value); return *this; }

    /**
     * <p>The retrieved reports.</p>
     */
    inline ListReportDefinitionsResult& AddReportDefinitions(ReportDefinition&& value) { m_reportDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListReportDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListReportDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListReportDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ReportDefinition> m_reportDefinitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
