/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Specifies configuration information for the input data for the inference,
   * including timestamp format and delimiter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceInputNameConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceInputNameConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceInputNameConfiguration() = default;
    AWS_LOOKOUTEQUIPMENT_API InferenceInputNameConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceInputNameConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of the timestamp, whether Epoch time, or standard, with or without
     * hyphens (-). </p>
     */
    inline const Aws::String& GetTimestampFormat() const { return m_timestampFormat; }
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }
    template<typename TimestampFormatT = Aws::String>
    void SetTimestampFormat(TimestampFormatT&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::forward<TimestampFormatT>(value); }
    template<typename TimestampFormatT = Aws::String>
    InferenceInputNameConfiguration& WithTimestampFormat(TimestampFormatT&& value) { SetTimestampFormat(std::forward<TimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the delimiter character used between items in the data. </p>
     */
    inline const Aws::String& GetComponentTimestampDelimiter() const { return m_componentTimestampDelimiter; }
    inline bool ComponentTimestampDelimiterHasBeenSet() const { return m_componentTimestampDelimiterHasBeenSet; }
    template<typename ComponentTimestampDelimiterT = Aws::String>
    void SetComponentTimestampDelimiter(ComponentTimestampDelimiterT&& value) { m_componentTimestampDelimiterHasBeenSet = true; m_componentTimestampDelimiter = std::forward<ComponentTimestampDelimiterT>(value); }
    template<typename ComponentTimestampDelimiterT = Aws::String>
    InferenceInputNameConfiguration& WithComponentTimestampDelimiter(ComponentTimestampDelimiterT&& value) { SetComponentTimestampDelimiter(std::forward<ComponentTimestampDelimiterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;

    Aws::String m_componentTimestampDelimiter;
    bool m_componentTimestampDelimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
