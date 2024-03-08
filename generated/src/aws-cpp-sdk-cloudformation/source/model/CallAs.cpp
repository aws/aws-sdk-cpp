/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CallAs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace CallAsMapper
      {

        static const int SELF_HASH = HashingUtils::HashString("SELF");
        static const int DELEGATED_ADMIN_HASH = HashingUtils::HashString("DELEGATED_ADMIN");


        CallAs GetCallAsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_HASH)
          {
            return CallAs::SELF;
          }
          else if (hashCode == DELEGATED_ADMIN_HASH)
          {
            return CallAs::DELEGATED_ADMIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallAs>(hashCode);
          }

          return CallAs::NOT_SET;
        }

        Aws::String GetNameForCallAs(CallAs enumValue)
        {
          switch(enumValue)
          {
          case CallAs::NOT_SET:
            return {};
          case CallAs::SELF:
            return "SELF";
          case CallAs::DELEGATED_ADMIN:
            return "DELEGATED_ADMIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallAsMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
