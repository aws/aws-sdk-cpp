﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/SchemaStatus.h>
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
namespace AppSync
{
namespace Model
{
  class GetSchemaCreationStatusResult
  {
  public:
    AWS_APPSYNC_API GetSchemaCreationStatusResult();
    AWS_APPSYNC_API GetSchemaCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetSchemaCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline const SchemaStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SchemaStatus& value) { m_status = value; }
    inline void SetStatus(SchemaStatus&& value) { m_status = std::move(value); }
    inline GetSchemaCreationStatusResult& WithStatus(const SchemaStatus& value) { SetStatus(value); return *this;}
    inline GetSchemaCreationStatusResult& WithStatus(SchemaStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline void SetDetails(const Aws::String& value) { m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_details.assign(value); }
    inline GetSchemaCreationStatusResult& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline GetSchemaCreationStatusResult& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline GetSchemaCreationStatusResult& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSchemaCreationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSchemaCreationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSchemaCreationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SchemaStatus m_status;

    Aws::String m_details;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
