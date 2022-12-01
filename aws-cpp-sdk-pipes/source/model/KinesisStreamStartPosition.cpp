/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/KinesisStreamStartPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace KinesisStreamStartPositionMapper
      {

        static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");
        static const int AT_TIMESTAMP_HASH = HashingUtils::HashString("AT_TIMESTAMP");


        KinesisStreamStartPosition GetKinesisStreamStartPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIM_HORIZON_HASH)
          {
            return KinesisStreamStartPosition::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return KinesisStreamStartPosition::LATEST;
          }
          else if (hashCode == AT_TIMESTAMP_HASH)
          {
            return KinesisStreamStartPosition::AT_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KinesisStreamStartPosition>(hashCode);
          }

          return KinesisStreamStartPosition::NOT_SET;
        }

        Aws::String GetNameForKinesisStreamStartPosition(KinesisStreamStartPosition enumValue)
        {
          switch(enumValue)
          {
          case KinesisStreamStartPosition::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case KinesisStreamStartPosition::LATEST:
            return "LATEST";
          case KinesisStreamStartPosition::AT_TIMESTAMP:
            return "AT_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KinesisStreamStartPositionMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
