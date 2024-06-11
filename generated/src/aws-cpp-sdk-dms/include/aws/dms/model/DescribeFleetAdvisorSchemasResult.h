﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SchemaResponse.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeFleetAdvisorSchemasResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of <code>SchemaResponse</code> objects.</p>
     */
    inline const Aws::Vector<SchemaResponse>& GetFleetAdvisorSchemas() const{ return m_fleetAdvisorSchemas; }
    inline void SetFleetAdvisorSchemas(const Aws::Vector<SchemaResponse>& value) { m_fleetAdvisorSchemas = value; }
    inline void SetFleetAdvisorSchemas(Aws::Vector<SchemaResponse>&& value) { m_fleetAdvisorSchemas = std::move(value); }
    inline DescribeFleetAdvisorSchemasResult& WithFleetAdvisorSchemas(const Aws::Vector<SchemaResponse>& value) { SetFleetAdvisorSchemas(value); return *this;}
    inline DescribeFleetAdvisorSchemasResult& WithFleetAdvisorSchemas(Aws::Vector<SchemaResponse>&& value) { SetFleetAdvisorSchemas(std::move(value)); return *this;}
    inline DescribeFleetAdvisorSchemasResult& AddFleetAdvisorSchemas(const SchemaResponse& value) { m_fleetAdvisorSchemas.push_back(value); return *this; }
    inline DescribeFleetAdvisorSchemasResult& AddFleetAdvisorSchemas(SchemaResponse&& value) { m_fleetAdvisorSchemas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFleetAdvisorSchemasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFleetAdvisorSchemasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFleetAdvisorSchemasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetAdvisorSchemasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetAdvisorSchemasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetAdvisorSchemasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaResponse> m_fleetAdvisorSchemas;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
