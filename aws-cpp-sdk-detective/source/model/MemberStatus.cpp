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

#include <aws/detective/model/MemberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace MemberStatusMapper
      {

        static const int INVITED_HASH = HashingUtils::HashString("INVITED");
        static const int VERIFICATION_IN_PROGRESS_HASH = HashingUtils::HashString("VERIFICATION_IN_PROGRESS");
        static const int VERIFICATION_FAILED_HASH = HashingUtils::HashString("VERIFICATION_FAILED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        MemberStatus GetMemberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITED_HASH)
          {
            return MemberStatus::INVITED;
          }
          else if (hashCode == VERIFICATION_IN_PROGRESS_HASH)
          {
            return MemberStatus::VERIFICATION_IN_PROGRESS;
          }
          else if (hashCode == VERIFICATION_FAILED_HASH)
          {
            return MemberStatus::VERIFICATION_FAILED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return MemberStatus::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberStatus>(hashCode);
          }

          return MemberStatus::NOT_SET;
        }

        Aws::String GetNameForMemberStatus(MemberStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberStatus::INVITED:
            return "INVITED";
          case MemberStatus::VERIFICATION_IN_PROGRESS:
            return "VERIFICATION_IN_PROGRESS";
          case MemberStatus::VERIFICATION_FAILED:
            return "VERIFICATION_FAILED";
          case MemberStatus::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberStatusMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
