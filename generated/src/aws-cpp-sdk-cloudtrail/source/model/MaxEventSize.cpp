/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/MaxEventSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace MaxEventSizeMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int Large_HASH = HashingUtils::HashString("Large");


        MaxEventSize GetMaxEventSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return MaxEventSize::Standard;
          }
          else if (hashCode == Large_HASH)
          {
            return MaxEventSize::Large;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaxEventSize>(hashCode);
          }

          return MaxEventSize::NOT_SET;
        }

        Aws::String GetNameForMaxEventSize(MaxEventSize enumValue)
        {
          switch(enumValue)
          {
          case MaxEventSize::NOT_SET:
            return {};
          case MaxEventSize::Standard:
            return "Standard";
          case MaxEventSize::Large:
            return "Large";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaxEventSizeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
