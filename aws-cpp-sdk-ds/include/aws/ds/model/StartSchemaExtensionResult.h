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
  class AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult
  {
  public:
    StartSchemaExtensionResult();
    StartSchemaExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartSchemaExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
