/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/InputStartingPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalytics
  {
    namespace Model
    {
      namespace InputStartingPositionMapper
      {

        static const int NOW_HASH = HashingUtils::HashString("NOW");
        static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
        static const int LAST_STOPPED_POINT_HASH = HashingUtils::HashString("LAST_STOPPED_POINT");


        InputStartingPosition GetInputStartingPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOW_HASH)
          {
            return InputStartingPosition::NOW;
          }
          else if (hashCode == TRIM_HORIZON_HASH)
          {
            return InputStartingPosition::TRIM_HORIZON;
          }
          else if (hashCode == LAST_STOPPED_POINT_HASH)
          {
            return InputStartingPosition::LAST_STOPPED_POINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputStartingPosition>(hashCode);
          }

          return InputStartingPosition::NOT_SET;
        }

        Aws::String GetNameForInputStartingPosition(InputStartingPosition enumValue)
        {
          switch(enumValue)
          {
          case InputStartingPosition::NOW:
            return "NOW";
          case InputStartingPosition::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case InputStartingPosition::LAST_STOPPED_POINT:
            return "LAST_STOPPED_POINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputStartingPositionMapper
    } // namespace Model
  } // namespace KinesisAnalytics
} // namespace Aws
