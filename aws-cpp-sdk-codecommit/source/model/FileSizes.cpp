/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/FileSizes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

FileSizes::FileSizes() : 
    m_source(0),
    m_sourceHasBeenSet(false),
    m_destination(0),
    m_destinationHasBeenSet(false),
    m_base(0),
    m_baseHasBeenSet(false)
{
}

FileSizes::FileSizes(JsonView jsonValue) : 
    m_source(0),
    m_sourceHasBeenSet(false),
    m_destination(0),
    m_destinationHasBeenSet(false),
    m_base(0),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

FileSizes& FileSizes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetInt64("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetInt64("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = jsonValue.GetInt64("base");

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSizes::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithInt64("source", m_source);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithInt64("destination", m_destination);

  }

  if(m_baseHasBeenSet)
  {
   payload.WithInt64("base", m_base);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
