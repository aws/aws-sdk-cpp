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
#include <aws/route53domains/model/ReachabilityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace ReachabilityStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int DONE_HASH = HashingUtils::HashString("DONE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        ReachabilityStatus GetReachabilityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ReachabilityStatus::PENDING;
          }
          else if (hashCode == DONE_HASH)
          {
            return ReachabilityStatus::DONE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ReachabilityStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReachabilityStatus>(hashCode);
          }

          return ReachabilityStatus::NOT_SET;
        }

        Aws::String GetNameForReachabilityStatus(ReachabilityStatus enumValue)
        {
          switch(enumValue)
          {
          case ReachabilityStatus::PENDING:
            return "PENDING";
          case ReachabilityStatus::DONE:
            return "DONE";
          case ReachabilityStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReachabilityStatusMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
