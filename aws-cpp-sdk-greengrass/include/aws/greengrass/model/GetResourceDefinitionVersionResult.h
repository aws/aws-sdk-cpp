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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ResourceDefinitionVersion.h>
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
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API GetResourceDefinitionVersionResult
  {
  public:
    GetResourceDefinitionVersionResult();
    GetResourceDefinitionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourceDefinitionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Arn of the resource definition version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Arn of the resource definition version.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Arn of the resource definition version.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Arn of the resource definition version.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Arn of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Arn of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Arn of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline GetResourceDefinitionVersionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline GetResourceDefinitionVersionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline GetResourceDefinitionVersionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Information about the definition.
     */
    inline const ResourceDefinitionVersion& GetDefinition() const{ return m_definition; }

    /**
     * Information about the definition.
     */
    inline void SetDefinition(const ResourceDefinitionVersion& value) { m_definition = value; }

    /**
     * Information about the definition.
     */
    inline void SetDefinition(ResourceDefinitionVersion&& value) { m_definition = std::move(value); }

    /**
     * Information about the definition.
     */
    inline GetResourceDefinitionVersionResult& WithDefinition(const ResourceDefinitionVersion& value) { SetDefinition(value); return *this;}

    /**
     * Information about the definition.
     */
    inline GetResourceDefinitionVersionResult& WithDefinition(ResourceDefinitionVersion&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * The ID of the resource definition version.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the resource definition version.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the resource definition version.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the resource definition version.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The version of the resource definition version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The version of the resource definition version.
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * The version of the resource definition version.
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * The version of the resource definition version.
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * The version of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The version of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The version of the resource definition version.
     */
    inline GetResourceDefinitionVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    ResourceDefinitionVersion m_definition;

    Aws::String m_id;

    Aws::String m_version;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
