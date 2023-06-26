/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/SourceNetworkData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

SourceNetworkData::SourceNetworkData() : 
    m_sourceNetworkIDHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_targetVpcHasBeenSet(false)
{
}

SourceNetworkData::SourceNetworkData(JsonView jsonValue) : 
    m_sourceNetworkIDHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_targetVpcHasBeenSet(false)
{
  *this = jsonValue;
}

SourceNetworkData& SourceNetworkData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceNetworkID"))
  {
    m_sourceNetworkID = jsonValue.GetString("sourceNetworkID");

    m_sourceNetworkIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVpc"))
  {
    m_sourceVpc = jsonValue.GetString("sourceVpc");

    m_sourceVpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stackName"))
  {
    m_stackName = jsonValue.GetString("stackName");

    m_stackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetVpc"))
  {
    m_targetVpc = jsonValue.GetString("targetVpc");

    m_targetVpcHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceNetworkData::Jsonize() const
{
  JsonValue payload;

  if(m_sourceNetworkIDHasBeenSet)
  {
   payload.WithString("sourceNetworkID", m_sourceNetworkID);

  }

  if(m_sourceVpcHasBeenSet)
  {
   payload.WithString("sourceVpc", m_sourceVpc);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("stackName", m_stackName);

  }

  if(m_targetVpcHasBeenSet)
  {
   payload.WithString("targetVpc", m_targetVpc);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
