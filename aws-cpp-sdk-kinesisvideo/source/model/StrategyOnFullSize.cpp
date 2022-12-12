/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/StrategyOnFullSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace StrategyOnFullSizeMapper
      {

        static const int DELETE_OLDEST_MEDIA_HASH = HashingUtils::HashString("DELETE_OLDEST_MEDIA");
        static const int DENY_NEW_MEDIA_HASH = HashingUtils::HashString("DENY_NEW_MEDIA");


        StrategyOnFullSize GetStrategyOnFullSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE_OLDEST_MEDIA_HASH)
          {
            return StrategyOnFullSize::DELETE_OLDEST_MEDIA;
          }
          else if (hashCode == DENY_NEW_MEDIA_HASH)
          {
            return StrategyOnFullSize::DENY_NEW_MEDIA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StrategyOnFullSize>(hashCode);
          }

          return StrategyOnFullSize::NOT_SET;
        }

        Aws::String GetNameForStrategyOnFullSize(StrategyOnFullSize enumValue)
        {
          switch(enumValue)
          {
          case StrategyOnFullSize::DELETE_OLDEST_MEDIA:
            return "DELETE_OLDEST_MEDIA";
          case StrategyOnFullSize::DENY_NEW_MEDIA:
            return "DENY_NEW_MEDIA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StrategyOnFullSizeMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
