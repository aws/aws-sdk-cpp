﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaVersionStatus.h>
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
namespace Glue
{
namespace Model
{
  class RegisterSchemaVersionResult
  {
  public:
    AWS_GLUE_API RegisterSchemaVersionResult();
    AWS_GLUE_API RegisterSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API RegisterSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID that represents the version of this schema.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }
    inline RegisterSchemaVersionResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}
    inline RegisterSchemaVersionResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}
    inline RegisterSchemaVersionResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this schema (for sync flow only, in case this is the first
     * version).</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline RegisterSchemaVersionResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema version.</p>
     */
    inline const SchemaVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SchemaVersionStatus& value) { m_status = value; }
    inline void SetStatus(SchemaVersionStatus&& value) { m_status = std::move(value); }
    inline RegisterSchemaVersionResult& WithStatus(const SchemaVersionStatus& value) { SetStatus(value); return *this;}
    inline RegisterSchemaVersionResult& WithStatus(SchemaVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterSchemaVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterSchemaVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterSchemaVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaVersionId;

    long long m_versionNumber;

    SchemaVersionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
