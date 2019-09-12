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

#include <aws/medialive/model/H265ColorMetadata.h>
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
      namespace H265ColorMetadataMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int INSERT_HASH = HashingUtils::HashString("INSERT");


        H265ColorMetadata GetH265ColorMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return H265ColorMetadata::IGNORE;
          }
          else if (hashCode == INSERT_HASH)
          {
            return H265ColorMetadata::INSERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265ColorMetadata>(hashCode);
          }

          return H265ColorMetadata::NOT_SET;
        }

        Aws::String GetNameForH265ColorMetadata(H265ColorMetadata enumValue)
        {
          switch(enumValue)
          {
          case H265ColorMetadata::IGNORE:
            return "IGNORE";
          case H265ColorMetadata::INSERT:
            return "INSERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265ColorMetadataMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
