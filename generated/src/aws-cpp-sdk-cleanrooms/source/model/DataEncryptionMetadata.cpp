/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DataEncryptionMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

DataEncryptionMetadata::DataEncryptionMetadata() : 
    m_allowCleartext(false),
    m_allowCleartextHasBeenSet(false),
    m_allowDuplicates(false),
    m_allowDuplicatesHasBeenSet(false),
    m_allowJoinsOnColumnsWithDifferentNames(false),
    m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet(false),
    m_preserveNulls(false),
    m_preserveNullsHasBeenSet(false)
{
}

DataEncryptionMetadata::DataEncryptionMetadata(JsonView jsonValue) : 
    m_allowCleartext(false),
    m_allowCleartextHasBeenSet(false),
    m_allowDuplicates(false),
    m_allowDuplicatesHasBeenSet(false),
    m_allowJoinsOnColumnsWithDifferentNames(false),
    m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet(false),
    m_preserveNulls(false),
    m_preserveNullsHasBeenSet(false)
{
  *this = jsonValue;
}

DataEncryptionMetadata& DataEncryptionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowCleartext"))
  {
    m_allowCleartext = jsonValue.GetBool("allowCleartext");

    m_allowCleartextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowDuplicates"))
  {
    m_allowDuplicates = jsonValue.GetBool("allowDuplicates");

    m_allowDuplicatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowJoinsOnColumnsWithDifferentNames"))
  {
    m_allowJoinsOnColumnsWithDifferentNames = jsonValue.GetBool("allowJoinsOnColumnsWithDifferentNames");

    m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preserveNulls"))
  {
    m_preserveNulls = jsonValue.GetBool("preserveNulls");

    m_preserveNullsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataEncryptionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_allowCleartextHasBeenSet)
  {
   payload.WithBool("allowCleartext", m_allowCleartext);

  }

  if(m_allowDuplicatesHasBeenSet)
  {
   payload.WithBool("allowDuplicates", m_allowDuplicates);

  }

  if(m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet)
  {
   payload.WithBool("allowJoinsOnColumnsWithDifferentNames", m_allowJoinsOnColumnsWithDifferentNames);

  }

  if(m_preserveNullsHasBeenSet)
  {
   payload.WithBool("preserveNulls", m_preserveNulls);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
