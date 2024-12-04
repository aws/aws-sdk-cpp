/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftProvisionedAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace RedshiftProvisionedAuthTypeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int USERNAME_PASSWORD_HASH = HashingUtils::HashString("USERNAME_PASSWORD");
        static const int USERNAME_HASH = HashingUtils::HashString("USERNAME");


        RedshiftProvisionedAuthType GetRedshiftProvisionedAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return RedshiftProvisionedAuthType::IAM;
          }
          else if (hashCode == USERNAME_PASSWORD_HASH)
          {
            return RedshiftProvisionedAuthType::USERNAME_PASSWORD;
          }
          else if (hashCode == USERNAME_HASH)
          {
            return RedshiftProvisionedAuthType::USERNAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftProvisionedAuthType>(hashCode);
          }

          return RedshiftProvisionedAuthType::NOT_SET;
        }

        Aws::String GetNameForRedshiftProvisionedAuthType(RedshiftProvisionedAuthType enumValue)
        {
          switch(enumValue)
          {
          case RedshiftProvisionedAuthType::NOT_SET:
            return {};
          case RedshiftProvisionedAuthType::IAM:
            return "IAM";
          case RedshiftProvisionedAuthType::USERNAME_PASSWORD:
            return "USERNAME_PASSWORD";
          case RedshiftProvisionedAuthType::USERNAME:
            return "USERNAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedshiftProvisionedAuthTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
