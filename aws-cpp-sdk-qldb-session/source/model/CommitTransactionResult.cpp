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

#include <aws/qldb-session/model/CommitTransactionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

CommitTransactionResult::CommitTransactionResult() : 
    m_transactionIdHasBeenSet(false),
    m_commitDigestHasBeenSet(false)
{
}

CommitTransactionResult::CommitTransactionResult(JsonView jsonValue) : 
    m_transactionIdHasBeenSet(false),
    m_commitDigestHasBeenSet(false)
{
  *this = jsonValue;
}

CommitTransactionResult& CommitTransactionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommitDigest"))
  {
    m_commitDigest = HashingUtils::Base64Decode(jsonValue.GetString("CommitDigest"));
    m_commitDigestHasBeenSet = true;
  }

  return *this;
}

JsonValue CommitTransactionResult::Jsonize() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_commitDigestHasBeenSet)
  {
   payload.WithString("CommitDigest", HashingUtils::Base64Encode(m_commitDigest));
  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
