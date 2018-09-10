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

#include <aws/appstream/model/Action.h>
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
      namespace ActionMapper
      {

        static const int CLIPBOARD_COPY_FROM_LOCAL_DEVICE_HASH = HashingUtils::HashString("CLIPBOARD_COPY_FROM_LOCAL_DEVICE");
        static const int CLIPBOARD_COPY_TO_LOCAL_DEVICE_HASH = HashingUtils::HashString("CLIPBOARD_COPY_TO_LOCAL_DEVICE");
        static const int FILE_UPLOAD_HASH = HashingUtils::HashString("FILE_UPLOAD");
        static const int FILE_DOWNLOAD_HASH = HashingUtils::HashString("FILE_DOWNLOAD");
        static const int PRINTING_TO_LOCAL_DEVICE_HASH = HashingUtils::HashString("PRINTING_TO_LOCAL_DEVICE");


        Action GetActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLIPBOARD_COPY_FROM_LOCAL_DEVICE_HASH)
          {
            return Action::CLIPBOARD_COPY_FROM_LOCAL_DEVICE;
          }
          else if (hashCode == CLIPBOARD_COPY_TO_LOCAL_DEVICE_HASH)
          {
            return Action::CLIPBOARD_COPY_TO_LOCAL_DEVICE;
          }
          else if (hashCode == FILE_UPLOAD_HASH)
          {
            return Action::FILE_UPLOAD;
          }
          else if (hashCode == FILE_DOWNLOAD_HASH)
          {
            return Action::FILE_DOWNLOAD;
          }
          else if (hashCode == PRINTING_TO_LOCAL_DEVICE_HASH)
          {
            return Action::PRINTING_TO_LOCAL_DEVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Action>(hashCode);
          }

          return Action::NOT_SET;
        }

        Aws::String GetNameForAction(Action enumValue)
        {
          switch(enumValue)
          {
          case Action::CLIPBOARD_COPY_FROM_LOCAL_DEVICE:
            return "CLIPBOARD_COPY_FROM_LOCAL_DEVICE";
          case Action::CLIPBOARD_COPY_TO_LOCAL_DEVICE:
            return "CLIPBOARD_COPY_TO_LOCAL_DEVICE";
          case Action::FILE_UPLOAD:
            return "FILE_UPLOAD";
          case Action::FILE_DOWNLOAD:
            return "FILE_DOWNLOAD";
          case Action::PRINTING_TO_LOCAL_DEVICE:
            return "PRINTING_TO_LOCAL_DEVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ActionMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
