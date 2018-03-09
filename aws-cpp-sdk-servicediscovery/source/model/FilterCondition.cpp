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

#include <aws/servicediscovery/model/FilterCondition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace FilterConditionMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        FilterCondition GetFilterConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return FilterCondition::EQ;
          }
          else if (hashCode == IN_HASH)
          {
            return FilterCondition::IN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return FilterCondition::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterCondition>(hashCode);
          }

          return FilterCondition::NOT_SET;
        }

        Aws::String GetNameForFilterCondition(FilterCondition enumValue)
        {
          switch(enumValue)
          {
          case FilterCondition::EQ:
            return "EQ";
          case FilterCondition::IN:
            return "IN";
          case FilterCondition::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FilterConditionMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
