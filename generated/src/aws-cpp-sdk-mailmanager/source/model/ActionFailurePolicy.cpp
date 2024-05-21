/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace ActionFailurePolicyMapper
      {

        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int DROP_HASH = HashingUtils::HashString("DROP");


        ActionFailurePolicy GetActionFailurePolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_HASH)
          {
            return ActionFailurePolicy::CONTINUE;
          }
          else if (hashCode == DROP_HASH)
          {
            return ActionFailurePolicy::DROP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionFailurePolicy>(hashCode);
          }

          return ActionFailurePolicy::NOT_SET;
        }

        Aws::String GetNameForActionFailurePolicy(ActionFailurePolicy enumValue)
        {
          switch(enumValue)
          {
          case ActionFailurePolicy::NOT_SET:
            return {};
          case ActionFailurePolicy::CONTINUE:
            return "CONTINUE";
          case ActionFailurePolicy::DROP:
            return "DROP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionFailurePolicyMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
