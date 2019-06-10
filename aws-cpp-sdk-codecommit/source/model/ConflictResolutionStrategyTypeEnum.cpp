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

#include <aws/codecommit/model/ConflictResolutionStrategyTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ConflictResolutionStrategyTypeEnumMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ACCEPT_SOURCE_HASH = HashingUtils::HashString("ACCEPT_SOURCE");
        static const int ACCEPT_DESTINATION_HASH = HashingUtils::HashString("ACCEPT_DESTINATION");
        static const int AUTOMERGE_HASH = HashingUtils::HashString("AUTOMERGE");


        ConflictResolutionStrategyTypeEnum GetConflictResolutionStrategyTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ConflictResolutionStrategyTypeEnum::NONE;
          }
          else if (hashCode == ACCEPT_SOURCE_HASH)
          {
            return ConflictResolutionStrategyTypeEnum::ACCEPT_SOURCE;
          }
          else if (hashCode == ACCEPT_DESTINATION_HASH)
          {
            return ConflictResolutionStrategyTypeEnum::ACCEPT_DESTINATION;
          }
          else if (hashCode == AUTOMERGE_HASH)
          {
            return ConflictResolutionStrategyTypeEnum::AUTOMERGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictResolutionStrategyTypeEnum>(hashCode);
          }

          return ConflictResolutionStrategyTypeEnum::NOT_SET;
        }

        Aws::String GetNameForConflictResolutionStrategyTypeEnum(ConflictResolutionStrategyTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ConflictResolutionStrategyTypeEnum::NONE:
            return "NONE";
          case ConflictResolutionStrategyTypeEnum::ACCEPT_SOURCE:
            return "ACCEPT_SOURCE";
          case ConflictResolutionStrategyTypeEnum::ACCEPT_DESTINATION:
            return "ACCEPT_DESTINATION";
          case ConflictResolutionStrategyTypeEnum::AUTOMERGE:
            return "AUTOMERGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictResolutionStrategyTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
