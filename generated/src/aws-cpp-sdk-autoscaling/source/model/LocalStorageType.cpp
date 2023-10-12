/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LocalStorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace LocalStorageTypeMapper
      {

        static constexpr uint32_t hdd_HASH = ConstExprHashingUtils::HashString("hdd");
        static constexpr uint32_t ssd_HASH = ConstExprHashingUtils::HashString("ssd");


        LocalStorageType GetLocalStorageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace AutoScaling
} // namespace Aws
