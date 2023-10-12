/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MachineLearning
  {
    namespace Model
    {
      namespace EntityStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t INPROGRESS_HASH = ConstExprHashingUtils::HashString("INPROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        EntityStatus GetEntityStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return EntityStatus::PENDING;
          }
          else if (hashCode == INPROGRESS_HASH)
          {
            return EntityStatus::INPROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EntityStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return EntityStatus::COMPLETED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EntityStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityStatus>(hashCode);
          }

          return EntityStatus::NOT_SET;
        }

        Aws::String GetNameForEntityStatus(EntityStatus enumValue)
        {
          switch(enumValue)
          {
          case EntityStatus::NOT_SET:
            return {};
          case EntityStatus::PENDING:
            return "PENDING";
          case EntityStatus::INPROGRESS:
            return "INPROGRESS";
          case EntityStatus::FAILED:
            return "FAILED";
          case EntityStatus::COMPLETED:
            return "COMPLETED";
          case EntityStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityStatusMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
