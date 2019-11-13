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

#include <aws/sesv2/model/DimensionValueSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace DimensionValueSourceMapper
      {

        static const int MESSAGE_TAG_HASH = HashingUtils::HashString("MESSAGE_TAG");
        static const int EMAIL_HEADER_HASH = HashingUtils::HashString("EMAIL_HEADER");
        static const int LINK_TAG_HASH = HashingUtils::HashString("LINK_TAG");


        DimensionValueSource GetDimensionValueSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MESSAGE_TAG_HASH)
          {
            return DimensionValueSource::MESSAGE_TAG;
          }
          else if (hashCode == EMAIL_HEADER_HASH)
          {
            return DimensionValueSource::EMAIL_HEADER;
          }
          else if (hashCode == LINK_TAG_HASH)
          {
            return DimensionValueSource::LINK_TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionValueSource>(hashCode);
          }

          return DimensionValueSource::NOT_SET;
        }

        Aws::String GetNameForDimensionValueSource(DimensionValueSource enumValue)
        {
          switch(enumValue)
          {
          case DimensionValueSource::MESSAGE_TAG:
            return "MESSAGE_TAG";
          case DimensionValueSource::EMAIL_HEADER:
            return "EMAIL_HEADER";
          case DimensionValueSource::LINK_TAG:
            return "LINK_TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionValueSourceMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
