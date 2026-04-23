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

#include <aws/medialive/model/AacRawFormat.h>
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
      namespace AacRawFormatMapper
      {

        static const int LATM_LOAS_HASH = HashingUtils::HashString("LATM_LOAS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AacRawFormat GetAacRawFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATM_LOAS_HASH)
          {
            return AacRawFormat::LATM_LOAS;
          }
          else if (hashCode == NONE_HASH)
          {
            return AacRawFormat::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacRawFormat>(hashCode);
          }

          return AacRawFormat::NOT_SET;
        }

        Aws::String GetNameForAacRawFormat(AacRawFormat enumValue)
        {
          switch(enumValue)
          {
          case AacRawFormat::LATM_LOAS:
            return "LATM_LOAS";
          case AacRawFormat::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacRawFormatMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
