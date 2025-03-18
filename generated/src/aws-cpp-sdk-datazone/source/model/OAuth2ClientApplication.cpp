/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/OAuth2ClientApplication.h>
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

OAuth2ClientApplication::OAuth2ClientApplication(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuth2ClientApplication& OAuth2ClientApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aWSManagedClientApplicationReference"))
  {
    m_aWSManagedClientApplicationReference = jsonValue.GetString("aWSManagedClientApplicationReference");
    m_aWSManagedClientApplicationReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userManagedClientApplicationClientId"))
  {
    m_userManagedClientApplicationClientId = jsonValue.GetString("userManagedClientApplicationClientId");
    m_userManagedClientApplicationClientIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuth2ClientApplication::Jsonize() const
{
  JsonValue payload;

  if(m_aWSManagedClientApplicationReferenceHasBeenSet)
  {
   payload.WithString("aWSManagedClientApplicationReference", m_aWSManagedClientApplicationReference);

  }

  if(m_userManagedClientApplicationClientIdHasBeenSet)
  {
   payload.WithString("userManagedClientApplicationClientId", m_userManagedClientApplicationClientId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
