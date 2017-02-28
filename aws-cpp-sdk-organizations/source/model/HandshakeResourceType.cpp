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
#include <aws/organizations/model/HandshakeResourceType.h>
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
      namespace HandshakeResourceTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int ORGANIZATION_FEATURE_SET_HASH = HashingUtils::HashString("ORGANIZATION_FEATURE_SET");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int MASTER_EMAIL_HASH = HashingUtils::HashString("MASTER_EMAIL");
        static const int MASTER_NAME_HASH = HashingUtils::HashString("MASTER_NAME");
        static const int NOTES_HASH = HashingUtils::HashString("NOTES");
        static const int PARENT_HANDSHAKE_HASH = HashingUtils::HashString("PARENT_HANDSHAKE");


        HandshakeResourceType GetHandshakeResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return HandshakeResourceType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return HandshakeResourceType::ORGANIZATION;
          }
          else if (hashCode == ORGANIZATION_FEATURE_SET_HASH)
          {
            return HandshakeResourceType::ORGANIZATION_FEATURE_SET;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return HandshakeResourceType::EMAIL;
          }
          else if (hashCode == MASTER_EMAIL_HASH)
          {
            return HandshakeResourceType::MASTER_EMAIL;
          }
          else if (hashCode == MASTER_NAME_HASH)
          {
            return HandshakeResourceType::MASTER_NAME;
          }
          else if (hashCode == NOTES_HASH)
          {
            return HandshakeResourceType::NOTES;
          }
          else if (hashCode == PARENT_HANDSHAKE_HASH)
          {
            return HandshakeResourceType::PARENT_HANDSHAKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandshakeResourceType>(hashCode);
          }

          return HandshakeResourceType::NOT_SET;
        }

        Aws::String GetNameForHandshakeResourceType(HandshakeResourceType enumValue)
        {
          switch(enumValue)
          {
          case HandshakeResourceType::ACCOUNT:
            return "ACCOUNT";
          case HandshakeResourceType::ORGANIZATION:
            return "ORGANIZATION";
          case HandshakeResourceType::ORGANIZATION_FEATURE_SET:
            return "ORGANIZATION_FEATURE_SET";
          case HandshakeResourceType::EMAIL:
            return "EMAIL";
          case HandshakeResourceType::MASTER_EMAIL:
            return "MASTER_EMAIL";
          case HandshakeResourceType::MASTER_NAME:
            return "MASTER_NAME";
          case HandshakeResourceType::NOTES:
            return "NOTES";
          case HandshakeResourceType::PARENT_HANDSHAKE:
            return "PARENT_HANDSHAKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HandshakeResourceTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
