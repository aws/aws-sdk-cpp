/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/RepositoryTriggerEventEnum.h>
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
      namespace RepositoryTriggerEventEnumMapper
      {

        static constexpr uint32_t all_HASH = ConstExprHashingUtils::HashString("all");
        static constexpr uint32_t updateReference_HASH = ConstExprHashingUtils::HashString("updateReference");
        static constexpr uint32_t createReference_HASH = ConstExprHashingUtils::HashString("createReference");
        static constexpr uint32_t deleteReference_HASH = ConstExprHashingUtils::HashString("deleteReference");


        RepositoryTriggerEventEnum GetRepositoryTriggerEventEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == all_HASH)
          {
            return RepositoryTriggerEventEnum::all;
          }
          else if (hashCode == updateReference_HASH)
          {
            return RepositoryTriggerEventEnum::updateReference;
          }
          else if (hashCode == createReference_HASH)
          {
            return RepositoryTriggerEventEnum::createReference;
          }
          else if (hashCode == deleteReference_HASH)
          {
            return RepositoryTriggerEventEnum::deleteReference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositoryTriggerEventEnum>(hashCode);
          }

          return RepositoryTriggerEventEnum::NOT_SET;
        }

        Aws::String GetNameForRepositoryTriggerEventEnum(RepositoryTriggerEventEnum enumValue)
        {
          switch(enumValue)
          {
          case RepositoryTriggerEventEnum::NOT_SET:
            return {};
          case RepositoryTriggerEventEnum::all:
            return "all";
          case RepositoryTriggerEventEnum::updateReference:
            return "updateReference";
          case RepositoryTriggerEventEnum::createReference:
            return "createReference";
          case RepositoryTriggerEventEnum::deleteReference:
            return "deleteReference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositoryTriggerEventEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
