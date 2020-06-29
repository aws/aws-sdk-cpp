/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/LayerVersionContentOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

LayerVersionContentOutput::LayerVersionContentOutput() : 
    m_locationHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
}

LayerVersionContentOutput::LayerVersionContentOutput(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

LayerVersionContentOutput& LayerVersionContentOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSha256"))
  {
    m_codeSha256 = jsonValue.GetString("CodeSha256");

    m_codeSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInt64("CodeSize");

    m_codeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue LayerVersionContentOutput::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_codeSha256HasBeenSet)
  {
   payload.WithString("CodeSha256", m_codeSha256);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInt64("CodeSize", m_codeSize);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
