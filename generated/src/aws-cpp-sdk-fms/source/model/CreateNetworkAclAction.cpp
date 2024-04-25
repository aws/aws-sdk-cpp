/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/CreateNetworkAclAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

CreateNetworkAclAction::CreateNetworkAclAction() : 
    m_descriptionHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_fMSCanRemediate(false),
    m_fMSCanRemediateHasBeenSet(false)
{
}

CreateNetworkAclAction::CreateNetworkAclAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_fMSCanRemediate(false),
    m_fMSCanRemediateHasBeenSet(false)
{
  *this = jsonValue;
}

CreateNetworkAclAction& CreateNetworkAclAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vpc"))
  {
    m_vpc = jsonValue.GetObject("Vpc");

    m_vpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FMSCanRemediate"))
  {
    m_fMSCanRemediate = jsonValue.GetBool("FMSCanRemediate");

    m_fMSCanRemediateHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateNetworkAclAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("Vpc", m_vpc.Jsonize());

  }

  if(m_fMSCanRemediateHasBeenSet)
  {
   payload.WithBool("FMSCanRemediate", m_fMSCanRemediate);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
