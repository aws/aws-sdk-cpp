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

#include <aws/iot/model/StreamSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StreamSummary::StreamSummary() : 
    m_streamIdHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_streamVersion(0),
    m_streamVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

StreamSummary::StreamSummary(const JsonValue& jsonValue) : 
    m_streamIdHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_streamVersion(0),
    m_streamVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

StreamSummary& StreamSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamArn"))
  {
    m_streamArn = jsonValue.GetString("streamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamVersion"))
  {
    m_streamVersion = jsonValue.GetInteger("streamVersion");

    m_streamVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSummary::Jsonize() const
{
  JsonValue payload;

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("streamArn", m_streamArn);

  }

  if(m_streamVersionHasBeenSet)
  {
   payload.WithInteger("streamVersion", m_streamVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
