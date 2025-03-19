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
    AWS_CONNECT_API HoursOfOperation() = default;
    AWS_CONNECT_API HoursOfOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    template<typename HoursOfOperationIdT = Aws::String>
    void SetHoursOfOperationId(HoursOfOperationIdT&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value); }
    template<typename HoursOfOperationIdT = Aws::String>
    HoursOfOperation& WithHoursOfOperationId(HoursOfOperationIdT&& value) { SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationArn() const { return m_hoursOfOperationArn; }
    inline bool HoursOfOperationArnHasBeenSet() const { return m_hoursOfOperationArnHasBeenSet; }
    template<typename HoursOfOperationArnT = Aws::String>
    void SetHoursOfOperationArn(HoursOfOperationArnT&& value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn = std::forward<HoursOfOperationArnT>(value); }
    template<typename HoursOfOperationArnT = Aws::String>
    HoursOfOperation& WithHoursOfOperationArn(HoursOfOperationArnT&& value) { SetHoursOfOperationArn(std::forward<HoursOfOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the hours of operation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HoursOfOperation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the hours of operation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    HoursOfOperation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    HoursOfOperation& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the hours of operation.</p>
     */
    inline const Aws::Vector<HoursOfOperationConfig>& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = Aws::Vector<HoursOfOperationConfig>>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = Aws::Vector<HoursOfOperationConfig>>
    HoursOfOperation& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    template<typename ConfigT = HoursOfOperationConfig>
    HoursOfOperation& AddConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config.emplace_back(std::forward<ConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    HoursOfOperation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    HoursOfOperation& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    HoursOfOperation& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    HoursOfOperation& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
