/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/PreTokenGenerationLambdaVersionType.h>
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
      namespace PreTokenGenerationLambdaVersionTypeMapper
      {

        static const int V1_0_HASH = HashingUtils::HashString("V1_0");
        static const int V2_0_HASH = HashingUtils::HashString("V2_0");


        PreTokenGenerationLambdaVersionType GetPreTokenGenerationLambdaVersionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_0_HASH)
          {
            return PreTokenGenerationLambdaVersionType::V1_0;
          }
          else if (hashCode == V2_0_HASH)
          {
            return PreTokenGenerationLambdaVersionType::V2_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreTokenGenerationLambdaVersionType>(hashCode);
          }

          return PreTokenGenerationLambdaVersionType::NOT_SET;
        }

        Aws::String GetNameForPreTokenGenerationLambdaVersionType(PreTokenGenerationLambdaVersionType enumValue)
        {
          switch(enumValue)
          {
          case PreTokenGenerationLambdaVersionType::NOT_SET:
            return {};
          case PreTokenGenerationLambdaVersionType::V1_0:
            return "V1_0";
          case PreTokenGenerationLambdaVersionType::V2_0:
            return "V2_0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreTokenGenerationLambdaVersionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
