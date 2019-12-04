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

#include <aws/ebs/model/Block.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EBS
{
namespace Model
{

Block::Block() : 
    m_blockIndex(0),
    m_blockIndexHasBeenSet(false),
    m_blockTokenHasBeenSet(false)
{
}

Block::Block(JsonView jsonValue) : 
    m_blockIndex(0),
    m_blockIndexHasBeenSet(false),
    m_blockTokenHasBeenSet(false)
{
  *this = jsonValue;
}

Block& Block::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockIndex"))
  {
    m_blockIndex = jsonValue.GetInteger("BlockIndex");

    m_blockIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockToken"))
  {
    m_blockToken = jsonValue.GetString("BlockToken");

    m_blockTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue Block::Jsonize() const
{
  JsonValue payload;

  if(m_blockIndexHasBeenSet)
  {
   payload.WithInteger("BlockIndex", m_blockIndex);

  }

  if(m_blockTokenHasBeenSet)
  {
   payload.WithString("BlockToken", m_blockToken);

  }

  return payload;
}

} // namespace Model
} // namespace EBS
} // namespace Aws
