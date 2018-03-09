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

#include <aws/medialive/model/Eac3SurroundMode.h>
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
      namespace Eac3SurroundModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");


        Eac3SurroundMode GetEac3SurroundModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Eac3SurroundMode::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Eac3SurroundMode::ENABLED;
          }
          else if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3SurroundMode::NOT_INDICATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3SurroundMode>(hashCode);
          }

          return Eac3SurroundMode::NOT_SET;
        }

        Aws::String GetNameForEac3SurroundMode(Eac3SurroundMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3SurroundMode::DISABLED:
            return "DISABLED";
          case Eac3SurroundMode::ENABLED:
            return "ENABLED";
          case Eac3SurroundMode::NOT_INDICATED:
            return "NOT_INDICATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Eac3SurroundModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
