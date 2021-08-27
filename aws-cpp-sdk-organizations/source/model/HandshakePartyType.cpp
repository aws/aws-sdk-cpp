/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/HandshakePartyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace HandshakePartyTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        HandshakePartyType GetHandshakePartyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return HandshakePartyType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return HandshakePartyType::ORGANIZATION;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return HandshakePartyType::EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandshakePartyType>(hashCode);
          }

          return HandshakePartyType::NOT_SET;
        }

        Aws::String GetNameForHandshakePartyType(HandshakePartyType enumValue)
        {
          switch(enumValue)
          {
          case HandshakePartyType::ACCOUNT:
            return "ACCOUNT";
          case HandshakePartyType::ORGANIZATION:
            return "ORGANIZATION";
          case HandshakePartyType::EMAIL:
            return "EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HandshakePartyTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
