/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/AwsCloudMapServiceDiscovery.h>
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

AwsCloudMapServiceDiscovery::AwsCloudMapServiceDiscovery() : 
    m_attributesHasBeenSet(false),
    m_ipPreference(IpPreference::NOT_SET),
    m_ipPreferenceHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

AwsCloudMapServiceDiscovery::AwsCloudMapServiceDiscovery(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_ipPreference(IpPreference::NOT_SET),
    m_ipPreferenceHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudMapServiceDiscovery& AwsCloudMapServiceDiscovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipPreference"))
  {
    m_ipPreference = IpPreferenceMapper::GetIpPreferenceForName(jsonValue.GetString("ipPreference"));

    m_ipPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudMapServiceDiscovery::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_ipPreferenceHasBeenSet)
  {
   payload.WithString("ipPreference", IpPreferenceMapper::GetNameForIpPreference(m_ipPreference));
  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
