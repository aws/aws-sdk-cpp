/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ToxicContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace ToxicContentTypeMapper
      {

        static const int GRAPHIC_HASH = HashingUtils::HashString("GRAPHIC");
        static const int HARASSMENT_OR_ABUSE_HASH = HashingUtils::HashString("HARASSMENT_OR_ABUSE");
        static const int HATE_SPEECH_HASH = HashingUtils::HashString("HATE_SPEECH");
        static const int INSULT_HASH = HashingUtils::HashString("INSULT");
        static const int PROFANITY_HASH = HashingUtils::HashString("PROFANITY");
        static const int SEXUAL_HASH = HashingUtils::HashString("SEXUAL");
        static const int VIOLENCE_OR_THREAT_HASH = HashingUtils::HashString("VIOLENCE_OR_THREAT");


        ToxicContentType GetToxicContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRAPHIC_HASH)
          {
            return ToxicContentType::GRAPHIC;
          }
          else if (hashCode == HARASSMENT_OR_ABUSE_HASH)
          {
            return ToxicContentType::HARASSMENT_OR_ABUSE;
          }
          else if (hashCode == HATE_SPEECH_HASH)
          {
            return ToxicContentType::HATE_SPEECH;
          }
          else if (hashCode == INSULT_HASH)
          {
            return ToxicContentType::INSULT;
          }
          else if (hashCode == PROFANITY_HASH)
          {
            return ToxicContentType::PROFANITY;
          }
          else if (hashCode == SEXUAL_HASH)
          {
            return ToxicContentType::SEXUAL;
          }
          else if (hashCode == VIOLENCE_OR_THREAT_HASH)
          {
            return ToxicContentType::VIOLENCE_OR_THREAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToxicContentType>(hashCode);
          }

          return ToxicContentType::NOT_SET;
        }

        Aws::String GetNameForToxicContentType(ToxicContentType enumValue)
        {
          switch(enumValue)
          {
          case ToxicContentType::NOT_SET:
            return {};
          case ToxicContentType::GRAPHIC:
            return "GRAPHIC";
          case ToxicContentType::HARASSMENT_OR_ABUSE:
            return "HARASSMENT_OR_ABUSE";
          case ToxicContentType::HATE_SPEECH:
            return "HATE_SPEECH";
          case ToxicContentType::INSULT:
            return "INSULT";
          case ToxicContentType::PROFANITY:
            return "PROFANITY";
          case ToxicContentType::SEXUAL:
            return "SEXUAL";
          case ToxicContentType::VIOLENCE_OR_THREAT:
            return "VIOLENCE_OR_THREAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToxicContentTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
