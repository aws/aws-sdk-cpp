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

#include <aws/lex-models/model/MergeStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace MergeStrategyMapper
      {

        static const int OVERWRITE_LATEST_HASH = HashingUtils::HashString("OVERWRITE_LATEST");
        static const int FAIL_ON_CONFLICT_HASH = HashingUtils::HashString("FAIL_ON_CONFLICT");


        MergeStrategy GetMergeStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERWRITE_LATEST_HASH)
          {
            return MergeStrategy::OVERWRITE_LATEST;
          }
          else if (hashCode == FAIL_ON_CONFLICT_HASH)
          {
            return MergeStrategy::FAIL_ON_CONFLICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MergeStrategy>(hashCode);
          }

          return MergeStrategy::NOT_SET;
        }

        Aws::String GetNameForMergeStrategy(MergeStrategy enumValue)
        {
          switch(enumValue)
          {
          case MergeStrategy::OVERWRITE_LATEST:
            return "OVERWRITE_LATEST";
          case MergeStrategy::FAIL_ON_CONFLICT:
            return "FAIL_ON_CONFLICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MergeStrategyMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
