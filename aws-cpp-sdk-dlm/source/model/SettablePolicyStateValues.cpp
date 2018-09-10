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

#include <aws/dlm/model/SettablePolicyStateValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace SettablePolicyStateValuesMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        SettablePolicyStateValues GetSettablePolicyStateValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return SettablePolicyStateValues::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return SettablePolicyStateValues::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettablePolicyStateValues>(hashCode);
          }

          return SettablePolicyStateValues::NOT_SET;
        }

        Aws::String GetNameForSettablePolicyStateValues(SettablePolicyStateValues enumValue)
        {
          switch(enumValue)
          {
          case SettablePolicyStateValues::ENABLED:
            return "ENABLED";
          case SettablePolicyStateValues::DISABLED:
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

      } // namespace SettablePolicyStateValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
