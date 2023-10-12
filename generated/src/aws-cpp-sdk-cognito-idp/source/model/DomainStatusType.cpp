/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DomainStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace DomainStatusTypeMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        DomainStatusType GetDomainStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DomainStatusType::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DomainStatusType::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DomainStatusType::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DomainStatusType::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DomainStatusType::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatusType>(hashCode);
          }

          return DomainStatusType::NOT_SET;
        }

        Aws::String GetNameForDomainStatusType(DomainStatusType enumValue)
        {
          switch(enumValue)
          {
          case DomainStatusType::NOT_SET:
            return {};
          case DomainStatusType::CREATING:
            return "CREATING";
          case DomainStatusType::DELETING:
            return "DELETING";
          case DomainStatusType::UPDATING:
            return "UPDATING";
          case DomainStatusType::ACTIVE:
            return "ACTIVE";
          case DomainStatusType::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
