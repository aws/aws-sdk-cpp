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
  class AWS_LEXMODELBUILDINGSERVICE_API SlotTypeConfiguration
  {
  public:
    SlotTypeConfiguration();
    SlotTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SlotTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline const SlotTypeRegexConfiguration& GetRegexConfiguration() const{ return m_regexConfiguration; }

    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline bool RegexConfigurationHasBeenSet() const { return m_regexConfigurationHasBeenSet; }

    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline void SetRegexConfiguration(const SlotTypeRegexConfiguration& value) { m_regexConfigurationHasBeenSet = true; m_regexConfiguration = value; }

    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline void SetRegexConfiguration(SlotTypeRegexConfiguration&& value) { m_regexConfigurationHasBeenSet = true; m_regexConfiguration = std::move(value); }

    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline SlotTypeConfiguration& WithRegexConfiguration(const SlotTypeRegexConfiguration& value) { SetRegexConfiguration(value); return *this;}

    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline SlotTypeConfiguration& WithRegexConfiguration(SlotTypeRegexConfiguration&& value) { SetRegexConfiguration(std::move(value)); return *this;}

  private:

    SlotTypeRegexConfiguration m_regexConfiguration;
    bool m_regexConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
