/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/OAuth2ClientApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

OAuth2ClientApplication::OAuth2ClientApplication(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuth2ClientApplication& OAuth2ClientApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserManagedClientApplicationClientId"))
  {
    m_userManagedClientApplicationClientId = jsonValue.GetString("UserManagedClientApplicationClientId");
    m_userManagedClientApplicationClientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AWSManagedClientApplicationReference"))
  {
    m_aWSManagedClientApplicationReference = jsonValue.GetString("AWSManagedClientApplicationReference");
    m_aWSManagedClientApplicationReferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuth2ClientApplication::Jsonize() const
{
  JsonValue payload;

  if(m_userManagedClientApplicationClientIdHasBeenSet)
  {
   payload.WithString("UserManagedClientApplicationClientId", m_userManagedClientApplicationClientId);

  }

  if(m_aWSManagedClientApplicationReferenceHasBeenSet)
  {
   payload.WithString("AWSManagedClientApplicationReference", m_aWSManagedClientApplicationReference);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
