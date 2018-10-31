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
#include <aws/greengrass/model/CoreDefinitionVersion.h>
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
  class AWS_GREENGRASS_API GetCoreDefinitionVersionResult
  {
  public:
    GetCoreDefinitionVersionResult();
    GetCoreDefinitionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCoreDefinitionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the core definition version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the core definition version.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the core definition version.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the core definition version.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline GetCoreDefinitionVersionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline GetCoreDefinitionVersionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the core definition version was
     * created.
     */
    inline GetCoreDefinitionVersionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Information about the core definition version.
     */
    inline const CoreDefinitionVersion& GetDefinition() const{ return m_definition; }

    /**
     * Information about the core definition version.
     */
    inline void SetDefinition(const CoreDefinitionVersion& value) { m_definition = value; }

    /**
     * Information about the core definition version.
     */
    inline void SetDefinition(CoreDefinitionVersion&& value) { m_definition = std::move(value); }

    /**
     * Information about the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithDefinition(const CoreDefinitionVersion& value) { SetDefinition(value); return *this;}

    /**
     * Information about the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithDefinition(CoreDefinitionVersion&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * The ID of the core definition version.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the core definition version.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the core definition version.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the core definition version.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetCoreDefinitionVersionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetCoreDefinitionVersionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetCoreDefinitionVersionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The version of the core definition version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The version of the core definition version.
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * The version of the core definition version.
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * The version of the core definition version.
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * The version of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The version of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The version of the core definition version.
     */
    inline GetCoreDefinitionVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    CoreDefinitionVersion m_definition;

    Aws::String m_id;

    Aws::String m_nextToken;

    Aws::String m_version;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
