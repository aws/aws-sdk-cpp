/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/OptInType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DocDBElastic
  {
    namespace Model
    {
      namespace OptInTypeMapper
      {

        static const int IMMEDIATE_HASH = HashingUtils::HashString("IMMEDIATE");
        static const int NEXT_MAINTENANCE_HASH = HashingUtils::HashString("NEXT_MAINTENANCE");
        static const int APPLY_ON_HASH = HashingUtils::HashString("APPLY_ON");
        static const int UNDO_OPT_IN_HASH = HashingUtils::HashString("UNDO_OPT_IN");


        OptInType GetOptInTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMMEDIATE_HASH)
          {
            return OptInType::IMMEDIATE;
          }
          else if (hashCode == NEXT_MAINTENANCE_HASH)
          {
            return OptInType::NEXT_MAINTENANCE;
          }
          else if (hashCode == APPLY_ON_HASH)
          {
            return OptInType::APPLY_ON;
          }
          else if (hashCode == UNDO_OPT_IN_HASH)
          {
            return OptInType::UNDO_OPT_IN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptInType>(hashCode);
          }

          return OptInType::NOT_SET;
        }

        Aws::String GetNameForOptInType(OptInType enumValue)
        {
          switch(enumValue)
          {
          case OptInType::NOT_SET:
            return {};
          case OptInType::IMMEDIATE:
            return "IMMEDIATE";
          case OptInType::NEXT_MAINTENANCE:
            return "NEXT_MAINTENANCE";
          case OptInType::APPLY_ON:
            return "APPLY_ON";
          case OptInType::UNDO_OPT_IN:
            return "UNDO_OPT_IN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptInTypeMapper
    } // namespace Model
  } // namespace DocDBElastic
} // namespace Aws
