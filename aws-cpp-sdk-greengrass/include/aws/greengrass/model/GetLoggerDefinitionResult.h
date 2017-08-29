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
  class AWS_GREENGRASS_API GetLoggerDefinitionResult
  {
  public:
    GetLoggerDefinitionResult();
    GetLoggerDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLoggerDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Arn of the definition.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Arn of the definition.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Arn of the definition.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Arn of the definition.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Arn of the definition.
     */
    inline GetLoggerDefinitionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Arn of the definition.
     */
    inline GetLoggerDefinitionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Arn of the definition.
     */
    inline GetLoggerDefinitionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Timestamp of when the definition was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * Timestamp of when the definition was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * Timestamp of when the definition was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * Timestamp of when the definition was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * Timestamp of when the definition was created.
     */
    inline GetLoggerDefinitionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * Timestamp of when the definition was created.
     */
    inline GetLoggerDefinitionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * Timestamp of when the definition was created.
     */
    inline GetLoggerDefinitionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Id of the definition.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Id of the definition.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * Id of the definition.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * Id of the definition.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * Id of the definition.
     */
    inline GetLoggerDefinitionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Id of the definition.
     */
    inline GetLoggerDefinitionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Id of the definition.
     */
    inline GetLoggerDefinitionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Last updated timestamp of the definition.
     */
    inline const Aws::String& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * Last updated timestamp of the definition.
     */
    inline void SetLastUpdatedTimestamp(const Aws::String& value) { m_lastUpdatedTimestamp = value; }

    /**
     * Last updated timestamp of the definition.
     */
    inline void SetLastUpdatedTimestamp(Aws::String&& value) { m_lastUpdatedTimestamp = std::move(value); }

    /**
     * Last updated timestamp of the definition.
     */
    inline void SetLastUpdatedTimestamp(const char* value) { m_lastUpdatedTimestamp.assign(value); }

    /**
     * Last updated timestamp of the definition.
     */
    inline GetLoggerDefinitionResult& WithLastUpdatedTimestamp(const Aws::String& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * Last updated timestamp of the definition.
     */
    inline GetLoggerDefinitionResult& WithLastUpdatedTimestamp(Aws::String&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

    /**
     * Last updated timestamp of the definition.
     */
    inline GetLoggerDefinitionResult& WithLastUpdatedTimestamp(const char* value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * Last version of the definition.
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }

    /**
     * Last version of the definition.
     */
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersion = value; }

    /**
     * Last version of the definition.
     */
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersion = std::move(value); }

    /**
     * Last version of the definition.
     */
    inline void SetLatestVersion(const char* value) { m_latestVersion.assign(value); }

    /**
     * Last version of the definition.
     */
    inline GetLoggerDefinitionResult& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}

    /**
     * Last version of the definition.
     */
    inline GetLoggerDefinitionResult& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}

    /**
     * Last version of the definition.
     */
    inline GetLoggerDefinitionResult& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}


    /**
     * Latest version arn of the definition.
     */
    inline const Aws::String& GetLatestVersionArn() const{ return m_latestVersionArn; }

    /**
     * Latest version arn of the definition.
     */
    inline void SetLatestVersionArn(const Aws::String& value) { m_latestVersionArn = value; }

    /**
     * Latest version arn of the definition.
     */
    inline void SetLatestVersionArn(Aws::String&& value) { m_latestVersionArn = std::move(value); }

    /**
     * Latest version arn of the definition.
     */
    inline void SetLatestVersionArn(const char* value) { m_latestVersionArn.assign(value); }

    /**
     * Latest version arn of the definition.
     */
    inline GetLoggerDefinitionResult& WithLatestVersionArn(const Aws::String& value) { SetLatestVersionArn(value); return *this;}

    /**
     * Latest version arn of the definition.
     */
    inline GetLoggerDefinitionResult& WithLatestVersionArn(Aws::String&& value) { SetLatestVersionArn(std::move(value)); return *this;}

    /**
     * Latest version arn of the definition.
     */
    inline GetLoggerDefinitionResult& WithLatestVersionArn(const char* value) { SetLatestVersionArn(value); return *this;}


    /**
     * Name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of the definition.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * Name of the definition.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * Name of the definition.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * Name of the definition.
     */
    inline GetLoggerDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of the definition.
     */
    inline GetLoggerDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of the definition.
     */
    inline GetLoggerDefinitionResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    Aws::String m_id;

    Aws::String m_lastUpdatedTimestamp;

    Aws::String m_latestVersion;

    Aws::String m_latestVersionArn;

    Aws::String m_name;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
