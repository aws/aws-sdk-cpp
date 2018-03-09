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

#include <aws/mediaconvert/model/Eac3SurroundExMode.h>
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
      namespace Eac3SurroundExModeMapper
      {

        static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        Eac3SurroundExMode GetEac3SurroundExModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3SurroundExMode::NOT_INDICATED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Eac3SurroundExMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Eac3SurroundExMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3SurroundExMode>(hashCode);
          }

          return Eac3SurroundExMode::NOT_SET;
        }

        Aws::String GetNameForEac3SurroundExMode(Eac3SurroundExMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3SurroundExMode::NOT_INDICATED:
            return "NOT_INDICATED";
          case Eac3SurroundExMode::ENABLED:
            return "ENABLED";
          case Eac3SurroundExMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Eac3SurroundExModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
