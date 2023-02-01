/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/HoursOfOperationConfig.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about of the hours of operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperation">AWS
   * API Reference</a></p>
   */
  class HoursOfOperation
  {
  public:
    AWS_CONNECT_API HoursOfOperation();
    AWS_CONNECT_API HoursOfOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline HoursOfOperation& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline HoursOfOperation& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline HoursOfOperation& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationArn() const{ return m_hoursOfOperationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline bool HoursOfOperationArnHasBeenSet() const { return m_hoursOfOperationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline void SetHoursOfOperationArn(const Aws::String& value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline void SetHoursOfOperationArn(Aws::String&& value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline void SetHoursOfOperationArn(const char* value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline HoursOfOperation& WithHoursOfOperationArn(const Aws::String& value) { SetHoursOfOperationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline HoursOfOperation& WithHoursOfOperationArn(Aws::String&& value) { SetHoursOfOperationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline HoursOfOperation& WithHoursOfOperationArn(const char* value) { SetHoursOfOperationArn(value); return *this;}


    /**
     * <p>The name for the hours of operation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline HoursOfOperation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline HoursOfOperation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the hours of operation.</p>
     */
    inline HoursOfOperation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the hours of operation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline HoursOfOperation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline HoursOfOperation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the hours of operation.</p>
     */
    inline HoursOfOperation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline HoursOfOperation& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline HoursOfOperation& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline HoursOfOperation& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}


    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline const Aws::Vector<HoursOfOperationConfig>& GetConfig() const{ return m_config; }

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline void SetConfig(const Aws::Vector<HoursOfOperationConfig>& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline void SetConfig(Aws::Vector<HoursOfOperationConfig>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline HoursOfOperation& WithConfig(const Aws::Vector<HoursOfOperationConfig>& value) { SetConfig(value); return *this;}

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline HoursOfOperation& WithConfig(Aws::Vector<HoursOfOperationConfig>&& value) { SetConfig(std::move(value)); return *this;}

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline HoursOfOperation& AddConfig(const HoursOfOperationConfig& value) { m_configHasBeenSet = true; m_config.push_back(value); return *this; }

    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline HoursOfOperation& AddConfig(HoursOfOperationConfig&& value) { m_configHasBeenSet = true; m_config.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HoursOfOperation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_hoursOfOperationArn;
    bool m_hoursOfOperationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::Vector<HoursOfOperationConfig> m_config;
    bool m_configHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
