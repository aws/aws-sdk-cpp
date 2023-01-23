/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileSystemEndpoints.h>
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

FileSystemEndpoints::FileSystemEndpoints() : 
    m_interclusterHasBeenSet(false),
    m_managementHasBeenSet(false)
{
}

FileSystemEndpoints::FileSystemEndpoints(JsonView jsonValue) : 
    m_interclusterHasBeenSet(false),
    m_managementHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemEndpoints& FileSystemEndpoints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Intercluster"))
  {
    m_intercluster = jsonValue.GetObject("Intercluster");

    m_interclusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Management"))
  {
    m_management = jsonValue.GetObject("Management");

    m_managementHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemEndpoints::Jsonize() const
{
  JsonValue payload;

  if(m_interclusterHasBeenSet)
  {
   payload.WithObject("Intercluster", m_intercluster.Jsonize());

  }

  if(m_managementHasBeenSet)
  {
   payload.WithObject("Management", m_management.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
