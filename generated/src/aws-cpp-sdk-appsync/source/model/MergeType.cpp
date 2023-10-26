/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/MergeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace MergeTypeMapper
      {

        static const int MANUAL_MERGE_HASH = HashingUtils::HashString("MANUAL_MERGE");
        static const int AUTO_MERGE_HASH = HashingUtils::HashString("AUTO_MERGE");


        MergeType GetMergeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_MERGE_HASH)
          {
            return MergeType::MANUAL_MERGE;
          }
          else if (hashCode == AUTO_MERGE_HASH)
          {
            return MergeType::AUTO_MERGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MergeType>(hashCode);
          }

          return MergeType::NOT_SET;
        }

        Aws::String GetNameForMergeType(MergeType enumValue)
        {
          switch(enumValue)
          {
          case MergeType::NOT_SET:
            return {};
          case MergeType::MANUAL_MERGE:
            return "MANUAL_MERGE";
          case MergeType::AUTO_MERGE:
            return "AUTO_MERGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MergeTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
