/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessPreviewStatusReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AccessPreviewStatusReasonCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INVALID_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_CONFIGURATION");


        AccessPreviewStatusReasonCode GetAccessPreviewStatusReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return AccessPreviewStatusReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_CONFIGURATION_HASH)
          {
            return AccessPreviewStatusReasonCode::INVALID_CONFIGURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessPreviewStatusReasonCode>(hashCode);
          }

          return AccessPreviewStatusReasonCode::NOT_SET;
        }

        Aws::String GetNameForAccessPreviewStatusReasonCode(AccessPreviewStatusReasonCode enumValue)
        {
          switch(enumValue)
          {
          case AccessPreviewStatusReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case AccessPreviewStatusReasonCode::INVALID_CONFIGURATION:
            return "INVALID_CONFIGURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessPreviewStatusReasonCodeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
