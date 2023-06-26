/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/GeneralName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

GeneralName::GeneralName() : 
    m_otherNameHasBeenSet(false),
    m_rfc822NameHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_directoryNameHasBeenSet(false),
    m_ediPartyNameHasBeenSet(false),
    m_uniformResourceIdentifierHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_registeredIdHasBeenSet(false)
{
}

GeneralName::GeneralName(JsonView jsonValue) : 
    m_otherNameHasBeenSet(false),
    m_rfc822NameHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_directoryNameHasBeenSet(false),
    m_ediPartyNameHasBeenSet(false),
    m_uniformResourceIdentifierHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_registeredIdHasBeenSet(false)
{
  *this = jsonValue;
}

GeneralName& GeneralName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OtherName"))
  {
    m_otherName = jsonValue.GetObject("OtherName");

    m_otherNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rfc822Name"))
  {
    m_rfc822Name = jsonValue.GetString("Rfc822Name");

    m_rfc822NameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryName"))
  {
    m_directoryName = jsonValue.GetObject("DirectoryName");

    m_directoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdiPartyName"))
  {
    m_ediPartyName = jsonValue.GetObject("EdiPartyName");

    m_ediPartyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UniformResourceIdentifier"))
  {
    m_uniformResourceIdentifier = jsonValue.GetString("UniformResourceIdentifier");

    m_uniformResourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredId"))
  {
    m_registeredId = jsonValue.GetString("RegisteredId");

    m_registeredIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneralName::Jsonize() const
{
  JsonValue payload;

  if(m_otherNameHasBeenSet)
  {
   payload.WithObject("OtherName", m_otherName.Jsonize());

  }

  if(m_rfc822NameHasBeenSet)
  {
   payload.WithString("Rfc822Name", m_rfc822Name);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_directoryNameHasBeenSet)
  {
   payload.WithObject("DirectoryName", m_directoryName.Jsonize());

  }

  if(m_ediPartyNameHasBeenSet)
  {
   payload.WithObject("EdiPartyName", m_ediPartyName.Jsonize());

  }

  if(m_uniformResourceIdentifierHasBeenSet)
  {
   payload.WithString("UniformResourceIdentifier", m_uniformResourceIdentifier);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_registeredIdHasBeenSet)
  {
   payload.WithString("RegisteredId", m_registeredId);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
