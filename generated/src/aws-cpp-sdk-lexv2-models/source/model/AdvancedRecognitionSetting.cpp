/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AdvancedRecognitionSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AdvancedRecognitionSetting::AdvancedRecognitionSetting() : 
    m_audioRecognitionStrategy(AudioRecognitionStrategy::NOT_SET),
    m_audioRecognitionStrategyHasBeenSet(false)
{
}

AdvancedRecognitionSetting::AdvancedRecognitionSetting(JsonView jsonValue) : 
    m_audioRecognitionStrategy(AudioRecognitionStrategy::NOT_SET),
    m_audioRecognitionStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedRecognitionSetting& AdvancedRecognitionSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioRecognitionStrategy"))
  {
    m_audioRecognitionStrategy = AudioRecognitionStrategyMapper::GetAudioRecognitionStrategyForName(jsonValue.GetString("audioRecognitionStrategy"));

    m_audioRecognitionStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue AdvancedRecognitionSetting::Jsonize() const
{
  JsonValue payload;

  if(m_audioRecognitionStrategyHasBeenSet)
  {
   payload.WithString("audioRecognitionStrategy", AudioRecognitionStrategyMapper::GetNameForAudioRecognitionStrategy(m_audioRecognitionStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
