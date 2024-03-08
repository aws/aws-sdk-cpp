/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupReferencingSupportValue.h>
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
      namespace SecurityGroupReferencingSupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        SecurityGroupReferencingSupportValue GetSecurityGroupReferencingSupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return SecurityGroupReferencingSupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return SecurityGroupReferencingSupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityGroupReferencingSupportValue>(hashCode);
          }

          return SecurityGroupReferencingSupportValue::NOT_SET;
        }

        Aws::String GetNameForSecurityGroupReferencingSupportValue(SecurityGroupReferencingSupportValue enumValue)
        {
          switch(enumValue)
          {
          case SecurityGroupReferencingSupportValue::NOT_SET:
            return {};
          case SecurityGroupReferencingSupportValue::enable:
            return "enable";
          case SecurityGroupReferencingSupportValue::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityGroupReferencingSupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
