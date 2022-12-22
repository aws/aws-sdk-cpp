/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivschat/model/DestinationConfiguration.h>
#include <aws/ivschat/model/LoggingConfigurationState.h>
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
namespace ivschat
{
namespace Model
{

  /**
   * <p>Summary information about a logging configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/LoggingConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class LoggingConfigurationSummary
  {
  public:
    AWS_IVSCHAT_API LoggingConfigurationSummary();
    AWS_IVSCHAT_API LoggingConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API LoggingConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline LoggingConfigurationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline LoggingConfigurationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration ARN.</p>
     */
    inline LoggingConfigurationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline LoggingConfigurationSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline LoggingConfigurationSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline LoggingConfigurationSummary& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged.</p>
     */
    inline LoggingConfigurationSummary& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline LoggingConfigurationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline LoggingConfigurationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline LoggingConfigurationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline LoggingConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline LoggingConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration name. The value does not need to be unique.</p>
     */
    inline LoggingConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline const LoggingConfigurationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline void SetState(const LoggingConfigurationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline void SetState(LoggingConfigurationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline LoggingConfigurationSummary& WithState(const LoggingConfigurationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the logging configuration. When this is <code>ACTIVE</code>, the
     * configuration is ready for logging chat content.</p>
     */
    inline LoggingConfigurationSummary& WithState(LoggingConfigurationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline LoggingConfigurationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline LoggingConfigurationSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline LoggingConfigurationSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LoggingConfigurationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
