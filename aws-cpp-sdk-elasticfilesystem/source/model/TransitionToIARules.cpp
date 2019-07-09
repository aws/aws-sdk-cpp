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

#include <aws/elasticfilesystem/model/TransitionToIARules.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace TransitionToIARulesMapper
      {

        static const int AFTER_14_DAYS_HASH = HashingUtils::HashString("AFTER_14_DAYS");
        static const int AFTER_30_DAYS_HASH = HashingUtils::HashString("AFTER_30_DAYS");
        static const int AFTER_60_DAYS_HASH = HashingUtils::HashString("AFTER_60_DAYS");
        static const int AFTER_90_DAYS_HASH = HashingUtils::HashString("AFTER_90_DAYS");


        TransitionToIARules GetTransitionToIARulesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AFTER_14_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_14_DAYS;
          }
          else if (hashCode == AFTER_30_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_30_DAYS;
          }
          else if (hashCode == AFTER_60_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_60_DAYS;
          }
          else if (hashCode == AFTER_90_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_90_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitionToIARules>(hashCode);
          }

          return TransitionToIARules::NOT_SET;
        }

        Aws::String GetNameForTransitionToIARules(TransitionToIARules enumValue)
        {
          switch(enumValue)
          {
          case TransitionToIARules::AFTER_14_DAYS:
            return "AFTER_14_DAYS";
          case TransitionToIARules::AFTER_30_DAYS:
            return "AFTER_30_DAYS";
          case TransitionToIARules::AFTER_60_DAYS:
            return "AFTER_60_DAYS";
          case TransitionToIARules::AFTER_90_DAYS:
            return "AFTER_90_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitionToIARulesMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
