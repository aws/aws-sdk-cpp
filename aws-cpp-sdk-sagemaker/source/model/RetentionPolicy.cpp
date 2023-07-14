/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RetentionPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

RetentionPolicy::RetentionPolicy() : 
    m_homeEfsFileSystem(RetentionType::NOT_SET),
    m_homeEfsFileSystemHasBeenSet(false)
{
}

RetentionPolicy::RetentionPolicy(JsonView jsonValue) : 
    m_homeEfsFileSystem(RetentionType::NOT_SET),
    m_homeEfsFileSystemHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionPolicy& RetentionPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HomeEfsFileSystem"))
  {
    m_homeEfsFileSystem = RetentionTypeMapper::GetRetentionTypeForName(jsonValue.GetString("HomeEfsFileSystem"));

    m_homeEfsFileSystemHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_homeEfsFileSystemHasBeenSet)
  {
   payload.WithString("HomeEfsFileSystem", RetentionTypeMapper::GetNameForRetentionType(m_homeEfsFileSystem));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
