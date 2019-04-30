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

#include <aws/managedblockchain/model/VoteSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

VoteSummary::VoteSummary() : 
    m_vote(VoteValue::NOT_SET),
    m_voteHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

VoteSummary::VoteSummary(JsonView jsonValue) : 
    m_vote(VoteValue::NOT_SET),
    m_voteHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
  *this = jsonValue;
}

VoteSummary& VoteSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Vote"))
  {
    m_vote = VoteValueMapper::GetVoteValueForName(jsonValue.GetString("Vote"));

    m_voteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberName"))
  {
    m_memberName = jsonValue.GetString("MemberName");

    m_memberNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetString("MemberId");

    m_memberIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VoteSummary::Jsonize() const
{
  JsonValue payload;

  if(m_voteHasBeenSet)
  {
   payload.WithString("Vote", VoteValueMapper::GetNameForVoteValue(m_vote));
  }

  if(m_memberNameHasBeenSet)
  {
   payload.WithString("MemberName", m_memberName);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
