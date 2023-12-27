/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/InstanceRoleCredentialsProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace InstanceRoleCredentialsProviderMapper
      {

        static const int SHARED_CREDENTIAL_FILE_HASH = HashingUtils::HashString("SHARED_CREDENTIAL_FILE");


        InstanceRoleCredentialsProvider GetInstanceRoleCredentialsProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_CREDENTIAL_FILE_HASH)
          {
            return InstanceRoleCredentialsProvider::SHARED_CREDENTIAL_FILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceRoleCredentialsProvider>(hashCode);
          }

          return InstanceRoleCredentialsProvider::NOT_SET;
        }

        Aws::String GetNameForInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider enumValue)
        {
          switch(enumValue)
          {
          case InstanceRoleCredentialsProvider::NOT_SET:
            return {};
          case InstanceRoleCredentialsProvider::SHARED_CREDENTIAL_FILE:
            return "SHARED_CREDENTIAL_FILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceRoleCredentialsProviderMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
