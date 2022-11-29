/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/XksProxyConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

XksProxyConfigurationType::XksProxyConfigurationType() : 
    m_connectivity(XksProxyConnectivityType::NOT_SET),
    m_connectivityHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_uriEndpointHasBeenSet(false),
    m_uriPathHasBeenSet(false),
    m_vpcEndpointServiceNameHasBeenSet(false)
{
}

XksProxyConfigurationType::XksProxyConfigurationType(JsonView jsonValue) : 
    m_connectivity(XksProxyConnectivityType::NOT_SET),
    m_connectivityHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_uriEndpointHasBeenSet(false),
    m_uriPathHasBeenSet(false),
    m_vpcEndpointServiceNameHasBeenSet(false)
{
  *this = jsonValue;
}

XksProxyConfigurationType& XksProxyConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Connectivity"))
  {
    m_connectivity = XksProxyConnectivityTypeMapper::GetXksProxyConnectivityTypeForName(jsonValue.GetString("Connectivity"));

    m_connectivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UriEndpoint"))
  {
    m_uriEndpoint = jsonValue.GetString("UriEndpoint");

    m_uriEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UriPath"))
  {
    m_uriPath = jsonValue.GetString("UriPath");

    m_uriPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointServiceName"))
  {
    m_vpcEndpointServiceName = jsonValue.GetString("VpcEndpointServiceName");

    m_vpcEndpointServiceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue XksProxyConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_connectivityHasBeenSet)
  {
   payload.WithString("Connectivity", XksProxyConnectivityTypeMapper::GetNameForXksProxyConnectivityType(m_connectivity));
  }

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("AccessKeyId", m_accessKeyId);

  }

  if(m_uriEndpointHasBeenSet)
  {
   payload.WithString("UriEndpoint", m_uriEndpoint);

  }

  if(m_uriPathHasBeenSet)
  {
   payload.WithString("UriPath", m_uriPath);

  }

  if(m_vpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("VpcEndpointServiceName", m_vpcEndpointServiceName);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
