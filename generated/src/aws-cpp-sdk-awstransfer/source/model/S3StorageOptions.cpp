/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/S3StorageOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

S3StorageOptions::S3StorageOptions() : 
    m_directoryListingOptimization(DirectoryListingOptimization::NOT_SET),
    m_directoryListingOptimizationHasBeenSet(false)
{
}

S3StorageOptions::S3StorageOptions(JsonView jsonValue) : 
    m_directoryListingOptimization(DirectoryListingOptimization::NOT_SET),
    m_directoryListingOptimizationHasBeenSet(false)
{
  *this = jsonValue;
}

S3StorageOptions& S3StorageOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryListingOptimization"))
  {
    m_directoryListingOptimization = DirectoryListingOptimizationMapper::GetDirectoryListingOptimizationForName(jsonValue.GetString("DirectoryListingOptimization"));

    m_directoryListingOptimizationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3StorageOptions::Jsonize() const
{
  JsonValue payload;

  if(m_directoryListingOptimizationHasBeenSet)
  {
   payload.WithString("DirectoryListingOptimization", DirectoryListingOptimizationMapper::GetNameForDirectoryListingOptimization(m_directoryListingOptimization));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
