/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaStatus.h>
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
  class DeleteSchemaResult
  {
  public:
    AWS_GLUE_API DeleteSchemaResult();
    AWS_GLUE_API DeleteSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema being deleted.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline DeleteSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline DeleteSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline DeleteSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema being deleted.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }
    inline DeleteSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline DeleteSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline DeleteSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema.</p>
     */
    inline const SchemaStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SchemaStatus& value) { m_status = value; }
    inline void SetStatus(SchemaStatus&& value) { m_status = std::move(value); }
    inline DeleteSchemaResult& WithStatus(const SchemaStatus& value) { SetStatus(value); return *this;}
    inline DeleteSchemaResult& WithStatus(SchemaStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    SchemaStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
