/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StackAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace StackAttributeMapper
      {

        static constexpr uint32_t STORAGE_CONNECTORS_HASH = ConstExprHashingUtils::HashString("STORAGE_CONNECTORS");
        static constexpr uint32_t STORAGE_CONNECTOR_HOMEFOLDERS_HASH = ConstExprHashingUtils::HashString("STORAGE_CONNECTOR_HOMEFOLDERS");
        static constexpr uint32_t STORAGE_CONNECTOR_GOOGLE_DRIVE_HASH = ConstExprHashingUtils::HashString("STORAGE_CONNECTOR_GOOGLE_DRIVE");
        static constexpr uint32_t STORAGE_CONNECTOR_ONE_DRIVE_HASH = ConstExprHashingUtils::HashString("STORAGE_CONNECTOR_ONE_DRIVE");
        static constexpr uint32_t REDIRECT_URL_HASH = ConstExprHashingUtils::HashString("REDIRECT_URL");
        static constexpr uint32_t FEEDBACK_URL_HASH = ConstExprHashingUtils::HashString("FEEDBACK_URL");
        static constexpr uint32_t THEME_NAME_HASH = ConstExprHashingUtils::HashString("THEME_NAME");
        static constexpr uint32_t USER_SETTINGS_HASH = ConstExprHashingUtils::HashString("USER_SETTINGS");
        static constexpr uint32_t EMBED_HOST_DOMAINS_HASH = ConstExprHashingUtils::HashString("EMBED_HOST_DOMAINS");
        static constexpr uint32_t IAM_ROLE_ARN_HASH = ConstExprHashingUtils::HashString("IAM_ROLE_ARN");
        static constexpr uint32_t ACCESS_ENDPOINTS_HASH = ConstExprHashingUtils::HashString("ACCESS_ENDPOINTS");
        static constexpr uint32_t STREAMING_EXPERIENCE_SETTINGS_HASH = ConstExprHashingUtils::HashString("STREAMING_EXPERIENCE_SETTINGS");


        StackAttribute GetStackAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STORAGE_CONNECTORS_HASH)
          {
            return StackAttribute::STORAGE_CONNECTORS;
          }
          else if (hashCode == STORAGE_CONNECTOR_HOMEFOLDERS_HASH)
          {
            return StackAttribute::STORAGE_CONNECTOR_HOMEFOLDERS;
          }
          else if (hashCode == STORAGE_CONNECTOR_GOOGLE_DRIVE_HASH)
          {
            return StackAttribute::STORAGE_CONNECTOR_GOOGLE_DRIVE;
          }
          else if (hashCode == STORAGE_CONNECTOR_ONE_DRIVE_HASH)
          {
            return StackAttribute::STORAGE_CONNECTOR_ONE_DRIVE;
          }
          else if (hashCode == REDIRECT_URL_HASH)
          {
            return StackAttribute::REDIRECT_URL;
          }
          else if (hashCode == FEEDBACK_URL_HASH)
          {
            return StackAttribute::FEEDBACK_URL;
          }
          else if (hashCode == THEME_NAME_HASH)
          {
            return StackAttribute::THEME_NAME;
          }
          else if (hashCode == USER_SETTINGS_HASH)
          {
            return StackAttribute::USER_SETTINGS;
          }
          else if (hashCode == EMBED_HOST_DOMAINS_HASH)
          {
            return StackAttribute::EMBED_HOST_DOMAINS;
          }
          else if (hashCode == IAM_ROLE_ARN_HASH)
          {
            return StackAttribute::IAM_ROLE_ARN;
          }
          else if (hashCode == ACCESS_ENDPOINTS_HASH)
          {
            return StackAttribute::ACCESS_ENDPOINTS;
          }
          else if (hashCode == STREAMING_EXPERIENCE_SETTINGS_HASH)
          {
            return StackAttribute::STREAMING_EXPERIENCE_SETTINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackAttribute>(hashCode);
          }

          return StackAttribute::NOT_SET;
        }

        Aws::String GetNameForStackAttribute(StackAttribute enumValue)
        {
          switch(enumValue)
          {
          case StackAttribute::NOT_SET:
            return {};
          case StackAttribute::STORAGE_CONNECTORS:
            return "STORAGE_CONNECTORS";
          case StackAttribute::STORAGE_CONNECTOR_HOMEFOLDERS:
            return "STORAGE_CONNECTOR_HOMEFOLDERS";
          case StackAttribute::STORAGE_CONNECTOR_GOOGLE_DRIVE:
            return "STORAGE_CONNECTOR_GOOGLE_DRIVE";
          case StackAttribute::STORAGE_CONNECTOR_ONE_DRIVE:
            return "STORAGE_CONNECTOR_ONE_DRIVE";
          case StackAttribute::REDIRECT_URL:
            return "REDIRECT_URL";
          case StackAttribute::FEEDBACK_URL:
            return "FEEDBACK_URL";
          case StackAttribute::THEME_NAME:
            return "THEME_NAME";
          case StackAttribute::USER_SETTINGS:
            return "USER_SETTINGS";
          case StackAttribute::EMBED_HOST_DOMAINS:
            return "EMBED_HOST_DOMAINS";
          case StackAttribute::IAM_ROLE_ARN:
            return "IAM_ROLE_ARN";
          case StackAttribute::ACCESS_ENDPOINTS:
            return "ACCESS_ENDPOINTS";
          case StackAttribute::STREAMING_EXPERIENCE_SETTINGS:
            return "STREAMING_EXPERIENCE_SETTINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
