/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/IdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace IdentityTypeMapper
      {

        static const int EmailAddress_HASH = HashingUtils::HashString("EmailAddress");
        static const int Domain_HASH = HashingUtils::HashString("Domain");


        IdentityType GetIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EmailAddress_HASH)
          {
            return IdentityType::EmailAddress;
          }
          else if (hashCode == Domain_HASH)
          {
            return IdentityType::Domain;
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
          case IdentityType::EmailAddress:
            return "EmailAddress";
          case IdentityType::Domain:
            return "Domain";
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
  } // namespace SES
} // namespace Aws
