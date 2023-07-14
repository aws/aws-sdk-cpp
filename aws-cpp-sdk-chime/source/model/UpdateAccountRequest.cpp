/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountRequest::UpdateAccountRequest() : 
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultLicense(License::NOT_SET),
    m_defaultLicenseHasBeenSet(false)
{
}

Aws::String UpdateAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultLicenseHasBeenSet)
  {
   payload.WithString("DefaultLicense", LicenseMapper::GetNameForLicense(m_defaultLicense));
  }

  return payload.View().WriteReadable();
}




