/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StreamExceptionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace StreamExceptionPolicyMapper
      {

        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");


        StreamExceptionPolicy GetStreamExceptionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DROP_HASH)
          {
            return StreamExceptionPolicy::DROP;
          }
          else if (hashCode == CONTINUE_HASH)
          {
            return StreamExceptionPolicy::CONTINUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamExceptionPolicy>(hashCode);
          }

          return StreamExceptionPolicy::NOT_SET;
        }

        Aws::String GetNameForStreamExceptionPolicy(StreamExceptionPolicy enumValue)
        {
          switch(enumValue)
          {
          case StreamExceptionPolicy::DROP:
            return "DROP";
          case StreamExceptionPolicy::CONTINUE:
            return "CONTINUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamExceptionPolicyMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
