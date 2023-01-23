/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/DestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

DestinationConfiguration::DestinationConfiguration() : 
    m_s3HasBeenSet(false)
{
}

DestinationConfiguration::DestinationConfiguration(JsonView jsonValue) : 
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfiguration& DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
