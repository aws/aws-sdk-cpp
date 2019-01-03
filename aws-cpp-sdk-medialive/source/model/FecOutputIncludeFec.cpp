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

#include <aws/medialive/model/FecOutputIncludeFec.h>
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
      namespace FecOutputIncludeFecMapper
      {

        static const int COLUMN_HASH = HashingUtils::HashString("COLUMN");
        static const int COLUMN_AND_ROW_HASH = HashingUtils::HashString("COLUMN_AND_ROW");


        FecOutputIncludeFec GetFecOutputIncludeFecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMN_HASH)
          {
            return FecOutputIncludeFec::COLUMN;
          }
          else if (hashCode == COLUMN_AND_ROW_HASH)
          {
            return FecOutputIncludeFec::COLUMN_AND_ROW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FecOutputIncludeFec>(hashCode);
          }

          return FecOutputIncludeFec::NOT_SET;
        }

        Aws::String GetNameForFecOutputIncludeFec(FecOutputIncludeFec enumValue)
        {
          switch(enumValue)
          {
          case FecOutputIncludeFec::COLUMN:
            return "COLUMN";
          case FecOutputIncludeFec::COLUMN_AND_ROW:
            return "COLUMN_AND_ROW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FecOutputIncludeFecMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
