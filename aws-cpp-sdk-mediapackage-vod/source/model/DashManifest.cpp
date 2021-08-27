/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_manifestLayout(ManifestLayout::NOT_SET),
    m_manifestLayoutHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_profile(Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
}

DashManifest::DashManifest(JsonView jsonValue) : 
    m_manifestLayout(ManifestLayout::NOT_SET),
    m_manifestLayoutHasBeenSet(false),
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
  if(jsonValue.ValueExists("manifestLayout"))
  {
    m_manifestLayout = ManifestLayoutMapper::GetManifestLayoutForName(jsonValue.GetString("manifestLayout"));

    m_manifestLayoutHasBeenSet = true;
  }

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

  if(m_manifestLayoutHasBeenSet)
  {
   payload.WithString("manifestLayout", ManifestLayoutMapper::GetNameForManifestLayout(m_manifestLayout));
  }

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
