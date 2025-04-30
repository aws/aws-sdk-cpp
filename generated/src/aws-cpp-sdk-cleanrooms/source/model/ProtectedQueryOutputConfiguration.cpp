/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryOutputConfiguration::ProtectedQueryOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQueryOutputConfiguration& ProtectedQueryOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("member"))
  {
    m_member = jsonValue.GetObject("member");
    m_memberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("distribute"))
  {
    m_distribute = jsonValue.GetObject("distribute");
    m_distributeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQueryOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  if(m_memberHasBeenSet)
  {
   payload.WithObject("member", m_member.Jsonize());

  }

  if(m_distributeHasBeenSet)
  {
   payload.WithObject("distribute", m_distribute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
