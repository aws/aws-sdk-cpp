﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/InputFileLocation.h>
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

InputFileLocation::InputFileLocation() : 
    m_s3FileLocationHasBeenSet(false),
    m_efsFileLocationHasBeenSet(false)
{
}

InputFileLocation::InputFileLocation(JsonView jsonValue) : 
    m_s3FileLocationHasBeenSet(false),
    m_efsFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

InputFileLocation& InputFileLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3FileLocation"))
  {
    m_s3FileLocation = jsonValue.GetObject("S3FileLocation");

    m_s3FileLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EfsFileLocation"))
  {
    m_efsFileLocation = jsonValue.GetObject("EfsFileLocation");

    m_efsFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue InputFileLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3FileLocationHasBeenSet)
  {
   payload.WithObject("S3FileLocation", m_s3FileLocation.Jsonize());

  }

  if(m_efsFileLocationHasBeenSet)
  {
   payload.WithObject("EfsFileLocation", m_efsFileLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
