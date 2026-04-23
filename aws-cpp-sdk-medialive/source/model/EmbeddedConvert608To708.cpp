/*
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

#include <aws/medialive/model/EmbeddedConvert608To708.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace EmbeddedConvert608To708Mapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int UPCONVERT_HASH = HashingUtils::HashString("UPCONVERT");


        EmbeddedConvert608To708 GetEmbeddedConvert608To708ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return EmbeddedConvert608To708::DISABLED;
          }
          else if (hashCode == UPCONVERT_HASH)
          {
            return EmbeddedConvert608To708::UPCONVERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmbeddedConvert608To708>(hashCode);
          }

          return EmbeddedConvert608To708::NOT_SET;
        }

        Aws::String GetNameForEmbeddedConvert608To708(EmbeddedConvert608To708 enumValue)
        {
          switch(enumValue)
          {
          case EmbeddedConvert608To708::DISABLED:
            return "DISABLED";
          case EmbeddedConvert608To708::UPCONVERT:
            return "UPCONVERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmbeddedConvert608To708Mapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
