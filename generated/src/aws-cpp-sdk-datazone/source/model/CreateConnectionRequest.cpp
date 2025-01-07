﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectionRequest::CreateConnectionRequest() : 
    m_awsLocationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_propsHasBeenSet(false)
{
}

Aws::String CreateConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_awsLocationHasBeenSet)
  {
   payload.WithObject("awsLocation", m_awsLocation.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentIdentifierHasBeenSet)
  {
   payload.WithString("environmentIdentifier", m_environmentIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_propsHasBeenSet)
  {
   payload.WithObject("props", m_props.Jsonize());

  }

  return payload.View().WriteReadable();
}




