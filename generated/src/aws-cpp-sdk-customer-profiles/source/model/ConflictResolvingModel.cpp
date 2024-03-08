/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ConflictResolvingModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace ConflictResolvingModelMapper
      {

        static const int RECENCY_HASH = HashingUtils::HashString("RECENCY");
        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");


        ConflictResolvingModel GetConflictResolvingModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECENCY_HASH)
          {
            return ConflictResolvingModel::RECENCY;
          }
          else if (hashCode == SOURCE_HASH)
          {
            return ConflictResolvingModel::SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictResolvingModel>(hashCode);
          }

          return ConflictResolvingModel::NOT_SET;
        }

        Aws::String GetNameForConflictResolvingModel(ConflictResolvingModel enumValue)
        {
          switch(enumValue)
          {
          case ConflictResolvingModel::NOT_SET:
            return {};
          case ConflictResolvingModel::RECENCY:
            return "RECENCY";
          case ConflictResolvingModel::SOURCE:
            return "SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictResolvingModelMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
