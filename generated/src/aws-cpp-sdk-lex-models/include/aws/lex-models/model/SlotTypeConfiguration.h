/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/SlotTypeRegexConfiguration.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides configuration information for a slot type.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/SlotTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class SlotTypeConfiguration
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API SlotTypeConfiguration() = default;
    AWS_LEXMODELBUILDINGSERVICE_API SlotTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API SlotTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline const SlotTypeRegexConfiguration& GetRegexConfiguration() const { return m_regexConfiguration; }
    inline bool RegexConfigurationHasBeenSet() const { return m_regexConfigurationHasBeenSet; }
    template<typename RegexConfigurationT = SlotTypeRegexConfiguration>
    void SetRegexConfiguration(RegexConfigurationT&& value) { m_regexConfigurationHasBeenSet = true; m_regexConfiguration = std::forward<RegexConfigurationT>(value); }
    template<typename RegexConfigurationT = SlotTypeRegexConfiguration>
    SlotTypeConfiguration& WithRegexConfiguration(RegexConfigurationT&& value) { SetRegexConfiguration(std::forward<RegexConfigurationT>(value)); return *this;}
    ///@}
  private:

    SlotTypeRegexConfiguration m_regexConfiguration;
    bool m_regexConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
