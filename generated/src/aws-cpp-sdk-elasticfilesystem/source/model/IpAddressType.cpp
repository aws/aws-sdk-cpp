/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/IpAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace IpAddressTypeMapper
      {

        static const int IPV4_ONLY_HASH = HashingUtils::HashString("IPV4_ONLY");
        static const int IPV6_ONLY_HASH = HashingUtils::HashString("IPV6_ONLY");
        static const int DUAL_STACK_HASH = HashingUtils::HashString("DUAL_STACK");


        IpAddressType GetIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_ONLY_HASH)
          {
            return IpAddressType::IPV4_ONLY;
          }
          else if (hashCode == IPV6_ONLY_HASH)
          {
            return IpAddressType::IPV6_ONLY;
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
          case IpAddressType::IPV4_ONLY:
            return "IPV4_ONLY";
          case IpAddressType::IPV6_ONLY:
            return "IPV6_ONLY";
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
  } // namespace EFS
} // namespace Aws
