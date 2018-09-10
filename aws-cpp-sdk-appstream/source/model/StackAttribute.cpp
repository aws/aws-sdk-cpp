﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StackAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
