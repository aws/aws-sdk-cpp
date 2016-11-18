﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cognito-idp/model/DeviceRememberedStatusType.h>
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
      namespace DeviceRememberedStatusTypeMapper
      {

        static const int remembered_HASH = HashingUtils::HashString("remembered");
        static const int not_remembered_HASH = HashingUtils::HashString("not_remembered");


        DeviceRememberedStatusType GetDeviceRememberedStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == remembered_HASH)
          {
            return DeviceRememberedStatusType::remembered;
          }
          else if (hashCode == not_remembered_HASH)
          {
            return DeviceRememberedStatusType::not_remembered;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceRememberedStatusType>(hashCode);
          }

          return DeviceRememberedStatusType::NOT_SET;
        }

        Aws::String GetNameForDeviceRememberedStatusType(DeviceRememberedStatusType enumValue)
        {
          switch(enumValue)
          {
          case DeviceRememberedStatusType::remembered:
            return "remembered";
          case DeviceRememberedStatusType::not_remembered:
            return "not_remembered";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeviceRememberedStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
