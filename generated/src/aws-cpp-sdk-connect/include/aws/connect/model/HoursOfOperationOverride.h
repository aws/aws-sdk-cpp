/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/HoursOfOperationOverrideConfig.h>
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
   * <p>Information about the hours of operations override.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperationOverride">AWS
   * API Reference</a></p>
   */
  class HoursOfOperationOverride
  {
  public:
    AWS_CONNECT_API HoursOfOperationOverride() = default;
    AWS_CONNECT_API HoursOfOperationOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the hours of operation override.</p>
     */
    inline const Aws::String& GetHoursOfOperationOverrideId() const { return m_hoursOfOperationOverrideId; }
    inline bool HoursOfOperationOverrideIdHasBeenSet() const { return m_hoursOfOperationOverrideIdHasBeenSet; }
    template<typename HoursOfOperationOverrideIdT = Aws::String>
    void SetHoursOfOperationOverrideId(HoursOfOperationOverrideIdT&& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = std::forward<HoursOfOperationOverrideIdT>(value); }
    template<typename HoursOfOperationOverrideIdT = Aws::String>
    HoursOfOperationOverride& WithHoursOfOperationOverrideId(HoursOfOperationOverrideIdT&& value) { SetHoursOfOperationOverrideId(std::forward<HoursOfOperationOverrideIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    template<typename HoursOfOperationIdT = Aws::String>
    void SetHoursOfOperationId(HoursOfOperationIdT&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value); }
    template<typename HoursOfOperationIdT = Aws::String>
    HoursOfOperationOverride& WithHoursOfOperationId(HoursOfOperationIdT&& value) { SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value)); return *this;}
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
    HoursOfOperationOverride& WithHoursOfOperationArn(HoursOfOperationArnT&& value) { SetHoursOfOperationArn(std::forward<HoursOfOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hours of operation override.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HoursOfOperationOverride& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hours of operation override.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    HoursOfOperationOverride& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the hours of operation override: day, start
     * time, and end time.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideConfig>& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = Aws::Vector<HoursOfOperationOverrideConfig>>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = Aws::Vector<HoursOfOperationOverrideConfig>>
    HoursOfOperationOverride& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    template<typename ConfigT = HoursOfOperationOverrideConfig>
    HoursOfOperationOverride& AddConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config.emplace_back(std::forward<ConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date from which the hours of operation override would be effective.</p>
     */
    inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
    inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
    template<typename EffectiveFromT = Aws::String>
    void SetEffectiveFrom(EffectiveFromT&& value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom = std::forward<EffectiveFromT>(value); }
    template<typename EffectiveFromT = Aws::String>
    HoursOfOperationOverride& WithEffectiveFrom(EffectiveFromT&& value) { SetEffectiveFrom(std::forward<EffectiveFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date until the hours of operation override is effective.</p>
     */
    inline const Aws::String& GetEffectiveTill() const { return m_effectiveTill; }
    inline bool EffectiveTillHasBeenSet() const { return m_effectiveTillHasBeenSet; }
    template<typename EffectiveTillT = Aws::String>
    void SetEffectiveTill(EffectiveTillT&& value) { m_effectiveTillHasBeenSet = true; m_effectiveTill = std::forward<EffectiveTillT>(value); }
    template<typename EffectiveTillT = Aws::String>
    HoursOfOperationOverride& WithEffectiveTill(EffectiveTillT&& value) { SetEffectiveTill(std::forward<EffectiveTillT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hoursOfOperationOverrideId;
    bool m_hoursOfOperationOverrideIdHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_hoursOfOperationArn;
    bool m_hoursOfOperationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<HoursOfOperationOverrideConfig> m_config;
    bool m_configHasBeenSet = false;

    Aws::String m_effectiveFrom;
    bool m_effectiveFromHasBeenSet = false;

    Aws::String m_effectiveTill;
    bool m_effectiveTillHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
