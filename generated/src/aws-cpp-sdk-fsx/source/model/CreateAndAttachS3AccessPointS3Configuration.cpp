/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateAndAttachS3AccessPointS3Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

CreateAndAttachS3AccessPointS3Configuration::CreateAndAttachS3AccessPointS3Configuration(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateAndAttachS3AccessPointS3Configuration& CreateAndAttachS3AccessPointS3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");
    m_policyHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateAndAttachS3AccessPointS3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
