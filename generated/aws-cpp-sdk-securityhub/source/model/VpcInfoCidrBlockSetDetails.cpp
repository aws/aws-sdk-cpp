/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/VpcInfoCidrBlockSetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

VpcInfoCidrBlockSetDetails::VpcInfoCidrBlockSetDetails() : 
    m_cidrBlockHasBeenSet(false)
{
}

VpcInfoCidrBlockSetDetails::VpcInfoCidrBlockSetDetails(JsonView jsonValue) : 
    m_cidrBlockHasBeenSet(false)
{
  *this = jsonValue;
}

VpcInfoCidrBlockSetDetails& VpcInfoCidrBlockSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcInfoCidrBlockSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
