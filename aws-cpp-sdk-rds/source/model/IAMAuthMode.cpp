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

#include <aws/rds/model/IAMAuthMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace IAMAuthModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");


        IAMAuthMode GetIAMAuthModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return IAMAuthMode::DISABLED;
          }
          else if (hashCode == REQUIRED_HASH)
          {
            return IAMAuthMode::REQUIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IAMAuthMode>(hashCode);
          }

          return IAMAuthMode::NOT_SET;
        }

        Aws::String GetNameForIAMAuthMode(IAMAuthMode enumValue)
        {
          switch(enumValue)
          {
          case IAMAuthMode::DISABLED:
            return "DISABLED";
          case IAMAuthMode::REQUIRED:
            return "REQUIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IAMAuthModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
