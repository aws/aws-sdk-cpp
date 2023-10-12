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

        static constexpr uint32_t CHIME_HASH = ConstExprHashingUtils::HashString("CHIME");
        static constexpr uint32_t BLUEJEANS_HASH = ConstExprHashingUtils::HashString("BLUEJEANS");
        static constexpr uint32_t FUZE_HASH = ConstExprHashingUtils::HashString("FUZE");
        static constexpr uint32_t GOOGLE_HANGOUTS_HASH = ConstExprHashingUtils::HashString("GOOGLE_HANGOUTS");
        static constexpr uint32_t POLYCOM_HASH = ConstExprHashingUtils::HashString("POLYCOM");
        static constexpr uint32_t RINGCENTRAL_HASH = ConstExprHashingUtils::HashString("RINGCENTRAL");
        static constexpr uint32_t SKYPE_FOR_BUSINESS_HASH = ConstExprHashingUtils::HashString("SKYPE_FOR_BUSINESS");
        static constexpr uint32_t WEBEX_HASH = ConstExprHashingUtils::HashString("WEBEX");
        static constexpr uint32_t ZOOM_HASH = ConstExprHashingUtils::HashString("ZOOM");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        ConferenceProviderType GetConferenceProviderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConferenceProviderType::NOT_SET:
            return {};
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
