/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GovernedEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace GovernedEntityTypeMapper
      {

        static const int ASSET_HASH = HashingUtils::HashString("ASSET");


        GovernedEntityType GetGovernedEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_HASH)
          {
            return GovernedEntityType::ASSET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GovernedEntityType>(hashCode);
          }

          return GovernedEntityType::NOT_SET;
        }

        Aws::String GetNameForGovernedEntityType(GovernedEntityType enumValue)
        {
          switch(enumValue)
          {
          case GovernedEntityType::NOT_SET:
            return {};
          case GovernedEntityType::ASSET:
            return "ASSET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GovernedEntityTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
