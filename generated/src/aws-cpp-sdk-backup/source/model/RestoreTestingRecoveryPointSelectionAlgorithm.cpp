/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingRecoveryPointSelectionAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace RestoreTestingRecoveryPointSelectionAlgorithmMapper
      {

        static const int LATEST_WITHIN_WINDOW_HASH = HashingUtils::HashString("LATEST_WITHIN_WINDOW");
        static const int RANDOM_WITHIN_WINDOW_HASH = HashingUtils::HashString("RANDOM_WITHIN_WINDOW");


        RestoreTestingRecoveryPointSelectionAlgorithm GetRestoreTestingRecoveryPointSelectionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATEST_WITHIN_WINDOW_HASH)
          {
            return RestoreTestingRecoveryPointSelectionAlgorithm::LATEST_WITHIN_WINDOW;
          }
          else if (hashCode == RANDOM_WITHIN_WINDOW_HASH)
          {
            return RestoreTestingRecoveryPointSelectionAlgorithm::RANDOM_WITHIN_WINDOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreTestingRecoveryPointSelectionAlgorithm>(hashCode);
          }

          return RestoreTestingRecoveryPointSelectionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForRestoreTestingRecoveryPointSelectionAlgorithm(RestoreTestingRecoveryPointSelectionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case RestoreTestingRecoveryPointSelectionAlgorithm::NOT_SET:
            return {};
          case RestoreTestingRecoveryPointSelectionAlgorithm::LATEST_WITHIN_WINDOW:
            return "LATEST_WITHIN_WINDOW";
          case RestoreTestingRecoveryPointSelectionAlgorithm::RANDOM_WITHIN_WINDOW:
            return "RANDOM_WITHIN_WINDOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreTestingRecoveryPointSelectionAlgorithmMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
