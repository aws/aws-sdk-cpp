/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace HandshakePartyTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
