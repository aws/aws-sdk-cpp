/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ParticipatingResourceID.h>
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

ParticipatingResourceID::ParticipatingResourceID() : 
    m_sourceNetworkIDHasBeenSet(false)
{
}

ParticipatingResourceID::ParticipatingResourceID(JsonView jsonValue) : 
    m_sourceNetworkIDHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipatingResourceID& ParticipatingResourceID::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceNetworkID"))
  {
    m_sourceNetworkID = jsonValue.GetString("sourceNetworkID");

    m_sourceNetworkIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipatingResourceID::Jsonize() const
{
  JsonValue payload;

  if(m_sourceNetworkIDHasBeenSet)
  {
   payload.WithString("sourceNetworkID", m_sourceNetworkID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
