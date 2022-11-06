/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/Tmpfs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

Tmpfs::Tmpfs() : 
    m_containerPathHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
}

Tmpfs::Tmpfs(JsonView jsonValue) : 
    m_containerPathHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

Tmpfs& Tmpfs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerPath"))
  {
    m_containerPath = jsonValue.GetString("containerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountOptions"))
  {
    Aws::Utils::Array<JsonView> mountOptionsJsonList = jsonValue.GetArray("mountOptions");
    for(unsigned mountOptionsIndex = 0; mountOptionsIndex < mountOptionsJsonList.GetLength(); ++mountOptionsIndex)
    {
      m_mountOptions.push_back(mountOptionsJsonList[mountOptionsIndex].AsString());
    }
    m_mountOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Tmpfs::Jsonize() const
{
  JsonValue payload;

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("containerPath", m_containerPath);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_mountOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountOptionsJsonList(m_mountOptions.size());
   for(unsigned mountOptionsIndex = 0; mountOptionsIndex < mountOptionsJsonList.GetLength(); ++mountOptionsIndex)
   {
     mountOptionsJsonList[mountOptionsIndex].AsString(m_mountOptions[mountOptionsIndex]);
   }
   payload.WithArray("mountOptions", std::move(mountOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
