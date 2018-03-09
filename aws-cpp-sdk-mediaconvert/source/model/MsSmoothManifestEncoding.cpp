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

#include <aws/mediaconvert/model/MsSmoothManifestEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace MsSmoothManifestEncodingMapper
      {

        static const int UTF8_HASH = HashingUtils::HashString("UTF8");
        static const int UTF16_HASH = HashingUtils::HashString("UTF16");


        MsSmoothManifestEncoding GetMsSmoothManifestEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTF8_HASH)
          {
            return MsSmoothManifestEncoding::UTF8;
          }
          else if (hashCode == UTF16_HASH)
          {
            return MsSmoothManifestEncoding::UTF16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MsSmoothManifestEncoding>(hashCode);
          }

          return MsSmoothManifestEncoding::NOT_SET;
        }

        Aws::String GetNameForMsSmoothManifestEncoding(MsSmoothManifestEncoding enumValue)
        {
          switch(enumValue)
          {
          case MsSmoothManifestEncoding::UTF8:
            return "UTF8";
          case MsSmoothManifestEncoding::UTF16:
            return "UTF16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MsSmoothManifestEncodingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
