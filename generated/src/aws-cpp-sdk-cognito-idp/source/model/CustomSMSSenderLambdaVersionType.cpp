/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CustomSMSSenderLambdaVersionType.h>
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
      namespace CustomSMSSenderLambdaVersionTypeMapper
      {

        static const int V1_0_HASH = HashingUtils::HashString("V1_0");


        CustomSMSSenderLambdaVersionType GetCustomSMSSenderLambdaVersionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_0_HASH)
          {
            return CustomSMSSenderLambdaVersionType::V1_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomSMSSenderLambdaVersionType>(hashCode);
          }

          return CustomSMSSenderLambdaVersionType::NOT_SET;
        }

        Aws::String GetNameForCustomSMSSenderLambdaVersionType(CustomSMSSenderLambdaVersionType enumValue)
        {
          switch(enumValue)
          {
          case CustomSMSSenderLambdaVersionType::V1_0:
            return "V1_0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomSMSSenderLambdaVersionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
