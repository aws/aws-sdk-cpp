/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetFpgaImageAttributeName.h>
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
      namespace ResetFpgaImageAttributeNameMapper
      {

        static const int loadPermission_HASH = HashingUtils::HashString("loadPermission");


        ResetFpgaImageAttributeName GetResetFpgaImageAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == loadPermission_HASH)
          {
            return ResetFpgaImageAttributeName::loadPermission;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResetFpgaImageAttributeName>(hashCode);
          }

          return ResetFpgaImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForResetFpgaImageAttributeName(ResetFpgaImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ResetFpgaImageAttributeName::loadPermission:
            return "loadPermission";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResetFpgaImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
