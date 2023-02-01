/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/EnvironmentVariableType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace EnvironmentVariableTypeMapper
      {

        static const int PLAINTEXT_HASH = HashingUtils::HashString("PLAINTEXT");
        static const int PARAMETER_STORE_HASH = HashingUtils::HashString("PARAMETER_STORE");
        static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");


        EnvironmentVariableType GetEnvironmentVariableTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAINTEXT_HASH)
          {
            return EnvironmentVariableType::PLAINTEXT;
          }
          else if (hashCode == PARAMETER_STORE_HASH)
          {
            return EnvironmentVariableType::PARAMETER_STORE;
          }
          else if (hashCode == SECRETS_MANAGER_HASH)
          {
            return EnvironmentVariableType::SECRETS_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentVariableType>(hashCode);
          }

          return EnvironmentVariableType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentVariableType(EnvironmentVariableType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentVariableType::PLAINTEXT:
            return "PLAINTEXT";
          case EnvironmentVariableType::PARAMETER_STORE:
            return "PARAMETER_STORE";
          case EnvironmentVariableType::SECRETS_MANAGER:
            return "SECRETS_MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentVariableTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
