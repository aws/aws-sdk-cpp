/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxNAS1Type.h>
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
      namespace KxNAS1TypeMapper
      {

        static const int SSD_1000_HASH = HashingUtils::HashString("SSD_1000");
        static const int SSD_250_HASH = HashingUtils::HashString("SSD_250");
        static const int HDD_12_HASH = HashingUtils::HashString("HDD_12");


        KxNAS1Type GetKxNAS1TypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSD_1000_HASH)
          {
            return KxNAS1Type::SSD_1000;
          }
          else if (hashCode == SSD_250_HASH)
          {
            return KxNAS1Type::SSD_250;
          }
          else if (hashCode == HDD_12_HASH)
          {
            return KxNAS1Type::HDD_12;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxNAS1Type>(hashCode);
          }

          return KxNAS1Type::NOT_SET;
        }

        Aws::String GetNameForKxNAS1Type(KxNAS1Type enumValue)
        {
          switch(enumValue)
          {
          case KxNAS1Type::NOT_SET:
            return {};
          case KxNAS1Type::SSD_1000:
            return "SSD_1000";
          case KxNAS1Type::SSD_250:
            return "SSD_250";
          case KxNAS1Type::HDD_12:
            return "HDD_12";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxNAS1TypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
