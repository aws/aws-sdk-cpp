/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/IpAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace IpAddressTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int DUAL_STACK_HASH = HashingUtils::HashString("DUAL_STACK");


        IpAddressType GetIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return IpAddressType::IPV4;
          }
          else if (hashCode == DUAL_STACK_HASH)
          {
            return IpAddressType::DUAL_STACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpAddressType>(hashCode);
          }

          return IpAddressType::NOT_SET;
        }

        Aws::String GetNameForIpAddressType(IpAddressType enumValue)
        {
          switch(enumValue)
          {
          case IpAddressType::NOT_SET:
            return {};
          case IpAddressType::IPV4:
            return "IPV4";
          case IpAddressType::DUAL_STACK:
            return "DUAL_STACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpAddressTypeMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
