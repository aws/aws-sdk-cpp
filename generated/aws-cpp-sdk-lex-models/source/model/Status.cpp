/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int READY_BASIC_TESTING_HASH = HashingUtils::HashString("READY_BASIC_TESTING");
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
          else if (hashCode == READY_BASIC_TESTING_HASH)
          {
            return Status::READY_BASIC_TESTING;
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
          case Status::READY_BASIC_TESTING:
            return "READY_BASIC_TESTING";
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

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
