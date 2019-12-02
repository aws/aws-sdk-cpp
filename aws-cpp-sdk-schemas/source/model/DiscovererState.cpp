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

#include <aws/schemas/model/DiscovererState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Schemas
  {
    namespace Model
    {
      namespace DiscovererStateMapper
      {

        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        DiscovererState GetDiscovererStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTED_HASH)
          {
            return DiscovererState::STARTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DiscovererState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscovererState>(hashCode);
          }

          return DiscovererState::NOT_SET;
        }

        Aws::String GetNameForDiscovererState(DiscovererState enumValue)
        {
          switch(enumValue)
          {
          case DiscovererState::STARTED:
            return "STARTED";
          case DiscovererState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscovererStateMapper
    } // namespace Model
  } // namespace Schemas
} // namespace Aws
