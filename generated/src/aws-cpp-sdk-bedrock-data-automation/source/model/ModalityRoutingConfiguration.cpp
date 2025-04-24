/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ModalityRoutingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

ModalityRoutingConfiguration::ModalityRoutingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ModalityRoutingConfiguration& ModalityRoutingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jpeg"))
  {
    m_jpeg = DesiredModalityMapper::GetDesiredModalityForName(jsonValue.GetString("jpeg"));
    m_jpegHasBeenSet = true;
  }
  if(jsonValue.ValueExists("png"))
  {
    m_png = DesiredModalityMapper::GetDesiredModalityForName(jsonValue.GetString("png"));
    m_pngHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mp4"))
  {
    m_mp4 = DesiredModalityMapper::GetDesiredModalityForName(jsonValue.GetString("mp4"));
    m_mp4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("mov"))
  {
    m_mov = DesiredModalityMapper::GetDesiredModalityForName(jsonValue.GetString("mov"));
    m_movHasBeenSet = true;
  }
  return *this;
}

JsonValue ModalityRoutingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jpegHasBeenSet)
  {
   payload.WithString("jpeg", DesiredModalityMapper::GetNameForDesiredModality(m_jpeg));
  }

  if(m_pngHasBeenSet)
  {
   payload.WithString("png", DesiredModalityMapper::GetNameForDesiredModality(m_png));
  }

  if(m_mp4HasBeenSet)
  {
   payload.WithString("mp4", DesiredModalityMapper::GetNameForDesiredModality(m_mp4));
  }

  if(m_movHasBeenSet)
  {
   payload.WithString("mov", DesiredModalityMapper::GetNameForDesiredModality(m_mov));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
