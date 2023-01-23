/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TextLogDestination.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Defines settings to enable text conversation logs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TextLogSetting">AWS
   * API Reference</a></p>
   */
  class TextLogSetting
  {
  public:
    AWS_LEXMODELSV2_API TextLogSetting();
    AWS_LEXMODELSV2_API TextLogSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TextLogSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether conversation logs should be stored for an alias.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Determines whether conversation logs should be stored for an alias.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Determines whether conversation logs should be stored for an alias.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Determines whether conversation logs should be stored for an alias.</p>
     */
    inline TextLogSetting& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const TextLogDestination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const TextLogDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(TextLogDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline TextLogSetting& WithDestination(const TextLogDestination& value) { SetDestination(value); return *this;}

    
    inline TextLogSetting& WithDestination(TextLogDestination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    TextLogDestination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
