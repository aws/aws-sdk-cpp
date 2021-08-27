/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ConferenceProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace ConferenceProviderTypeMapper
      {

        static const int CHIME_HASH = HashingUtils::HashString("CHIME");
        static const int BLUEJEANS_HASH = HashingUtils::HashString("BLUEJEANS");
        static const int FUZE_HASH = HashingUtils::HashString("FUZE");
        static const int GOOGLE_HANGOUTS_HASH = HashingUtils::HashString("GOOGLE_HANGOUTS");
        static const int POLYCOM_HASH = HashingUtils::HashString("POLYCOM");
        static const int RINGCENTRAL_HASH = HashingUtils::HashString("RINGCENTRAL");
        static const int SKYPE_FOR_BUSINESS_HASH = HashingUtils::HashString("SKYPE_FOR_BUSINESS");
        static const int WEBEX_HASH = HashingUtils::HashString("WEBEX");
        static const int ZOOM_HASH = HashingUtils::HashString("ZOOM");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ConferenceProviderType GetConferenceProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHIME_HASH)
          {
            return ConferenceProviderType::CHIME;
          }
          else if (hashCode == BLUEJEANS_HASH)
          {
            return ConferenceProviderType::BLUEJEANS;
          }
          else if (hashCode == FUZE_HASH)
          {
            return ConferenceProviderType::FUZE;
          }
          else if (hashCode == GOOGLE_HANGOUTS_HASH)
          {
            return ConferenceProviderType::GOOGLE_HANGOUTS;
          }
          else if (hashCode == POLYCOM_HASH)
          {
            return ConferenceProviderType::POLYCOM;
          }
          else if (hashCode == RINGCENTRAL_HASH)
          {
            return ConferenceProviderType::RINGCENTRAL;
          }
          else if (hashCode == SKYPE_FOR_BUSINESS_HASH)
          {
            return ConferenceProviderType::SKYPE_FOR_BUSINESS;
          }
          else if (hashCode == WEBEX_HASH)
          {
            return ConferenceProviderType::WEBEX;
          }
          else if (hashCode == ZOOM_HASH)
          {
            return ConferenceProviderType::ZOOM;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ConferenceProviderType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConferenceProviderType>(hashCode);
          }

          return ConferenceProviderType::NOT_SET;
        }

        Aws::String GetNameForConferenceProviderType(ConferenceProviderType enumValue)
        {
          switch(enumValue)
          {
          case ConferenceProviderType::CHIME:
            return "CHIME";
          case ConferenceProviderType::BLUEJEANS:
            return "BLUEJEANS";
          case ConferenceProviderType::FUZE:
            return "FUZE";
          case ConferenceProviderType::GOOGLE_HANGOUTS:
            return "GOOGLE_HANGOUTS";
          case ConferenceProviderType::POLYCOM:
            return "POLYCOM";
          case ConferenceProviderType::RINGCENTRAL:
            return "RINGCENTRAL";
          case ConferenceProviderType::SKYPE_FOR_BUSINESS:
            return "SKYPE_FOR_BUSINESS";
          case ConferenceProviderType::WEBEX:
            return "WEBEX";
          case ConferenceProviderType::ZOOM:
            return "ZOOM";
          case ConferenceProviderType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConferenceProviderTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
