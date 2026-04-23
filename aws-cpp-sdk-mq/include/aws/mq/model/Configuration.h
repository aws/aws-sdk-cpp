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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MQ
{
namespace Model
{

  /**
   * Returns information about all configurations.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Configuration">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API Configuration
  {
  public:
    Configuration();
    Configuration(Aws::Utils::Json::JsonView jsonValue);
    Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required. The ARN of the configuration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Required. The ARN of the configuration.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Required. The ARN of the configuration.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Required. The ARN of the configuration.
     */
    inline Configuration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Required. The ARN of the configuration.
     */
    inline Configuration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Required. The ARN of the configuration.
     */
    inline Configuration& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Required. The date and time of the configuration revision.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * Required. The date and time of the configuration revision.
     */
    inline Configuration& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * Required. The date and time of the configuration revision.
     */
    inline Configuration& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * Required. The description of the configuration.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Required. The description of the configuration.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Required. The description of the configuration.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Required. The description of the configuration.
     */
    inline Configuration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Required. The description of the configuration.
     */
    inline Configuration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Required. The description of the configuration.
     */
    inline Configuration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline Configuration& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline Configuration& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


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
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline Configuration& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline Configuration& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline Configuration& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline Configuration& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline Configuration& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline Configuration& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Required. The latest revision of the configuration.
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = value; }

    /**
     * Required. The latest revision of the configuration.
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::move(value); }

    /**
     * Required. The latest revision of the configuration.
     */
    inline Configuration& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * Required. The latest revision of the configuration.
     */
    inline Configuration& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline Configuration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline Configuration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.
     */
    inline Configuration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The list of all tags associated with this configuration.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The list of all tags associated with this configuration.
     */
    inline Configuration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    ConfigurationRevision m_latestRevision;
    bool m_latestRevisionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
