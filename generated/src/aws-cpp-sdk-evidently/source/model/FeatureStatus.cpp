/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/FeatureStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace FeatureStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        FeatureStatus GetFeatureStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return FeatureStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FeatureStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureStatus>(hashCode);
          }

          return FeatureStatus::NOT_SET;
        }

        Aws::String GetNameForFeatureStatus(FeatureStatus enumValue)
        {
          switch(enumValue)
          {
          case FeatureStatus::NOT_SET:
            return {};
          case FeatureStatus::AVAILABLE:
            return "AVAILABLE";
          case FeatureStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureStatusMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
