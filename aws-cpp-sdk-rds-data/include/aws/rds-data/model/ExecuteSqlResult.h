/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/SqlStatementResult.h>
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
namespace RDSDataService
{
namespace Model
{
  /**
   * Execute SQL response<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteSqlResponse">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ExecuteSqlResult
  {
  public:
    ExecuteSqlResult();
    ExecuteSqlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExecuteSqlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Results returned by executing the sql statement(s)
     */
    inline const Aws::Vector<SqlStatementResult>& GetSqlStatementResults() const{ return m_sqlStatementResults; }

    /**
     * Results returned by executing the sql statement(s)
     */
    inline void SetSqlStatementResults(const Aws::Vector<SqlStatementResult>& value) { m_sqlStatementResults = value; }

    /**
     * Results returned by executing the sql statement(s)
     */
    inline void SetSqlStatementResults(Aws::Vector<SqlStatementResult>&& value) { m_sqlStatementResults = std::move(value); }

    /**
     * Results returned by executing the sql statement(s)
     */
    inline ExecuteSqlResult& WithSqlStatementResults(const Aws::Vector<SqlStatementResult>& value) { SetSqlStatementResults(value); return *this;}

    /**
     * Results returned by executing the sql statement(s)
     */
    inline ExecuteSqlResult& WithSqlStatementResults(Aws::Vector<SqlStatementResult>&& value) { SetSqlStatementResults(std::move(value)); return *this;}

    /**
     * Results returned by executing the sql statement(s)
     */
    inline ExecuteSqlResult& AddSqlStatementResults(const SqlStatementResult& value) { m_sqlStatementResults.push_back(value); return *this; }

    /**
     * Results returned by executing the sql statement(s)
     */
    inline ExecuteSqlResult& AddSqlStatementResults(SqlStatementResult&& value) { m_sqlStatementResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SqlStatementResult> m_sqlStatementResults;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
