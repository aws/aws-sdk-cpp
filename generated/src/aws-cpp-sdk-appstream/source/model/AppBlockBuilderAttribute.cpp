/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilderAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace AppBlockBuilderAttributeMapper
      {

        static const int IAM_ROLE_ARN_HASH = HashingUtils::HashString("IAM_ROLE_ARN");
        static const int ACCESS_ENDPOINTS_HASH = HashingUtils::HashString("ACCESS_ENDPOINTS");
        static const int VPC_CONFIGURATION_SECURITY_GROUP_IDS_HASH = HashingUtils::HashString("VPC_CONFIGURATION_SECURITY_GROUP_IDS");


        AppBlockBuilderAttribute GetAppBlockBuilderAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_ROLE_ARN_HASH)
          {
            return AppBlockBuilderAttribute::IAM_ROLE_ARN;
          }
          else if (hashCode == ACCESS_ENDPOINTS_HASH)
          {
            return AppBlockBuilderAttribute::ACCESS_ENDPOINTS;
          }
          else if (hashCode == VPC_CONFIGURATION_SECURITY_GROUP_IDS_HASH)
          {
            return AppBlockBuilderAttribute::VPC_CONFIGURATION_SECURITY_GROUP_IDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppBlockBuilderAttribute>(hashCode);
          }

          return AppBlockBuilderAttribute::NOT_SET;
        }

        Aws::String GetNameForAppBlockBuilderAttribute(AppBlockBuilderAttribute enumValue)
        {
          switch(enumValue)
          {
          case AppBlockBuilderAttribute::NOT_SET:
            return {};
          case AppBlockBuilderAttribute::IAM_ROLE_ARN:
            return "IAM_ROLE_ARN";
          case AppBlockBuilderAttribute::ACCESS_ENDPOINTS:
            return "ACCESS_ENDPOINTS";
          case AppBlockBuilderAttribute::VPC_CONFIGURATION_SECURITY_GROUP_IDS:
            return "VPC_CONFIGURATION_SECURITY_GROUP_IDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppBlockBuilderAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
