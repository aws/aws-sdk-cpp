/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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


    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }
    inline HoursOfOperation& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline HoursOfOperation& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline HoursOfOperation& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationArn() const{ return m_hoursOfOperationArn; }
    inline bool HoursOfOperationArnHasBeenSet() const { return m_hoursOfOperationArnHasBeenSet; }
    inline void SetHoursOfOperationArn(const Aws::String& value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn = value; }
    inline void SetHoursOfOperationArn(Aws::String&& value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn = std::move(value); }
    inline void SetHoursOfOperationArn(const char* value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn.assign(value); }
    inline HoursOfOperation& WithHoursOfOperationArn(const Aws::String& value) { SetHoursOfOperationArn(value); return *this;}
    inline HoursOfOperation& WithHoursOfOperationArn(Aws::String&& value) { SetHoursOfOperationArn(std::move(value)); return *this;}
    inline HoursOfOperation& WithHoursOfOperationArn(const char* value) { SetHoursOfOperationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the hours of operation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HoursOfOperation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HoursOfOperation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HoursOfOperation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the hours of operation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline HoursOfOperation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline HoursOfOperation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline HoursOfOperation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }
    inline HoursOfOperation& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}
    inline HoursOfOperation& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}
    inline HoursOfOperation& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline const Aws::Vector<HoursOfOperationConfig>& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const Aws::Vector<HoursOfOperationConfig>& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(Aws::Vector<HoursOfOperationConfig>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline HoursOfOperation& WithConfig(const Aws::Vector<HoursOfOperationConfig>& value) { SetConfig(value); return *this;}
    inline HoursOfOperation& WithConfig(Aws::Vector<HoursOfOperationConfig>&& value) { SetConfig(std::move(value)); return *this;}
    inline HoursOfOperation& AddConfig(const HoursOfOperationConfig& value) { m_configHasBeenSet = true; m_config.push_back(value); return *this; }
    inline HoursOfOperation& AddConfig(HoursOfOperationConfig&& value) { m_configHasBeenSet = true; m_config.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline HoursOfOperation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline HoursOfOperation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline HoursOfOperation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline HoursOfOperation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline HoursOfOperation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline HoursOfOperation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline HoursOfOperation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline HoursOfOperation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline HoursOfOperation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline HoursOfOperation& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline HoursOfOperation& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline HoursOfOperation& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline HoursOfOperation& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline HoursOfOperation& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
