/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/SingleMasterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

SingleMasterConfiguration::SingleMasterConfiguration() : 
    m_messageTtlSeconds(0),
    m_messageTtlSecondsHasBeenSet(false)
{
}

SingleMasterConfiguration::SingleMasterConfiguration(JsonView jsonValue) : 
    m_messageTtlSeconds(0),
    m_messageTtlSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

SingleMasterConfiguration& SingleMasterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageTtlSeconds"))
  {
    m_messageTtlSeconds = jsonValue.GetInteger("MessageTtlSeconds");

    m_messageTtlSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue SingleMasterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_messageTtlSecondsHasBeenSet)
  {
   payload.WithInteger("MessageTtlSeconds", m_messageTtlSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
