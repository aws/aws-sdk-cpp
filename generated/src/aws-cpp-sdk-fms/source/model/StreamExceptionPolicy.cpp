/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/StreamExceptionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace StreamExceptionPolicyMapper
      {

        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");
        static const int FMS_IGNORE_HASH = HashingUtils::HashString("FMS_IGNORE");


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
          else if (hashCode == REJECT_HASH)
          {
            return StreamExceptionPolicy::REJECT;
          }
          else if (hashCode == FMS_IGNORE_HASH)
          {
            return StreamExceptionPolicy::FMS_IGNORE;
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
          case StreamExceptionPolicy::NOT_SET:
            return {};
          case StreamExceptionPolicy::DROP:
            return "DROP";
          case StreamExceptionPolicy::CONTINUE:
            return "CONTINUE";
          case StreamExceptionPolicy::REJECT:
            return "REJECT";
          case StreamExceptionPolicy::FMS_IGNORE:
            return "FMS_IGNORE";
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
  } // namespace FMS
} // namespace Aws
