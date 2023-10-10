/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PartyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace PartyTypeMapper
      {

        static const int INDIVIDUAL_HASH = HashingUtils::HashString("INDIVIDUAL");
        static const int BUSINESS_HASH = HashingUtils::HashString("BUSINESS");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        PartyType GetPartyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDIVIDUAL_HASH)
          {
            return PartyType::INDIVIDUAL;
          }
          else if (hashCode == BUSINESS_HASH)
          {
            return PartyType::BUSINESS;
          }
          else if (hashCode == OTHER_HASH)
          {
            return PartyType::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartyType>(hashCode);
          }

          return PartyType::NOT_SET;
        }

        Aws::String GetNameForPartyType(PartyType enumValue)
        {
          switch(enumValue)
          {
          case PartyType::NOT_SET:
            return {};
          case PartyType::INDIVIDUAL:
            return "INDIVIDUAL";
          case PartyType::BUSINESS:
            return "BUSINESS";
          case PartyType::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartyTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
