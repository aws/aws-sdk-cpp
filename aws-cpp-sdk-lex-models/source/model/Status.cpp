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
#include <aws/lex-models/model/Status.h>
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
      namespace StatusMapper
      {

        static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int NOT_BUILT_HASH = HashingUtils::HashString("NOT_BUILT");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILDING_HASH)
          {
            return Status::BUILDING;
          }
          else if (hashCode == READY_HASH)
          {
            return Status::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return Status::FAILED;
          }
          else if (hashCode == NOT_BUILT_HASH)
          {
            return Status::NOT_BUILT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::BUILDING:
            return "BUILDING";
          case Status::READY:
            return "READY";
          case Status::FAILED:
            return "FAILED";
          case Status::NOT_BUILT:
            return "NOT_BUILT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
