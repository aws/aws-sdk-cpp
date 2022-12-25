/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/UpdateResult.h>
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
   * <p>The response elements represent the output of a SQL statement over an array
   * of data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatementResponse">AWS
   * API Reference</a></p>
   */
  class BatchExecuteStatementResult
  {
  public:
    AWS_RDSDATASERVICE_API BatchExecuteStatementResult();
    AWS_RDSDATASERVICE_API BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RDSDATASERVICE_API BatchExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline const Aws::Vector<UpdateResult>& GetUpdateResults() const{ return m_updateResults; }

    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline void SetUpdateResults(const Aws::Vector<UpdateResult>& value) { m_updateResults = value; }

    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline void SetUpdateResults(Aws::Vector<UpdateResult>&& value) { m_updateResults = std::move(value); }

    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline BatchExecuteStatementResult& WithUpdateResults(const Aws::Vector<UpdateResult>& value) { SetUpdateResults(value); return *this;}

    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline BatchExecuteStatementResult& WithUpdateResults(Aws::Vector<UpdateResult>&& value) { SetUpdateResults(std::move(value)); return *this;}

    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline BatchExecuteStatementResult& AddUpdateResults(const UpdateResult& value) { m_updateResults.push_back(value); return *this; }

    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline BatchExecuteStatementResult& AddUpdateResults(UpdateResult&& value) { m_updateResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateResult> m_updateResults;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
