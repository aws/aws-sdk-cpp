/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  class StartSchemaExtensionResult
  {
  public:
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult();
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline const Aws::String& GetSchemaExtensionId() const{ return m_schemaExtensionId; }

    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline void SetSchemaExtensionId(const Aws::String& value) { m_schemaExtensionId = value; }

    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline void SetSchemaExtensionId(Aws::String&& value) { m_schemaExtensionId = std::move(value); }

    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline void SetSchemaExtensionId(const char* value) { m_schemaExtensionId.assign(value); }

    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline StartSchemaExtensionResult& WithSchemaExtensionId(const Aws::String& value) { SetSchemaExtensionId(value); return *this;}

    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline StartSchemaExtensionResult& WithSchemaExtensionId(Aws::String&& value) { SetSchemaExtensionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline StartSchemaExtensionResult& WithSchemaExtensionId(const char* value) { SetSchemaExtensionId(value); return *this;}

  private:

    Aws::String m_schemaExtensionId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
