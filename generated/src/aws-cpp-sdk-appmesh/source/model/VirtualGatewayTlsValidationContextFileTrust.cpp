/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayTlsValidationContextFileTrust.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualGatewayTlsValidationContextFileTrust::VirtualGatewayTlsValidationContextFileTrust() : 
    m_certificateChainHasBeenSet(false)
{
}

VirtualGatewayTlsValidationContextFileTrust::VirtualGatewayTlsValidationContextFileTrust(JsonView jsonValue) : 
    m_certificateChainHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayTlsValidationContextFileTrust& VirtualGatewayTlsValidationContextFileTrust::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateChain"))
  {
    m_certificateChain = jsonValue.GetString("certificateChain");

    m_certificateChainHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayTlsValidationContextFileTrust::Jsonize() const
{
  JsonValue payload;

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("certificateChain", m_certificateChain);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
