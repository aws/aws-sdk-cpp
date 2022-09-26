/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace UpdateModeMapper
      {

        static const int Overwrite_HASH = HashingUtils::HashString("Overwrite");
        static const int Merge_HASH = HashingUtils::HashString("Merge");


        UpdateMode GetUpdateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Overwrite_HASH)
          {
            return UpdateMode::Overwrite;
          }
          else if (hashCode == Merge_HASH)
          {
            return UpdateMode::Merge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateMode>(hashCode);
          }

          return UpdateMode::NOT_SET;
        }

        Aws::String GetNameForUpdateMode(UpdateMode enumValue)
        {
          switch(enumValue)
          {
          case UpdateMode::Overwrite:
            return "Overwrite";
          case UpdateMode::Merge:
            return "Merge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateModeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
