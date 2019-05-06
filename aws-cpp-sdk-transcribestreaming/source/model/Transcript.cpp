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

#include <aws/transcribestreaming/model/Transcript.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

Transcript::Transcript() : 
    m_resultsHasBeenSet(false)
{
}

Transcript::Transcript(JsonView jsonValue) : 
    m_resultsHasBeenSet(false)
{
  *this = jsonValue;
}

Transcript& Transcript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Results"))
  {
    Array<JsonView> resultsJsonList = jsonValue.GetArray("Results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
    m_resultsHasBeenSet = true;
  }

  return *this;
}

JsonValue Transcript::Jsonize() const
{
  JsonValue payload;

  if(m_resultsHasBeenSet)
  {
   Array<JsonValue> resultsJsonList(m_results.size());
   for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
   {
     resultsJsonList[resultsIndex].AsObject(m_results[resultsIndex].Jsonize());
   }
   payload.WithArray("Results", std::move(resultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
