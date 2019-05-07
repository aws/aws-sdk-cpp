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
  class AWS_APPSYNC_API GetSchemaCreationStatusResult
  {
  public:
    GetSchemaCreationStatusResult();
    GetSchemaCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSchemaCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline const SchemaStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline void SetStatus(const SchemaStatus& value) { m_status = value; }

    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline void SetStatus(SchemaStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline GetSchemaCreationStatusResult& WithStatus(const SchemaStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline GetSchemaCreationStatusResult& WithStatus(SchemaStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_details = value; }

    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_details = std::move(value); }

    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline void SetDetails(const char* value) { m_details.assign(value); }

    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline GetSchemaCreationStatusResult& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline GetSchemaCreationStatusResult& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline GetSchemaCreationStatusResult& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:

    SchemaStatus m_status;

    Aws::String m_details;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
