/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/IPAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace IPAddressTypeMapper
      {

        static const int IP_V4_HASH = HashingUtils::HashString("IP_V4");


        IPAddressType GetIPAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_V4_HASH)
          {
            return IPAddressType::IP_V4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IPAddressType>(hashCode);
          }

          return IPAddressType::NOT_SET;
        }

        Aws::String GetNameForIPAddressType(IPAddressType enumValue)
        {
          switch(enumValue)
          {
          case IPAddressType::NOT_SET:
            return {};
          case IPAddressType::IP_V4:
            return "IP_V4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IPAddressTypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
