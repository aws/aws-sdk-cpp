/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/managedblockchain/model/Network.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

Network::Network() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_framework(Framework::NOT_SET),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_frameworkAttributesHasBeenSet(false),
    m_vpcEndpointServiceNameHasBeenSet(false),
    m_votingPolicyHasBeenSet(false),
    m_status(NetworkStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

Network::Network(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_framework(Framework::NOT_SET),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_frameworkAttributesHasBeenSet(false),
    m_vpcEndpointServiceNameHasBeenSet(false),
    m_votingPolicyHasBeenSet(false),
    m_status(NetworkStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

Network& Network::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Framework"))
  {
    m_framework = FrameworkMapper::GetFrameworkForName(jsonValue.GetString("Framework"));

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkVersion"))
  {
    m_frameworkVersion = jsonValue.GetString("FrameworkVersion");

    m_frameworkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkAttributes"))
  {
    m_frameworkAttributes = jsonValue.GetObject("FrameworkAttributes");

    m_frameworkAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointServiceName"))
  {
    m_vpcEndpointServiceName = jsonValue.GetString("VpcEndpointServiceName");

    m_vpcEndpointServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VotingPolicy"))
  {
    m_votingPolicy = jsonValue.GetObject("VotingPolicy");

    m_votingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NetworkStatusMapper::GetNetworkStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Network::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("Framework", FrameworkMapper::GetNameForFramework(m_framework));
  }

  if(m_frameworkVersionHasBeenSet)
  {
   payload.WithString("FrameworkVersion", m_frameworkVersion);

  }

  if(m_frameworkAttributesHasBeenSet)
  {
   payload.WithObject("FrameworkAttributes", m_frameworkAttributes.Jsonize());

  }

  if(m_vpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("VpcEndpointServiceName", m_vpcEndpointServiceName);

  }

  if(m_votingPolicyHasBeenSet)
  {
   payload.WithObject("VotingPolicy", m_votingPolicy.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NetworkStatusMapper::GetNameForNetworkStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
