/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FindingDetailsErrorCode.h>
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
      namespace FindingDetailsErrorCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t FINDING_DETAILS_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("FINDING_DETAILS_NOT_FOUND");
        static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("INVALID_INPUT");


        FindingDetailsErrorCode GetFindingDetailsErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return FindingDetailsErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return FindingDetailsErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == FINDING_DETAILS_NOT_FOUND_HASH)
          {
            return FindingDetailsErrorCode::FINDING_DETAILS_NOT_FOUND;
          }
          else if (hashCode == INVALID_INPUT_HASH)
          {
            return FindingDetailsErrorCode::INVALID_INPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingDetailsErrorCode>(hashCode);
          }

          return FindingDetailsErrorCode::NOT_SET;
        }

        Aws::String GetNameForFindingDetailsErrorCode(FindingDetailsErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FindingDetailsErrorCode::NOT_SET:
            return {};
          case FindingDetailsErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case FindingDetailsErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case FindingDetailsErrorCode::FINDING_DETAILS_NOT_FOUND:
            return "FINDING_DETAILS_NOT_FOUND";
          case FindingDetailsErrorCode::INVALID_INPUT:
            return "INVALID_INPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingDetailsErrorCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
