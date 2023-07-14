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

        static const int STORAGE_CONNECTORS_HASH = HashingUtils::HashString("STORAGE_CONNECTORS");
        static const int STORAGE_CONNECTOR_HOMEFOLDERS_HASH = HashingUtils::HashString("STORAGE_CONNECTOR_HOMEFOLDERS");
        static const int STORAGE_CONNECTOR_GOOGLE_DRIVE_HASH = HashingUtils::HashString("STORAGE_CONNECTOR_GOOGLE_DRIVE");
        static const int STORAGE_CONNECTOR_ONE_DRIVE_HASH = HashingUtils::HashString("STORAGE_CONNECTOR_ONE_DRIVE");
        static const int REDIRECT_URL_HASH = HashingUtils::HashString("REDIRECT_URL");
        static const int FEEDBACK_URL_HASH = HashingUtils::HashString("FEEDBACK_URL");
        static const int THEME_NAME_HASH = HashingUtils::HashString("THEME_NAME");
        static const int USER_SETTINGS_HASH = HashingUtils::HashString("USER_SETTINGS");
        static const int EMBED_HOST_DOMAINS_HASH = HashingUtils::HashString("EMBED_HOST_DOMAINS");
        static const int IAM_ROLE_ARN_HASH = HashingUtils::HashString("IAM_ROLE_ARN");
        static const int ACCESS_ENDPOINTS_HASH = HashingUtils::HashString("ACCESS_ENDPOINTS");


        StackAttribute GetStackAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
