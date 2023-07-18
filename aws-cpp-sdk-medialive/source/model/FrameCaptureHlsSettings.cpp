/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FrameCaptureHlsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

FrameCaptureHlsSettings::FrameCaptureHlsSettings()
{
}

FrameCaptureHlsSettings::FrameCaptureHlsSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

FrameCaptureHlsSettings& FrameCaptureHlsSettings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue FrameCaptureHlsSettings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
