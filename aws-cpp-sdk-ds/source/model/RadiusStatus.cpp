/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/RadiusStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace RadiusStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        RadiusStatus GetRadiusStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return RadiusStatus::Creating;
          }
          else if (hashCode == Completed_HASH)
          {
            return RadiusStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return RadiusStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RadiusStatus>(hashCode);
          }

          return RadiusStatus::NOT_SET;
        }

        Aws::String GetNameForRadiusStatus(RadiusStatus enumValue)
        {
          switch(enumValue)
          {
          case RadiusStatus::Creating:
            return "Creating";
          case RadiusStatus::Completed:
            return "Completed";
          case RadiusStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RadiusStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
