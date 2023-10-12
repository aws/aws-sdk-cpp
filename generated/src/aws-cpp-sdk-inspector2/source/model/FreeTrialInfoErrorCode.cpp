/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FreeTrialInfoErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace FreeTrialInfoErrorCodeMapper
      {

        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");


        FreeTrialInfoErrorCode GetFreeTrialInfoErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return FreeTrialInfoErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return FreeTrialInfoErrorCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FreeTrialInfoErrorCode>(hashCode);
          }

          return FreeTrialInfoErrorCode::NOT_SET;
        }

        Aws::String GetNameForFreeTrialInfoErrorCode(FreeTrialInfoErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FreeTrialInfoErrorCode::NOT_SET:
            return {};
          case FreeTrialInfoErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case FreeTrialInfoErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FreeTrialInfoErrorCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
