/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/SubDomainSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

SubDomainSetting::SubDomainSetting() : 
    m_prefixHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
}

SubDomainSetting::SubDomainSetting(JsonView jsonValue) : 
    m_prefixHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
  *this = jsonValue;
}

SubDomainSetting& SubDomainSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SubDomainSetting::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
