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

#include <aws/pinpoint/model/SegmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace SegmentTypeMapper
      {

        static const int DIMENSIONAL_HASH = HashingUtils::HashString("DIMENSIONAL");
        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");


        SegmentType GetSegmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSIONAL_HASH)
          {
            return SegmentType::DIMENSIONAL;
          }
          else if (hashCode == IMPORT_HASH)
          {
            return SegmentType::IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentType>(hashCode);
          }

          return SegmentType::NOT_SET;
        }

        Aws::String GetNameForSegmentType(SegmentType enumValue)
        {
          switch(enumValue)
          {
          case SegmentType::DIMENSIONAL:
            return "DIMENSIONAL";
          case SegmentType::IMPORT:
            return "IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
