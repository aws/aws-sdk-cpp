﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/SourceManifestConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

SourceManifestConfig::SourceManifestConfig() : 
    m_s3HasBeenSet(false)
{
}

SourceManifestConfig::SourceManifestConfig(JsonView jsonValue)
  : SourceManifestConfig()
{
  *this = jsonValue;
}

SourceManifestConfig& SourceManifestConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = jsonValue.GetObject("S3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue SourceManifestConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
