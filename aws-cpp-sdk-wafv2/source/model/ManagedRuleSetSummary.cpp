/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleSetSummary::ManagedRuleSetSummary() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lockTokenHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false)
{
}

ManagedRuleSetSummary::ManagedRuleSetSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lockTokenHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedRuleSetSummary& ManagedRuleSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LockToken"))
  {
    m_lockToken = jsonValue.GetString("LockToken");

    m_lockTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetString("LabelNamespace");

    m_labelNamespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lockTokenHasBeenSet)
  {
   payload.WithString("LockToken", m_lockToken);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_labelNamespaceHasBeenSet)
  {
   payload.WithString("LabelNamespace", m_labelNamespace);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
