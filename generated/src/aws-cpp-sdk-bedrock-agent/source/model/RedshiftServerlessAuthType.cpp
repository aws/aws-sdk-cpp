/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftServerlessAuthType.h>
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
      namespace RedshiftServerlessAuthTypeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int USERNAME_PASSWORD_HASH = HashingUtils::HashString("USERNAME_PASSWORD");


        RedshiftServerlessAuthType GetRedshiftServerlessAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return RedshiftServerlessAuthType::IAM;
          }
          else if (hashCode == USERNAME_PASSWORD_HASH)
          {
            return RedshiftServerlessAuthType::USERNAME_PASSWORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftServerlessAuthType>(hashCode);
          }

          return RedshiftServerlessAuthType::NOT_SET;
        }

        Aws::String GetNameForRedshiftServerlessAuthType(RedshiftServerlessAuthType enumValue)
        {
          switch(enumValue)
          {
          case RedshiftServerlessAuthType::NOT_SET:
            return {};
          case RedshiftServerlessAuthType::IAM:
            return "IAM";
          case RedshiftServerlessAuthType::USERNAME_PASSWORD:
            return "USERNAME_PASSWORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedshiftServerlessAuthTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
