/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksHostPath.h>
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

EksHostPath::EksHostPath() : 
    m_pathHasBeenSet(false)
{
}

EksHostPath::EksHostPath(JsonView jsonValue) : 
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

EksHostPath& EksHostPath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue EksHostPath::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
