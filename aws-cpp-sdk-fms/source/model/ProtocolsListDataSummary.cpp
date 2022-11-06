/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ProtocolsListDataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ProtocolsListDataSummary::ProtocolsListDataSummary() : 
    m_listArnHasBeenSet(false),
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_protocolsListHasBeenSet(false)
{
}

ProtocolsListDataSummary::ProtocolsListDataSummary(JsonView jsonValue) : 
    m_listArnHasBeenSet(false),
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_protocolsListHasBeenSet(false)
{
  *this = jsonValue;
}

ProtocolsListDataSummary& ProtocolsListDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ListArn"))
  {
    m_listArn = jsonValue.GetString("ListArn");

    m_listArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListId"))
  {
    m_listId = jsonValue.GetString("ListId");

    m_listIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListName"))
  {
    m_listName = jsonValue.GetString("ListName");

    m_listNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtocolsList"))
  {
    Aws::Utils::Array<JsonView> protocolsListJsonList = jsonValue.GetArray("ProtocolsList");
    for(unsigned protocolsListIndex = 0; protocolsListIndex < protocolsListJsonList.GetLength(); ++protocolsListIndex)
    {
      m_protocolsList.push_back(protocolsListJsonList[protocolsListIndex].AsString());
    }
    m_protocolsListHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtocolsListDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_listArnHasBeenSet)
  {
   payload.WithString("ListArn", m_listArn);

  }

  if(m_listIdHasBeenSet)
  {
   payload.WithString("ListId", m_listId);

  }

  if(m_listNameHasBeenSet)
  {
   payload.WithString("ListName", m_listName);

  }

  if(m_protocolsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsListJsonList(m_protocolsList.size());
   for(unsigned protocolsListIndex = 0; protocolsListIndex < protocolsListJsonList.GetLength(); ++protocolsListIndex)
   {
     protocolsListJsonList[protocolsListIndex].AsString(m_protocolsList[protocolsListIndex]);
   }
   payload.WithArray("ProtocolsList", std::move(protocolsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
