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
    AWS_CONNECT_API HoursOfOperationOverride();
    AWS_CONNECT_API HoursOfOperationOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the hours of operation override.</p>
     */
    inline const Aws::String& GetHoursOfOperationOverrideId() const{ return m_hoursOfOperationOverrideId; }
    inline bool HoursOfOperationOverrideIdHasBeenSet() const { return m_hoursOfOperationOverrideIdHasBeenSet; }
    inline void SetHoursOfOperationOverrideId(const Aws::String& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = value; }
    inline void SetHoursOfOperationOverrideId(Aws::String&& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = std::move(value); }
    inline void SetHoursOfOperationOverrideId(const char* value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId.assign(value); }
    inline HoursOfOperationOverride& WithHoursOfOperationOverrideId(const Aws::String& value) { SetHoursOfOperationOverrideId(value); return *this;}
    inline HoursOfOperationOverride& WithHoursOfOperationOverrideId(Aws::String&& value) { SetHoursOfOperationOverrideId(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithHoursOfOperationOverrideId(const char* value) { SetHoursOfOperationOverrideId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }
    inline HoursOfOperationOverride& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline HoursOfOperationOverride& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
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
    inline HoursOfOperationOverride& WithHoursOfOperationArn(const Aws::String& value) { SetHoursOfOperationArn(value); return *this;}
    inline HoursOfOperationOverride& WithHoursOfOperationArn(Aws::String&& value) { SetHoursOfOperationArn(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithHoursOfOperationArn(const char* value) { SetHoursOfOperationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hours of operation override.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HoursOfOperationOverride& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HoursOfOperationOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hours of operation override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline HoursOfOperationOverride& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline HoursOfOperationOverride& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the hours of operation override: day, start
     * time, and end time.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideConfig>& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const Aws::Vector<HoursOfOperationOverrideConfig>& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(Aws::Vector<HoursOfOperationOverrideConfig>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline HoursOfOperationOverride& WithConfig(const Aws::Vector<HoursOfOperationOverrideConfig>& value) { SetConfig(value); return *this;}
    inline HoursOfOperationOverride& WithConfig(Aws::Vector<HoursOfOperationOverrideConfig>&& value) { SetConfig(std::move(value)); return *this;}
    inline HoursOfOperationOverride& AddConfig(const HoursOfOperationOverrideConfig& value) { m_configHasBeenSet = true; m_config.push_back(value); return *this; }
    inline HoursOfOperationOverride& AddConfig(HoursOfOperationOverrideConfig&& value) { m_configHasBeenSet = true; m_config.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date from which the hours of operation override would be effective.</p>
     */
    inline const Aws::String& GetEffectiveFrom() const{ return m_effectiveFrom; }
    inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
    inline void SetEffectiveFrom(const Aws::String& value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom = value; }
    inline void SetEffectiveFrom(Aws::String&& value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom = std::move(value); }
    inline void SetEffectiveFrom(const char* value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom.assign(value); }
    inline HoursOfOperationOverride& WithEffectiveFrom(const Aws::String& value) { SetEffectiveFrom(value); return *this;}
    inline HoursOfOperationOverride& WithEffectiveFrom(Aws::String&& value) { SetEffectiveFrom(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithEffectiveFrom(const char* value) { SetEffectiveFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date till which the hours of operation override would be effective.</p>
     */
    inline const Aws::String& GetEffectiveTill() const{ return m_effectiveTill; }
    inline bool EffectiveTillHasBeenSet() const { return m_effectiveTillHasBeenSet; }
    inline void SetEffectiveTill(const Aws::String& value) { m_effectiveTillHasBeenSet = true; m_effectiveTill = value; }
    inline void SetEffectiveTill(Aws::String&& value) { m_effectiveTillHasBeenSet = true; m_effectiveTill = std::move(value); }
    inline void SetEffectiveTill(const char* value) { m_effectiveTillHasBeenSet = true; m_effectiveTill.assign(value); }
    inline HoursOfOperationOverride& WithEffectiveTill(const Aws::String& value) { SetEffectiveTill(value); return *this;}
    inline HoursOfOperationOverride& WithEffectiveTill(Aws::String&& value) { SetEffectiveTill(std::move(value)); return *this;}
    inline HoursOfOperationOverride& WithEffectiveTill(const char* value) { SetEffectiveTill(value); return *this;}
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
