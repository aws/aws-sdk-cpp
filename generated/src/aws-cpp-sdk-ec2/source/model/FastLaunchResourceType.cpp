/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FastLaunchResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FastLaunchResourceTypeMapper
      {

        static const int snapshot_HASH = HashingUtils::HashString("snapshot");


        FastLaunchResourceType GetFastLaunchResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == snapshot_HASH)
          {
            return FastLaunchResourceType::snapshot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FastLaunchResourceType>(hashCode);
          }

          return FastLaunchResourceType::NOT_SET;
        }

        Aws::String GetNameForFastLaunchResourceType(FastLaunchResourceType enumValue)
        {
          switch(enumValue)
          {
          case FastLaunchResourceType::NOT_SET:
            return {};
          case FastLaunchResourceType::snapshot:
            return "snapshot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FastLaunchResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
