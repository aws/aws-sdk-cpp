/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/AcceptanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace AcceptanceTypeMapper
      {

        static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");


        AcceptanceType GetAcceptanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_HASH)
          {
            return AcceptanceType::ACCEPT;
          }
          else if (hashCode == REJECT_HASH)
          {
            return AcceptanceType::REJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptanceType>(hashCode);
          }

          return AcceptanceType::NOT_SET;
        }

        Aws::String GetNameForAcceptanceType(AcceptanceType enumValue)
        {
          switch(enumValue)
          {
          case AcceptanceType::ACCEPT:
            return "ACCEPT";
          case AcceptanceType::REJECT:
            return "REJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptanceTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
