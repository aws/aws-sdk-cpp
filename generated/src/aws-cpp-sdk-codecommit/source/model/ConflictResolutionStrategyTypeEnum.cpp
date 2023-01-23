/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
