/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SelfGrantStatusOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SelfGrantStatusOutput::SelfGrantStatusOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfGrantStatusOutput& SelfGrantStatusOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueSelfGrantStatus"))
  {
    m_glueSelfGrantStatus = jsonValue.GetObject("glueSelfGrantStatus");
    m_glueSelfGrantStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redshiftSelfGrantStatus"))
  {
    m_redshiftSelfGrantStatus = jsonValue.GetObject("redshiftSelfGrantStatus");
    m_redshiftSelfGrantStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfGrantStatusOutput::Jsonize() const
{
  JsonValue payload;

  if(m_glueSelfGrantStatusHasBeenSet)
  {
   payload.WithObject("glueSelfGrantStatus", m_glueSelfGrantStatus.Jsonize());

  }

  if(m_redshiftSelfGrantStatusHasBeenSet)
  {
   payload.WithObject("redshiftSelfGrantStatus", m_redshiftSelfGrantStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
