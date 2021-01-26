/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/IdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace IdentityTypeMapper
      {

        static const int EMAIL_ADDRESS_HASH = HashingUtils::HashString("EMAIL_ADDRESS");
        static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");
        static const int MANAGED_DOMAIN_HASH = HashingUtils::HashString("MANAGED_DOMAIN");


        IdentityType GetIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_ADDRESS_HASH)
          {
            return IdentityType::EMAIL_ADDRESS;
          }
          else if (hashCode == DOMAIN__HASH)
          {
            return IdentityType::DOMAIN_;
          }
          else if (hashCode == MANAGED_DOMAIN_HASH)
          {
            return IdentityType::MANAGED_DOMAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityType>(hashCode);
          }

          return IdentityType::NOT_SET;
        }

        Aws::String GetNameForIdentityType(IdentityType enumValue)
        {
          switch(enumValue)
          {
          case IdentityType::EMAIL_ADDRESS:
            return "EMAIL_ADDRESS";
          case IdentityType::DOMAIN_:
            return "DOMAIN";
          case IdentityType::MANAGED_DOMAIN:
            return "MANAGED_DOMAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
