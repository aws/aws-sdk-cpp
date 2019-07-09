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

#include <aws/kinesis-video-archived-media/model/DASHDisplayFragmentNumber.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideoArchivedMedia
  {
    namespace Model
    {
      namespace DASHDisplayFragmentNumberMapper
      {

        static const int ALWAYS_HASH = HashingUtils::HashString("ALWAYS");
        static const int NEVER_HASH = HashingUtils::HashString("NEVER");


        DASHDisplayFragmentNumber GetDASHDisplayFragmentNumberForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_HASH)
          {
            return DASHDisplayFragmentNumber::ALWAYS;
          }
          else if (hashCode == NEVER_HASH)
          {
            return DASHDisplayFragmentNumber::NEVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DASHDisplayFragmentNumber>(hashCode);
          }

          return DASHDisplayFragmentNumber::NOT_SET;
        }

        Aws::String GetNameForDASHDisplayFragmentNumber(DASHDisplayFragmentNumber enumValue)
        {
          switch(enumValue)
          {
          case DASHDisplayFragmentNumber::ALWAYS:
            return "ALWAYS";
          case DASHDisplayFragmentNumber::NEVER:
            return "NEVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DASHDisplayFragmentNumberMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
