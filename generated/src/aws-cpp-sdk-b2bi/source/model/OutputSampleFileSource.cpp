/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/OutputSampleFileSource.h>
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

OutputSampleFileSource::OutputSampleFileSource(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputSampleFileSource& OutputSampleFileSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileLocation"))
  {
    m_fileLocation = jsonValue.GetObject("fileLocation");
    m_fileLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputSampleFileSource::Jsonize() const
{
  JsonValue payload;

  if(m_fileLocationHasBeenSet)
  {
   payload.WithObject("fileLocation", m_fileLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
