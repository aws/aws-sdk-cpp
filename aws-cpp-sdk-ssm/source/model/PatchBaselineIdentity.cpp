/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchBaselineIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchBaselineIdentity::PatchBaselineIdentity() : 
    m_baselineIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_baselineDescriptionHasBeenSet(false),
    m_defaultBaseline(false),
    m_defaultBaselineHasBeenSet(false)
{
}

PatchBaselineIdentity::PatchBaselineIdentity(JsonView jsonValue) : 
    m_baselineIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_baselineDescriptionHasBeenSet(false),
    m_defaultBaseline(false),
    m_defaultBaselineHasBeenSet(false)
{
  *this = jsonValue;
}

PatchBaselineIdentity& PatchBaselineIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");

    m_baselineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineName"))
  {
    m_baselineName = jsonValue.GetString("BaselineName");

    m_baselineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineDescription"))
  {
    m_baselineDescription = jsonValue.GetString("BaselineDescription");

    m_baselineDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultBaseline"))
  {
    m_defaultBaseline = jsonValue.GetBool("DefaultBaseline");

    m_defaultBaselineHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchBaselineIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_baselineIdHasBeenSet)
  {
   payload.WithString("BaselineId", m_baselineId);

  }

  if(m_baselineNameHasBeenSet)
  {
   payload.WithString("BaselineName", m_baselineName);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_baselineDescriptionHasBeenSet)
  {
   payload.WithString("BaselineDescription", m_baselineDescription);

  }

  if(m_defaultBaselineHasBeenSet)
  {
   payload.WithBool("DefaultBaseline", m_defaultBaseline);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
