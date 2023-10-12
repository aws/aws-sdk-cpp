/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t remembered_HASH = ConstExprHashingUtils::HashString("remembered");
        static constexpr uint32_t not_remembered_HASH = ConstExprHashingUtils::HashString("not_remembered");


        DeviceRememberedStatusType GetDeviceRememberedStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DeviceRememberedStatusType::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace DeviceRememberedStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
