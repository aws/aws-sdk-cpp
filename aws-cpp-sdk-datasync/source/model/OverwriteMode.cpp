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

#include <aws/datasync/model/OverwriteMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace OverwriteModeMapper
      {

        static const int ALWAYS_HASH = HashingUtils::HashString("ALWAYS");
        static const int NEVER_HASH = HashingUtils::HashString("NEVER");


        OverwriteMode GetOverwriteModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_HASH)
          {
            return OverwriteMode::ALWAYS;
          }
          else if (hashCode == NEVER_HASH)
          {
            return OverwriteMode::NEVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverwriteMode>(hashCode);
          }

          return OverwriteMode::NOT_SET;
        }

        Aws::String GetNameForOverwriteMode(OverwriteMode enumValue)
        {
          switch(enumValue)
          {
          case OverwriteMode::ALWAYS:
            return "ALWAYS";
          case OverwriteMode::NEVER:
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

      } // namespace OverwriteModeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
