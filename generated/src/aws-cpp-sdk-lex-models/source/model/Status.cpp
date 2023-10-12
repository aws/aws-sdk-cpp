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

        static constexpr uint32_t BUILDING_HASH = ConstExprHashingUtils::HashString("BUILDING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t READY_BASIC_TESTING_HASH = ConstExprHashingUtils::HashString("READY_BASIC_TESTING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t NOT_BUILT_HASH = ConstExprHashingUtils::HashString("NOT_BUILT");


        Status GetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Status::NOT_SET:
            return {};
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
