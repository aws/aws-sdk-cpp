/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManagerUserSubscriptions
  {
    namespace Model
    {
      namespace ActiveDirectoryTypeMapper
      {

        static const int SELF_MANAGED_HASH = HashingUtils::HashString("SELF_MANAGED");
        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");


        ActiveDirectoryType GetActiveDirectoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_MANAGED_HASH)
          {
            return ActiveDirectoryType::SELF_MANAGED;
          }
          else if (hashCode == AWS_MANAGED_HASH)
          {
            return ActiveDirectoryType::AWS_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActiveDirectoryType>(hashCode);
          }

          return ActiveDirectoryType::NOT_SET;
        }

        Aws::String GetNameForActiveDirectoryType(ActiveDirectoryType enumValue)
        {
          switch(enumValue)
          {
          case ActiveDirectoryType::NOT_SET:
            return {};
          case ActiveDirectoryType::SELF_MANAGED:
            return "SELF_MANAGED";
          case ActiveDirectoryType::AWS_MANAGED:
            return "AWS_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActiveDirectoryTypeMapper
    } // namespace Model
  } // namespace LicenseManagerUserSubscriptions
} // namespace Aws
