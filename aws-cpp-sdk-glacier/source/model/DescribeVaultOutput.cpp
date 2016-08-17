/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glacier/model/DescribeVaultOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

DescribeVaultOutput::DescribeVaultOutput() : 
    m_vaultARNHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastInventoryDateHasBeenSet(false),
    m_numberOfArchives(0),
    m_numberOfArchivesHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false)
{
}

DescribeVaultOutput::DescribeVaultOutput(const JsonValue& jsonValue) : 
    m_vaultARNHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastInventoryDateHasBeenSet(false),
    m_numberOfArchives(0),
    m_numberOfArchivesHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeVaultOutput& DescribeVaultOutput::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");

    m_vaultARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VaultName"))
  {
    m_vaultName = jsonValue.GetString("VaultName");

    m_vaultNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastInventoryDate"))
  {
    m_lastInventoryDate = jsonValue.GetString("LastInventoryDate");

    m_lastInventoryDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfArchives"))
  {
    m_numberOfArchives = jsonValue.GetInt64("NumberOfArchives");

    m_numberOfArchivesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("SizeInBytes");

    m_sizeInBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeVaultOutput::Jsonize() const
{
  JsonValue payload;

  if(m_vaultARNHasBeenSet)
  {
   payload.WithString("VaultARN", m_vaultARN);

  }

  if(m_vaultNameHasBeenSet)
  {
   payload.WithString("VaultName", m_vaultName);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_lastInventoryDateHasBeenSet)
  {
   payload.WithString("LastInventoryDate", m_lastInventoryDate);

  }

  if(m_numberOfArchivesHasBeenSet)
  {
   payload.WithInt64("NumberOfArchives", m_numberOfArchives);

  }

  if(m_sizeInBytesHasBeenSet)
  {
   payload.WithInt64("SizeInBytes", m_sizeInBytes);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws