/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SortByProvisionedModels.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace SortByProvisionedModelsMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortByProvisionedModels GetSortByProvisionedModelsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return SortByProvisionedModels::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortByProvisionedModels>(hashCode);
          }

          return SortByProvisionedModels::NOT_SET;
        }

        Aws::String GetNameForSortByProvisionedModels(SortByProvisionedModels enumValue)
        {
          switch(enumValue)
          {
          case SortByProvisionedModels::NOT_SET:
            return {};
          case SortByProvisionedModels::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortByProvisionedModelsMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
