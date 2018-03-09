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

#include <aws/waf-regional/model/WafOverrideActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace WafOverrideActionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");


        WafOverrideActionType GetWafOverrideActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return WafOverrideActionType::NONE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return WafOverrideActionType::COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WafOverrideActionType>(hashCode);
          }

          return WafOverrideActionType::NOT_SET;
        }

        Aws::String GetNameForWafOverrideActionType(WafOverrideActionType enumValue)
        {
          switch(enumValue)
          {
          case WafOverrideActionType::NONE:
            return "NONE";
          case WafOverrideActionType::COUNT:
            return "COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace WafOverrideActionTypeMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
