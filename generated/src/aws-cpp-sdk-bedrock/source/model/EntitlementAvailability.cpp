/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EntitlementAvailability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace EntitlementAvailabilityMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");


        EntitlementAvailability GetEntitlementAvailabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return EntitlementAvailability::AVAILABLE;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return EntitlementAvailability::NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntitlementAvailability>(hashCode);
          }

          return EntitlementAvailability::NOT_SET;
        }

        Aws::String GetNameForEntitlementAvailability(EntitlementAvailability enumValue)
        {
          switch(enumValue)
          {
          case EntitlementAvailability::NOT_SET:
            return {};
          case EntitlementAvailability::AVAILABLE:
            return "AVAILABLE";
          case EntitlementAvailability::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntitlementAvailabilityMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
