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

#include <aws/mediapackage-vod/model/DashManifest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

DashManifest::DashManifest() : 
    m_manifestNameHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_profile(Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
}

DashManifest::DashManifest(JsonView jsonValue) : 
    m_manifestNameHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_profile(Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

DashManifest& DashManifest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("manifestName"))
  {
    m_manifestName = jsonValue.GetString("manifestName");

    m_manifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minBufferTimeSeconds"))
  {
    m_minBufferTimeSeconds = jsonValue.GetInteger("minBufferTimeSeconds");

    m_minBufferTimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = ProfileMapper::GetProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamSelection"))
  {
    m_streamSelection = jsonValue.GetObject("streamSelection");

    m_streamSelectionHasBeenSet = true;
  }

  return *this;
}

JsonValue DashManifest::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("manifestName", m_manifestName);

  }

  if(m_minBufferTimeSecondsHasBeenSet)
  {
   payload.WithInteger("minBufferTimeSeconds", m_minBufferTimeSeconds);

  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", ProfileMapper::GetNameForProfile(m_profile));
  }

  if(m_streamSelectionHasBeenSet)
  {
   payload.WithObject("streamSelection", m_streamSelection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
