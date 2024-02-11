/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/LaunchType.h>
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
      namespace LaunchTypeMapper
      {

        static const int aws_evidently_splits_HASH = HashingUtils::HashString("aws.evidently.splits");


        LaunchType GetLaunchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_evidently_splits_HASH)
          {
            return LaunchType::aws_evidently_splits;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchType>(hashCode);
          }

          return LaunchType::NOT_SET;
        }

        Aws::String GetNameForLaunchType(LaunchType enumValue)
        {
          switch(enumValue)
          {
          case LaunchType::NOT_SET:
            return {};
          case LaunchType::aws_evidently_splits:
            return "aws.evidently.splits";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
