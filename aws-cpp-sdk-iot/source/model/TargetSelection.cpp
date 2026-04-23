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

#include <aws/iot/model/TargetSelection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace TargetSelectionMapper
      {

        static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");
        static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");


        TargetSelection GetTargetSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUOUS_HASH)
          {
            return TargetSelection::CONTINUOUS;
          }
          else if (hashCode == SNAPSHOT_HASH)
          {
            return TargetSelection::SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetSelection>(hashCode);
          }

          return TargetSelection::NOT_SET;
        }

        Aws::String GetNameForTargetSelection(TargetSelection enumValue)
        {
          switch(enumValue)
          {
          case TargetSelection::CONTINUOUS:
            return "CONTINUOUS";
          case TargetSelection::SNAPSHOT:
            return "SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetSelectionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
