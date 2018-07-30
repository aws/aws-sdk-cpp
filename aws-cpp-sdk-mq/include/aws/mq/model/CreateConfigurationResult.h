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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/ConfigurationRevision.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API CreateConfigurationResult
  {
  public:
    CreateConfigurationResult();
    CreateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline CreateConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline CreateConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Required. The Amazon Resource Name (ARN) of the configuration.
     */
    inline CreateConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Required. The date and time of the configuration.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * Required. The date and time of the configuration.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * Required. The date and time of the configuration.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * Required. The date and time of the configuration.
     */
    inline CreateConfigurationResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * Required. The date and time of the configuration.
     */
    inline CreateConfigurationResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline CreateConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline CreateConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline CreateConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The latest revision of the configuration.
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * The latest revision of the configuration.
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }

    /**
     * The latest revision of the configuration.
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }

    /**
     * The latest revision of the configuration.
     */
    inline CreateConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * The latest revision of the configuration.
     */
    inline CreateConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline CreateConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline CreateConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline CreateConfigurationResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_created;

    Aws::String m_id;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
