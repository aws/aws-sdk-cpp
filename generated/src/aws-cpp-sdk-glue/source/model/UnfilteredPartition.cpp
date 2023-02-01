/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UnfilteredPartition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

UnfilteredPartition::UnfilteredPartition() : 
    m_partitionHasBeenSet(false),
    m_authorizedColumnsHasBeenSet(false),
    m_isRegisteredWithLakeFormation(false),
    m_isRegisteredWithLakeFormationHasBeenSet(false)
{
}

UnfilteredPartition::UnfilteredPartition(JsonView jsonValue) : 
    m_partitionHasBeenSet(false),
    m_authorizedColumnsHasBeenSet(false),
    m_isRegisteredWithLakeFormation(false),
    m_isRegisteredWithLakeFormationHasBeenSet(false)
{
  *this = jsonValue;
}

UnfilteredPartition& UnfilteredPartition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Partition"))
  {
    m_partition = jsonValue.GetObject("Partition");

    m_partitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizedColumns"))
  {
    Aws::Utils::Array<JsonView> authorizedColumnsJsonList = jsonValue.GetArray("AuthorizedColumns");
    for(unsigned authorizedColumnsIndex = 0; authorizedColumnsIndex < authorizedColumnsJsonList.GetLength(); ++authorizedColumnsIndex)
    {
      m_authorizedColumns.push_back(authorizedColumnsJsonList[authorizedColumnsIndex].AsString());
    }
    m_authorizedColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsRegisteredWithLakeFormation"))
  {
    m_isRegisteredWithLakeFormation = jsonValue.GetBool("IsRegisteredWithLakeFormation");

    m_isRegisteredWithLakeFormationHasBeenSet = true;
  }

  return *this;
}

JsonValue UnfilteredPartition::Jsonize() const
{
  JsonValue payload;

  if(m_partitionHasBeenSet)
  {
   payload.WithObject("Partition", m_partition.Jsonize());

  }

  if(m_authorizedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedColumnsJsonList(m_authorizedColumns.size());
   for(unsigned authorizedColumnsIndex = 0; authorizedColumnsIndex < authorizedColumnsJsonList.GetLength(); ++authorizedColumnsIndex)
   {
     authorizedColumnsJsonList[authorizedColumnsIndex].AsString(m_authorizedColumns[authorizedColumnsIndex]);
   }
   payload.WithArray("AuthorizedColumns", std::move(authorizedColumnsJsonList));

  }

  if(m_isRegisteredWithLakeFormationHasBeenSet)
  {
   payload.WithBool("IsRegisteredWithLakeFormation", m_isRegisteredWithLakeFormation);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
