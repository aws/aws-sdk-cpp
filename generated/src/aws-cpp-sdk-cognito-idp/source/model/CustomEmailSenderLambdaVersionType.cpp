﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CustomEmailSenderLambdaVersionType.h>
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
      namespace CustomEmailSenderLambdaVersionTypeMapper
      {

        static const int V1_0_HASH = HashingUtils::HashString("V1_0");


        CustomEmailSenderLambdaVersionType GetCustomEmailSenderLambdaVersionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_0_HASH)
          {
            return CustomEmailSenderLambdaVersionType::V1_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomEmailSenderLambdaVersionType>(hashCode);
          }

          return CustomEmailSenderLambdaVersionType::NOT_SET;
        }

        Aws::String GetNameForCustomEmailSenderLambdaVersionType(CustomEmailSenderLambdaVersionType enumValue)
        {
          switch(enumValue)
          {
          case CustomEmailSenderLambdaVersionType::NOT_SET:
            return {};
          case CustomEmailSenderLambdaVersionType::V1_0:
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

      } // namespace CustomEmailSenderLambdaVersionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
