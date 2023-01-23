/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/RemoveAllBackendsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveAllBackendsRequest::RemoveAllBackendsRequest() : 
    m_appIdHasBeenSet(false),
    m_cleanAmplifyApp(false),
    m_cleanAmplifyAppHasBeenSet(false)
{
}

Aws::String RemoveAllBackendsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cleanAmplifyAppHasBeenSet)
  {
   payload.WithBool("cleanAmplifyApp", m_cleanAmplifyApp);

  }

  return payload.View().WriteReadable();
}




