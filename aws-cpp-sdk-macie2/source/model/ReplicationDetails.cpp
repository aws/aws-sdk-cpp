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

#include <aws/macie2/model/ReplicationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ReplicationDetails::ReplicationDetails() : 
    m_replicated(false),
    m_replicatedHasBeenSet(false),
    m_replicatedExternally(false),
    m_replicatedExternallyHasBeenSet(false),
    m_replicationAccountsHasBeenSet(false)
{
}

ReplicationDetails::ReplicationDetails(JsonView jsonValue) : 
    m_replicated(false),
    m_replicatedHasBeenSet(false),
    m_replicatedExternally(false),
    m_replicatedExternallyHasBeenSet(false),
    m_replicationAccountsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationDetails& ReplicationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replicated"))
  {
    m_replicated = jsonValue.GetBool("replicated");

    m_replicatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatedExternally"))
  {
    m_replicatedExternally = jsonValue.GetBool("replicatedExternally");

    m_replicatedExternallyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationAccounts"))
  {
    Array<JsonView> replicationAccountsJsonList = jsonValue.GetArray("replicationAccounts");
    for(unsigned replicationAccountsIndex = 0; replicationAccountsIndex < replicationAccountsJsonList.GetLength(); ++replicationAccountsIndex)
    {
      m_replicationAccounts.push_back(replicationAccountsJsonList[replicationAccountsIndex].AsString());
    }
    m_replicationAccountsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_replicatedHasBeenSet)
  {
   payload.WithBool("replicated", m_replicated);

  }

  if(m_replicatedExternallyHasBeenSet)
  {
   payload.WithBool("replicatedExternally", m_replicatedExternally);

  }

  if(m_replicationAccountsHasBeenSet)
  {
   Array<JsonValue> replicationAccountsJsonList(m_replicationAccounts.size());
   for(unsigned replicationAccountsIndex = 0; replicationAccountsIndex < replicationAccountsJsonList.GetLength(); ++replicationAccountsIndex)
   {
     replicationAccountsJsonList[replicationAccountsIndex].AsString(m_replicationAccounts[replicationAccountsIndex]);
   }
   payload.WithArray("replicationAccounts", std::move(replicationAccountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
