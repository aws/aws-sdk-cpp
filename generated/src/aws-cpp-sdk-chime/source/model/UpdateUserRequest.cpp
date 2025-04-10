﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("LicenseType", LicenseMapper::GetNameForLicense(m_licenseType));
  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("UserType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  if(m_alexaForBusinessMetadataHasBeenSet)
  {
   payload.WithObject("AlexaForBusinessMetadata", m_alexaForBusinessMetadata.Jsonize());

  }

  return payload.View().WriteReadable();
}




