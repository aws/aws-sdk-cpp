/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TargetSelection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace TargetSelectionMapper
      {

        static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");
        static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");


        TargetSelection GetTargetSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUOUS_HASH)
          {
            return TargetSelection::CONTINUOUS;
          }
          else if (hashCode == SNAPSHOT_HASH)
          {
            return TargetSelection::SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetSelection>(hashCode);
          }

          return TargetSelection::NOT_SET;
        }

        Aws::String GetNameForTargetSelection(TargetSelection enumValue)
        {
          switch(enumValue)
          {
          case TargetSelection::CONTINUOUS:
            return "CONTINUOUS";
          case TargetSelection::SNAPSHOT:
            return "SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetSelectionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
