/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DeletionProtectionType.h>
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
      namespace DeletionProtectionTypeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        DeletionProtectionType GetDeletionProtectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DeletionProtectionType::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return DeletionProtectionType::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionProtectionType>(hashCode);
          }

          return DeletionProtectionType::NOT_SET;
        }

        Aws::String GetNameForDeletionProtectionType(DeletionProtectionType enumValue)
        {
          switch(enumValue)
          {
          case DeletionProtectionType::ACTIVE:
            return "ACTIVE";
          case DeletionProtectionType::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionProtectionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
