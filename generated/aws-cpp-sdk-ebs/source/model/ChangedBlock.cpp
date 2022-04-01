/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ChangedBlock.h>
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

ChangedBlock::ChangedBlock() : 
    m_blockIndex(0),
    m_blockIndexHasBeenSet(false),
    m_firstBlockTokenHasBeenSet(false),
    m_secondBlockTokenHasBeenSet(false)
{
}

ChangedBlock::ChangedBlock(JsonView jsonValue) : 
    m_blockIndex(0),
    m_blockIndexHasBeenSet(false),
    m_firstBlockTokenHasBeenSet(false),
    m_secondBlockTokenHasBeenSet(false)
{
  *this = jsonValue;
}

ChangedBlock& ChangedBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockIndex"))
  {
    m_blockIndex = jsonValue.GetInteger("BlockIndex");

    m_blockIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstBlockToken"))
  {
    m_firstBlockToken = jsonValue.GetString("FirstBlockToken");

    m_firstBlockTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondBlockToken"))
  {
    m_secondBlockToken = jsonValue.GetString("SecondBlockToken");

    m_secondBlockTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangedBlock::Jsonize() const
{
  JsonValue payload;

  if(m_blockIndexHasBeenSet)
  {
   payload.WithInteger("BlockIndex", m_blockIndex);

  }

  if(m_firstBlockTokenHasBeenSet)
  {
   payload.WithString("FirstBlockToken", m_firstBlockToken);

  }

  if(m_secondBlockTokenHasBeenSet)
  {
   payload.WithString("SecondBlockToken", m_secondBlockToken);

  }

  return payload;
}

} // namespace Model
} // namespace EBS
} // namespace Aws
