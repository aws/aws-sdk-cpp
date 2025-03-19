/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/InputFileSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

InputFileSource::InputFileSource(JsonView jsonValue)
{
  *this = jsonValue;
}

InputFileSource& InputFileSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileContent"))
  {
    m_fileContent = jsonValue.GetString("fileContent");
    m_fileContentHasBeenSet = true;
  }
  return *this;
}

JsonValue InputFileSource::Jsonize() const
{
  JsonValue payload;

  if(m_fileContentHasBeenSet)
  {
   payload.WithString("fileContent", m_fileContent);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
