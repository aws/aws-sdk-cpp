﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EFSAuthorizationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EFSAuthorizationConfig::EFSAuthorizationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EFSAuthorizationConfig& EFSAuthorizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPointId"))
  {
    m_accessPointId = jsonValue.GetString("accessPointId");
    m_accessPointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iam"))
  {
    m_iam = EFSAuthorizationConfigIAMMapper::GetEFSAuthorizationConfigIAMForName(jsonValue.GetString("iam"));
    m_iamHasBeenSet = true;
  }
  return *this;
}

JsonValue EFSAuthorizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointIdHasBeenSet)
  {
   payload.WithString("accessPointId", m_accessPointId);

  }

  if(m_iamHasBeenSet)
  {
   payload.WithString("iam", EFSAuthorizationConfigIAMMapper::GetNameForEFSAuthorizationConfigIAM(m_iam));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
