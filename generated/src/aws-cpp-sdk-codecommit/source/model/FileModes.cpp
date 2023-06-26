/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/FileModes.h>
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

FileModes::FileModes() : 
    m_source(FileModeTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(FileModeTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false),
    m_base(FileModeTypeEnum::NOT_SET),
    m_baseHasBeenSet(false)
{
}

FileModes::FileModes(JsonView jsonValue) : 
    m_source(FileModeTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(FileModeTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false),
    m_base(FileModeTypeEnum::NOT_SET),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

FileModes& FileModes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("destination"));

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("base"));

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue FileModes::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", FileModeTypeEnumMapper::GetNameForFileModeTypeEnum(m_source));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", FileModeTypeEnumMapper::GetNameForFileModeTypeEnum(m_destination));
  }

  if(m_baseHasBeenSet)
  {
   payload.WithString("base", FileModeTypeEnumMapper::GetNameForFileModeTypeEnum(m_base));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
