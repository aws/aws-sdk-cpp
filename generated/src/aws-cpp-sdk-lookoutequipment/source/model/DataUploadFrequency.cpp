/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DataUploadFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace DataUploadFrequencyMapper
      {

        static constexpr uint32_t PT5M_HASH = ConstExprHashingUtils::HashString("PT5M");
        static constexpr uint32_t PT10M_HASH = ConstExprHashingUtils::HashString("PT10M");
        static constexpr uint32_t PT15M_HASH = ConstExprHashingUtils::HashString("PT15M");
        static constexpr uint32_t PT30M_HASH = ConstExprHashingUtils::HashString("PT30M");
        static constexpr uint32_t PT1H_HASH = ConstExprHashingUtils::HashString("PT1H");


        DataUploadFrequency GetDataUploadFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PT5M_HASH)
          {
            return DataUploadFrequency::PT5M;
          }
          else if (hashCode == PT10M_HASH)
          {
            return DataUploadFrequency::PT10M;
          }
          else if (hashCode == PT15M_HASH)
          {
            return DataUploadFrequency::PT15M;
          }
          else if (hashCode == PT30M_HASH)
          {
            return DataUploadFrequency::PT30M;
          }
          else if (hashCode == PT1H_HASH)
          {
            return DataUploadFrequency::PT1H;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataUploadFrequency>(hashCode);
          }

          return DataUploadFrequency::NOT_SET;
        }

        Aws::String GetNameForDataUploadFrequency(DataUploadFrequency enumValue)
        {
          switch(enumValue)
          {
          case DataUploadFrequency::NOT_SET:
            return {};
          case DataUploadFrequency::PT5M:
            return "PT5M";
          case DataUploadFrequency::PT10M:
            return "PT10M";
          case DataUploadFrequency::PT15M:
            return "PT15M";
          case DataUploadFrequency::PT30M:
            return "PT30M";
          case DataUploadFrequency::PT1H:
            return "PT1H";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataUploadFrequencyMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
