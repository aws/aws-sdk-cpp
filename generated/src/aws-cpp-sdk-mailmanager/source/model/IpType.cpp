/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IpType.h>
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
      namespace IpTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int DUAL_STACK_HASH = HashingUtils::HashString("DUAL_STACK");


        IpType GetIpTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return IpType::IPV4;
          }
          else if (hashCode == DUAL_STACK_HASH)
          {
            return IpType::DUAL_STACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpType>(hashCode);
          }

          return IpType::NOT_SET;
        }

        Aws::String GetNameForIpType(IpType enumValue)
        {
          switch(enumValue)
          {
          case IpType::NOT_SET:
            return {};
          case IpType::IPV4:
            return "IPV4";
          case IpType::DUAL_STACK:
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

      } // namespace IpTypeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
