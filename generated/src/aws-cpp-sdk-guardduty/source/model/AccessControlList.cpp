﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AccessControlList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

AccessControlList::AccessControlList(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessControlList& AccessControlList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowsPublicReadAccess"))
  {
    m_allowsPublicReadAccess = jsonValue.GetBool("allowsPublicReadAccess");
    m_allowsPublicReadAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowsPublicWriteAccess"))
  {
    m_allowsPublicWriteAccess = jsonValue.GetBool("allowsPublicWriteAccess");
    m_allowsPublicWriteAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessControlList::Jsonize() const
{
  JsonValue payload;

  if(m_allowsPublicReadAccessHasBeenSet)
  {
   payload.WithBool("allowsPublicReadAccess", m_allowsPublicReadAccess);

  }

  if(m_allowsPublicWriteAccessHasBeenSet)
  {
   payload.WithBool("allowsPublicWriteAccess", m_allowsPublicWriteAccess);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
