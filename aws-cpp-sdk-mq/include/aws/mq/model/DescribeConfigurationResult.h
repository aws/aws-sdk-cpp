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
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/ConfigurationRevision.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_MQ_API DescribeConfigurationResult
  {
  public:
    DescribeConfigurationResult();
    DescribeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Required. The ARN of the configuration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Required. The ARN of the configuration.
     */
    inline DescribeConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Required. The ARN of the configuration.
     */
    inline DescribeConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Required. The ARN of the configuration.
     */
    inline DescribeConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Required. The date and time of the configuration revision.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline DescribeConfigurationResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * Required. The date and time of the configuration revision.
     */
    inline DescribeConfigurationResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * Required. The description of the configuration.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * Required. The description of the configuration.
     */
    inline DescribeConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Required. The description of the configuration.
     */
    inline DescribeConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Required. The description of the configuration.
     */
    inline DescribeConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline DescribeConfigurationResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline DescribeConfigurationResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeConfigurationResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeConfigurationResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeConfigurationResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


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
    inline DescribeConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Required. The latest revision of the configuration.
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }

    /**
     * Required. The latest revision of the configuration.
     */
    inline DescribeConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * Required. The latest revision of the configuration.
     */
    inline DescribeConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


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
    inline DescribeConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline DescribeConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline DescribeConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The list of all tags associated with this configuration.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline DescribeConfigurationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_created;

    Aws::String m_description;

    EngineType m_engineType;

    Aws::String m_engineVersion;

    Aws::String m_id;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
