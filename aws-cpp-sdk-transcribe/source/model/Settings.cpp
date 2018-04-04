/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transcribe/model/Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Settings::Settings() : 
    m_vocabularyNameHasBeenSet(false),
    m_showSpeakerLabels(false),
    m_showSpeakerLabelsHasBeenSet(false),
    m_maxSpeakerLabels(0),
    m_maxSpeakerLabelsHasBeenSet(false)
{
}

Settings::Settings(const JsonValue& jsonValue) : 
    m_vocabularyNameHasBeenSet(false),
    m_showSpeakerLabels(false),
    m_showSpeakerLabelsHasBeenSet(false),
    m_maxSpeakerLabels(0),
    m_maxSpeakerLabelsHasBeenSet(false)
{
  *this = jsonValue;
}

Settings& Settings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShowSpeakerLabels"))
  {
    m_showSpeakerLabels = jsonValue.GetBool("ShowSpeakerLabels");

    m_showSpeakerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSpeakerLabels"))
  {
    m_maxSpeakerLabels = jsonValue.GetInteger("MaxSpeakerLabels");

    m_maxSpeakerLabelsHasBeenSet = true;
  }

  return *this;
}

JsonValue Settings::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_showSpeakerLabelsHasBeenSet)
  {
   payload.WithBool("ShowSpeakerLabels", m_showSpeakerLabels);

  }

  if(m_maxSpeakerLabelsHasBeenSet)
  {
   payload.WithInteger("MaxSpeakerLabels", m_maxSpeakerLabels);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
