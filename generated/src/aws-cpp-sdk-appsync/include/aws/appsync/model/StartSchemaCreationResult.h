/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/SchemaStatus.h>
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
  class StartSchemaCreationResult
  {
  public:
    AWS_APPSYNC_API StartSchemaCreationResult();
    AWS_APPSYNC_API StartSchemaCreationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API StartSchemaCreationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline StartSchemaCreationResult& WithStatus(const SchemaStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline StartSchemaCreationResult& WithStatus(SchemaStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SchemaStatus m_status;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
