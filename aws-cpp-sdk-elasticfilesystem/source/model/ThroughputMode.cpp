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

#include <aws/elasticfilesystem/model/ThroughputMode.h>
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
      namespace ThroughputModeMapper
      {

        static const int bursting_HASH = HashingUtils::HashString("bursting");
        static const int provisioned_HASH = HashingUtils::HashString("provisioned");


        ThroughputMode GetThroughputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == bursting_HASH)
          {
            return ThroughputMode::bursting;
          }
          else if (hashCode == provisioned_HASH)
          {
            return ThroughputMode::provisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThroughputMode>(hashCode);
          }

          return ThroughputMode::NOT_SET;
        }

        Aws::String GetNameForThroughputMode(ThroughputMode enumValue)
        {
          switch(enumValue)
          {
          case ThroughputMode::bursting:
            return "bursting";
          case ThroughputMode::provisioned:
            return "provisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThroughputModeMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
