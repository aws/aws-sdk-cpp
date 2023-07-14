/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetImageAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ResetImageAttributeNameMapper
      {

        static const int launchPermission_HASH = HashingUtils::HashString("launchPermission");


        ResetImageAttributeName GetResetImageAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == launchPermission_HASH)
          {
            return ResetImageAttributeName::launchPermission;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResetImageAttributeName>(hashCode);
          }

          return ResetImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForResetImageAttributeName(ResetImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ResetImageAttributeName::launchPermission:
            return "launchPermission";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResetImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
