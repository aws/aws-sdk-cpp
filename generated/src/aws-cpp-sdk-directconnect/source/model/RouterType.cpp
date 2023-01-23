/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/RouterType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

RouterType::RouterType() : 
    m_vendorHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_xsltTemplateNameHasBeenSet(false),
    m_xsltTemplateNameForMacSecHasBeenSet(false),
    m_routerTypeIdentifierHasBeenSet(false)
{
}

RouterType::RouterType(JsonView jsonValue) : 
    m_vendorHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_xsltTemplateNameHasBeenSet(false),
    m_xsltTemplateNameForMacSecHasBeenSet(false),
    m_routerTypeIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

RouterType& RouterType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vendor"))
  {
    m_vendor = jsonValue.GetString("vendor");

    m_vendorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("software"))
  {
    m_software = jsonValue.GetString("software");

    m_softwareHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xsltTemplateName"))
  {
    m_xsltTemplateName = jsonValue.GetString("xsltTemplateName");

    m_xsltTemplateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xsltTemplateNameForMacSec"))
  {
    m_xsltTemplateNameForMacSec = jsonValue.GetString("xsltTemplateNameForMacSec");

    m_xsltTemplateNameForMacSecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routerTypeIdentifier"))
  {
    m_routerTypeIdentifier = jsonValue.GetString("routerTypeIdentifier");

    m_routerTypeIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue RouterType::Jsonize() const
{
  JsonValue payload;

  if(m_vendorHasBeenSet)
  {
   payload.WithString("vendor", m_vendor);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_softwareHasBeenSet)
  {
   payload.WithString("software", m_software);

  }

  if(m_xsltTemplateNameHasBeenSet)
  {
   payload.WithString("xsltTemplateName", m_xsltTemplateName);

  }

  if(m_xsltTemplateNameForMacSecHasBeenSet)
  {
   payload.WithString("xsltTemplateNameForMacSec", m_xsltTemplateNameForMacSec);

  }

  if(m_routerTypeIdentifierHasBeenSet)
  {
   payload.WithString("routerTypeIdentifier", m_routerTypeIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
