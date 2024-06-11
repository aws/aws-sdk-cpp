﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class UpdateSchemaResult
  {
  public:
    AWS_GLUE_API UpdateSchemaResult();
    AWS_GLUE_API UpdateSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline UpdateSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline UpdateSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline UpdateSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }
    inline UpdateSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline UpdateSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline UpdateSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the registry that contains the schema.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }
    inline UpdateSchemaResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline UpdateSchemaResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline UpdateSchemaResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_registryName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
