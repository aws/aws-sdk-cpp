/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DeletionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace DeletionModeMapper
      {

        static const int ALL_CONFIGURATIONS_HASH = HashingUtils::HashString("ALL_CONFIGURATIONS");
        static const int LOCAL_CONFIGURATION_ONLY_HASH = HashingUtils::HashString("LOCAL_CONFIGURATION_ONLY");


        DeletionMode GetDeletionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_CONFIGURATIONS_HASH)
          {
            return DeletionMode::ALL_CONFIGURATIONS;
          }
          else if (hashCode == LOCAL_CONFIGURATION_ONLY_HASH)
          {
            return DeletionMode::LOCAL_CONFIGURATION_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionMode>(hashCode);
          }

          return DeletionMode::NOT_SET;
        }

        Aws::String GetNameForDeletionMode(DeletionMode enumValue)
        {
          switch(enumValue)
          {
          case DeletionMode::NOT_SET:
            return {};
          case DeletionMode::ALL_CONFIGURATIONS:
            return "ALL_CONFIGURATIONS";
          case DeletionMode::LOCAL_CONFIGURATION_ONLY:
            return "LOCAL_CONFIGURATION_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionModeMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
