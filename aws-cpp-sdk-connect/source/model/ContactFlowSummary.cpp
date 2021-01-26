/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ContactFlowSummary::ContactFlowSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contactFlowType(ContactFlowType::NOT_SET),
    m_contactFlowTypeHasBeenSet(false)
{
}

ContactFlowSummary::ContactFlowSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contactFlowType(ContactFlowType::NOT_SET),
    m_contactFlowTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ContactFlowSummary& ContactFlowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactFlowType"))
  {
    m_contactFlowType = ContactFlowTypeMapper::GetContactFlowTypeForName(jsonValue.GetString("ContactFlowType"));

    m_contactFlowTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactFlowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_contactFlowTypeHasBeenSet)
  {
   payload.WithString("ContactFlowType", ContactFlowTypeMapper::GetNameForContactFlowType(m_contactFlowType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
