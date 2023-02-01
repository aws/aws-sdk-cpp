/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ImportOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

ImportOptions::ImportOptions() : 
    m_destinationOptionsHasBeenSet(false),
    m_delimitedTextOptionsHasBeenSet(false)
{
}

ImportOptions::ImportOptions(JsonView jsonValue) : 
    m_destinationOptionsHasBeenSet(false),
    m_delimitedTextOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ImportOptions& ImportOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationOptions"))
  {
    m_destinationOptions = jsonValue.GetObject("destinationOptions");

    m_destinationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("delimitedTextOptions"))
  {
    m_delimitedTextOptions = jsonValue.GetObject("delimitedTextOptions");

    m_delimitedTextOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportOptions::Jsonize() const
{
  JsonValue payload;

  if(m_destinationOptionsHasBeenSet)
  {
   payload.WithObject("destinationOptions", m_destinationOptions.Jsonize());

  }

  if(m_delimitedTextOptionsHasBeenSet)
  {
   payload.WithObject("delimitedTextOptions", m_delimitedTextOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
