/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DiscoverySystemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace DiscoverySystemTypeMapper
      {

        static const int NetAppONTAP_HASH = HashingUtils::HashString("NetAppONTAP");


        DiscoverySystemType GetDiscoverySystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NetAppONTAP_HASH)
          {
            return DiscoverySystemType::NetAppONTAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoverySystemType>(hashCode);
          }

          return DiscoverySystemType::NOT_SET;
        }

        Aws::String GetNameForDiscoverySystemType(DiscoverySystemType enumValue)
        {
          switch(enumValue)
          {
          case DiscoverySystemType::NOT_SET:
            return {};
          case DiscoverySystemType::NetAppONTAP:
            return "NetAppONTAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoverySystemTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
