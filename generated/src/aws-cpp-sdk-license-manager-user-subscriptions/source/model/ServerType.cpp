/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ServerType.h>
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
      namespace ServerTypeMapper
      {

        static const int RDS_SAL_HASH = HashingUtils::HashString("RDS_SAL");


        ServerType GetServerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RDS_SAL_HASH)
          {
            return ServerType::RDS_SAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerType>(hashCode);
          }

          return ServerType::NOT_SET;
        }

        Aws::String GetNameForServerType(ServerType enumValue)
        {
          switch(enumValue)
          {
          case ServerType::NOT_SET:
            return {};
          case ServerType::RDS_SAL:
            return "RDS_SAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerTypeMapper
    } // namespace Model
  } // namespace LicenseManagerUserSubscriptions
} // namespace Aws
