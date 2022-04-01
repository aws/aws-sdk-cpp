/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/S3TableOutputOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

S3TableOutputOptions::S3TableOutputOptions() : 
    m_locationHasBeenSet(false)
{
}

S3TableOutputOptions::S3TableOutputOptions(JsonView jsonValue) : 
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

S3TableOutputOptions& S3TableOutputOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetObject("Location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3TableOutputOptions::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
