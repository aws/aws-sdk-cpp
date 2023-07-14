/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergeOperations.h>
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

MergeOperations::MergeOperations() : 
    m_source(ChangeTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(ChangeTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false)
{
}

MergeOperations::MergeOperations(JsonView jsonValue) : 
    m_source(ChangeTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(ChangeTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

MergeOperations& MergeOperations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = ChangeTypeEnumMapper::GetChangeTypeEnumForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = ChangeTypeEnumMapper::GetChangeTypeEnumForName(jsonValue.GetString("destination"));

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue MergeOperations::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", ChangeTypeEnumMapper::GetNameForChangeTypeEnum(m_source));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", ChangeTypeEnumMapper::GetNameForChangeTypeEnum(m_destination));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
