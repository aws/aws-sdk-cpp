/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Athena
{
namespace Model
{
  class StartQueryExecutionResult
  {
  public:
    AWS_ATHENA_API StartQueryExecutionResult();
    AWS_ATHENA_API StartQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API StartQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }

    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionId = value; }

    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionId = std::move(value); }

    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionId.assign(value); }

    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline StartQueryExecutionResult& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}

    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline StartQueryExecutionResult& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline StartQueryExecutionResult& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}

  private:

    Aws::String m_queryExecutionId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
