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

#include <aws/mediapackage-vod/model/HlsManifest.h>
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

HlsManifest::HlsManifest() : 
    m_adMarkers(AdMarkers::NOT_SET),
    m_adMarkersHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_repeatExtXKey(false),
    m_repeatExtXKeyHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
}

HlsManifest::HlsManifest(JsonView jsonValue) : 
    m_adMarkers(AdMarkers::NOT_SET),
    m_adMarkersHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_repeatExtXKey(false),
    m_repeatExtXKeyHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

HlsManifest& HlsManifest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adMarkers"))
  {
    m_adMarkers = AdMarkersMapper::GetAdMarkersForName(jsonValue.GetString("adMarkers"));

    m_adMarkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeIframeOnlyStream"))
  {
    m_includeIframeOnlyStream = jsonValue.GetBool("includeIframeOnlyStream");

    m_includeIframeOnlyStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestName"))
  {
    m_manifestName = jsonValue.GetString("manifestName");

    m_manifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTimeIntervalSeconds"))
  {
    m_programDateTimeIntervalSeconds = jsonValue.GetInteger("programDateTimeIntervalSeconds");

    m_programDateTimeIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repeatExtXKey"))
  {
    m_repeatExtXKey = jsonValue.GetBool("repeatExtXKey");

    m_repeatExtXKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamSelection"))
  {
    m_streamSelection = jsonValue.GetObject("streamSelection");

    m_streamSelectionHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsManifest::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkersHasBeenSet)
  {
   payload.WithString("adMarkers", AdMarkersMapper::GetNameForAdMarkers(m_adMarkers));
  }

  if(m_includeIframeOnlyStreamHasBeenSet)
  {
   payload.WithBool("includeIframeOnlyStream", m_includeIframeOnlyStream);

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("manifestName", m_manifestName);

  }

  if(m_programDateTimeIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("programDateTimeIntervalSeconds", m_programDateTimeIntervalSeconds);

  }

  if(m_repeatExtXKeyHasBeenSet)
  {
   payload.WithBool("repeatExtXKey", m_repeatExtXKey);

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
