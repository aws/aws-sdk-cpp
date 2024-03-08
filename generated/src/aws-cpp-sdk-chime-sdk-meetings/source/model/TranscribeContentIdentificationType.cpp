/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/TranscribeContentIdentificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace TranscribeContentIdentificationTypeMapper
      {

        static const int PII_HASH = HashingUtils::HashString("PII");


        TranscribeContentIdentificationType GetTranscribeContentIdentificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PII_HASH)
          {
            return TranscribeContentIdentificationType::PII;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeContentIdentificationType>(hashCode);
          }

          return TranscribeContentIdentificationType::NOT_SET;
        }

        Aws::String GetNameForTranscribeContentIdentificationType(TranscribeContentIdentificationType enumValue)
        {
          switch(enumValue)
          {
          case TranscribeContentIdentificationType::NOT_SET:
            return {};
          case TranscribeContentIdentificationType::PII:
            return "PII";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeContentIdentificationTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
