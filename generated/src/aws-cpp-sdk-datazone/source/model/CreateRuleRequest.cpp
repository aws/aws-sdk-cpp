﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRuleRequest::CreateRuleRequest() : 
    m_action(RuleAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String CreateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", RuleActionMapper::GetNameForRuleAction(m_action));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_detailHasBeenSet)
  {
   payload.WithObject("detail", m_detail.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  return payload.View().WriteReadable();
}




