/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/CreateNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNetworkRequest::CreateNetworkRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_framework(Framework::NOT_SET),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_frameworkConfigurationHasBeenSet(false),
    m_votingPolicyHasBeenSet(false),
    m_memberConfigurationHasBeenSet(false)
{
}

Aws::String CreateNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("Framework", FrameworkMapper::GetNameForFramework(m_framework));
  }

  if(m_frameworkVersionHasBeenSet)
  {
   payload.WithString("FrameworkVersion", m_frameworkVersion);

  }

  if(m_frameworkConfigurationHasBeenSet)
  {
   payload.WithObject("FrameworkConfiguration", m_frameworkConfiguration.Jsonize());

  }

  if(m_votingPolicyHasBeenSet)
  {
   payload.WithObject("VotingPolicy", m_votingPolicy.Jsonize());

  }

  if(m_memberConfigurationHasBeenSet)
  {
   payload.WithObject("MemberConfiguration", m_memberConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




