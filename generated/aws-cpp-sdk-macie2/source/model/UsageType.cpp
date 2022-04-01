/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UsageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace UsageTypeMapper
      {

        static const int DATA_INVENTORY_EVALUATION_HASH = HashingUtils::HashString("DATA_INVENTORY_EVALUATION");
        static const int SENSITIVE_DATA_DISCOVERY_HASH = HashingUtils::HashString("SENSITIVE_DATA_DISCOVERY");


        UsageType GetUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_INVENTORY_EVALUATION_HASH)
          {
            return UsageType::DATA_INVENTORY_EVALUATION;
          }
          else if (hashCode == SENSITIVE_DATA_DISCOVERY_HASH)
          {
            return UsageType::SENSITIVE_DATA_DISCOVERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageType>(hashCode);
          }

          return UsageType::NOT_SET;
        }

        Aws::String GetNameForUsageType(UsageType enumValue)
        {
          switch(enumValue)
          {
          case UsageType::DATA_INVENTORY_EVALUATION:
            return "DATA_INVENTORY_EVALUATION";
          case UsageType::SENSITIVE_DATA_DISCOVERY:
            return "SENSITIVE_DATA_DISCOVERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
