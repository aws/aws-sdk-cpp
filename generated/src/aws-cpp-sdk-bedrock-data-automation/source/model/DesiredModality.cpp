/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DesiredModality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace DesiredModalityMapper
      {

        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");


        DesiredModality GetDesiredModalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMAGE_HASH)
          {
            return DesiredModality::IMAGE;
          }
          else if (hashCode == DOCUMENT_HASH)
          {
            return DesiredModality::DOCUMENT;
          }
          else if (hashCode == AUDIO_HASH)
          {
            return DesiredModality::AUDIO;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return DesiredModality::VIDEO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesiredModality>(hashCode);
          }

          return DesiredModality::NOT_SET;
        }

        Aws::String GetNameForDesiredModality(DesiredModality enumValue)
        {
          switch(enumValue)
          {
          case DesiredModality::NOT_SET:
            return {};
          case DesiredModality::IMAGE:
            return "IMAGE";
          case DesiredModality::DOCUMENT:
            return "DOCUMENT";
          case DesiredModality::AUDIO:
            return "AUDIO";
          case DesiredModality::VIDEO:
            return "VIDEO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DesiredModalityMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
