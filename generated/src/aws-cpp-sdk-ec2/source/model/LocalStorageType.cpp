/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalStorageType.h>
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
      namespace LocalStorageTypeMapper
      {

        static const int hdd_HASH = HashingUtils::HashString("hdd");
        static const int ssd_HASH = HashingUtils::HashString("ssd");


        LocalStorageType GetLocalStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hdd_HASH)
          {
            return LocalStorageType::hdd;
          }
          else if (hashCode == ssd_HASH)
          {
            return LocalStorageType::ssd;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalStorageType>(hashCode);
          }

          return LocalStorageType::NOT_SET;
        }

        Aws::String GetNameForLocalStorageType(LocalStorageType enumValue)
        {
          switch(enumValue)
          {
          case LocalStorageType::NOT_SET:
            return {};
          case LocalStorageType::hdd:
            return "hdd";
          case LocalStorageType::ssd:
            return "ssd";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocalStorageTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
