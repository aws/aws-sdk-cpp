/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/PostContactSummaryFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectContactLens
  {
    namespace Model
    {
      namespace PostContactSummaryFailureCodeMapper
      {

        static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
        static const int INSUFFICIENT_CONVERSATION_CONTENT_HASH = HashingUtils::HashString("INSUFFICIENT_CONVERSATION_CONTENT");
        static const int FAILED_SAFETY_GUIDELINES_HASH = HashingUtils::HashString("FAILED_SAFETY_GUIDELINES");
        static const int INVALID_ANALYSIS_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_ANALYSIS_CONFIGURATION");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        PostContactSummaryFailureCode GetPostContactSummaryFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUOTA_EXCEEDED_HASH)
          {
            return PostContactSummaryFailureCode::QUOTA_EXCEEDED;
          }
          else if (hashCode == INSUFFICIENT_CONVERSATION_CONTENT_HASH)
          {
            return PostContactSummaryFailureCode::INSUFFICIENT_CONVERSATION_CONTENT;
          }
          else if (hashCode == FAILED_SAFETY_GUIDELINES_HASH)
          {
            return PostContactSummaryFailureCode::FAILED_SAFETY_GUIDELINES;
          }
          else if (hashCode == INVALID_ANALYSIS_CONFIGURATION_HASH)
          {
            return PostContactSummaryFailureCode::INVALID_ANALYSIS_CONFIGURATION;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return PostContactSummaryFailureCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostContactSummaryFailureCode>(hashCode);
          }

          return PostContactSummaryFailureCode::NOT_SET;
        }

        Aws::String GetNameForPostContactSummaryFailureCode(PostContactSummaryFailureCode enumValue)
        {
          switch(enumValue)
          {
          case PostContactSummaryFailureCode::NOT_SET:
            return {};
          case PostContactSummaryFailureCode::QUOTA_EXCEEDED:
            return "QUOTA_EXCEEDED";
          case PostContactSummaryFailureCode::INSUFFICIENT_CONVERSATION_CONTENT:
            return "INSUFFICIENT_CONVERSATION_CONTENT";
          case PostContactSummaryFailureCode::FAILED_SAFETY_GUIDELINES:
            return "FAILED_SAFETY_GUIDELINES";
          case PostContactSummaryFailureCode::INVALID_ANALYSIS_CONFIGURATION:
            return "INVALID_ANALYSIS_CONFIGURATION";
          case PostContactSummaryFailureCode::INTERNAL_ERROR:
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

      } // namespace PostContactSummaryFailureCodeMapper
    } // namespace Model
  } // namespace ConnectContactLens
} // namespace Aws
