/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaContent.h>
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

SlaContent::SlaContent(JsonView jsonValue)
{
  *this = jsonValue;
}

SlaContent& SlaContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slaConfiguration"))
  {
    m_slaConfiguration = jsonValue.GetObject("slaConfiguration");
    m_slaConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaContent::Jsonize() const
{
  JsonValue payload;

  if(m_slaConfigurationHasBeenSet)
  {
   payload.WithObject("slaConfiguration", m_slaConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
