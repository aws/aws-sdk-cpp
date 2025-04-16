/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaInputContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

SlaInputContent::SlaInputContent(JsonView jsonValue)
{
  *this = jsonValue;
}

SlaInputContent& SlaInputContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slaInputConfiguration"))
  {
    m_slaInputConfiguration = jsonValue.GetObject("slaInputConfiguration");
    m_slaInputConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaInputContent::Jsonize() const
{
  JsonValue payload;

  if(m_slaInputConfigurationHasBeenSet)
  {
   payload.WithObject("slaInputConfiguration", m_slaInputConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
