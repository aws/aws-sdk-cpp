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

#include <aws/managedblockchain/model/VoteValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace VoteValueMapper
      {

        static const int YES_HASH = HashingUtils::HashString("YES");
        static const int NO_HASH = HashingUtils::HashString("NO");


        VoteValue GetVoteValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YES_HASH)
          {
            return VoteValue::YES;
          }
          else if (hashCode == NO_HASH)
          {
            return VoteValue::NO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoteValue>(hashCode);
          }

          return VoteValue::NOT_SET;
        }

        Aws::String GetNameForVoteValue(VoteValue enumValue)
        {
          switch(enumValue)
          {
          case VoteValue::YES:
            return "YES";
          case VoteValue::NO:
            return "NO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoteValueMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
