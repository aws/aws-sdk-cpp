/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ResultCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameSparks
  {
    namespace Model
    {
      namespace ResultCodeMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t INVALID_ROLE_FAILURE_HASH = ConstExprHashingUtils::HashString("INVALID_ROLE_FAILURE");
        static constexpr uint32_t UNSPECIFIED_FAILURE_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED_FAILURE");


        ResultCode GetResultCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return ResultCode::SUCCESS;
          }
          else if (hashCode == INVALID_ROLE_FAILURE_HASH)
          {
            return ResultCode::INVALID_ROLE_FAILURE;
          }
          else if (hashCode == UNSPECIFIED_FAILURE_HASH)
          {
            return ResultCode::UNSPECIFIED_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResultCode>(hashCode);
          }

          return ResultCode::NOT_SET;
        }

        Aws::String GetNameForResultCode(ResultCode enumValue)
        {
          switch(enumValue)
          {
          case ResultCode::NOT_SET:
            return {};
          case ResultCode::SUCCESS:
            return "SUCCESS";
          case ResultCode::INVALID_ROLE_FAILURE:
            return "INVALID_ROLE_FAILURE";
          case ResultCode::UNSPECIFIED_FAILURE:
            return "UNSPECIFIED_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResultCodeMapper
    } // namespace Model
  } // namespace GameSparks
} // namespace Aws
