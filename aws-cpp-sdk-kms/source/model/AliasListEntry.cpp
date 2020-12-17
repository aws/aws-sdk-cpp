/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/AliasListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

AliasListEntry::AliasListEntry() : 
    m_aliasNameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
}

AliasListEntry::AliasListEntry(JsonView jsonValue) : 
    m_aliasNameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

AliasListEntry& AliasListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");

    m_aliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasArn"))
  {
    m_aliasArn = jsonValue.GetString("AliasArn");

    m_aliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetKeyId"))
  {
    m_targetKeyId = jsonValue.GetString("TargetKeyId");

    m_targetKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AliasListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_aliasArnHasBeenSet)
  {
   payload.WithString("AliasArn", m_aliasArn);

  }

  if(m_targetKeyIdHasBeenSet)
  {
   payload.WithString("TargetKeyId", m_targetKeyId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
