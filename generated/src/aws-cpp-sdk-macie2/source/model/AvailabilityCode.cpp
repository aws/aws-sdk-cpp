/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AvailabilityCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace AvailabilityCodeMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        AvailabilityCode GetAvailabilityCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return AvailabilityCode::AVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return AvailabilityCode::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvailabilityCode>(hashCode);
          }

          return AvailabilityCode::NOT_SET;
        }

        Aws::String GetNameForAvailabilityCode(AvailabilityCode enumValue)
        {
          switch(enumValue)
          {
          case AvailabilityCode::NOT_SET:
            return {};
          case AvailabilityCode::AVAILABLE:
            return "AVAILABLE";
          case AvailabilityCode::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AvailabilityCodeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
