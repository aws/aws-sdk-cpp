/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AccessControlConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AccessControlConfigurationSummary::AccessControlConfigurationSummary() : 
    m_idHasBeenSet(false)
{
}

AccessControlConfigurationSummary::AccessControlConfigurationSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

AccessControlConfigurationSummary& AccessControlConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessControlConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
