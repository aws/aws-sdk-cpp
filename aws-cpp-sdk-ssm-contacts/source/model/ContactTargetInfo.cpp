/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ContactTargetInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

ContactTargetInfo::ContactTargetInfo() : 
    m_contactIdHasBeenSet(false),
    m_isEssential(false),
    m_isEssentialHasBeenSet(false)
{
}

ContactTargetInfo::ContactTargetInfo(JsonView jsonValue) : 
    m_contactIdHasBeenSet(false),
    m_isEssential(false),
    m_isEssentialHasBeenSet(false)
{
  *this = jsonValue;
}

ContactTargetInfo& ContactTargetInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");

    m_contactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsEssential"))
  {
    m_isEssential = jsonValue.GetBool("IsEssential");

    m_isEssentialHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactTargetInfo::Jsonize() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_isEssentialHasBeenSet)
  {
   payload.WithBool("IsEssential", m_isEssential);

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
