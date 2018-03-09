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

#include <aws/ce/model/Context.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace ContextMapper
      {

        static const int COST_AND_USAGE_HASH = HashingUtils::HashString("COST_AND_USAGE");
        static const int RESERVATIONS_HASH = HashingUtils::HashString("RESERVATIONS");


        Context GetContextForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COST_AND_USAGE_HASH)
          {
            return Context::COST_AND_USAGE;
          }
          else if (hashCode == RESERVATIONS_HASH)
          {
            return Context::RESERVATIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Context>(hashCode);
          }

          return Context::NOT_SET;
        }

        Aws::String GetNameForContext(Context enumValue)
        {
          switch(enumValue)
          {
          case Context::COST_AND_USAGE:
            return "COST_AND_USAGE";
          case Context::RESERVATIONS:
            return "RESERVATIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ContextMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
