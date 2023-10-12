/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace UpdateBehaviorMapper
      {

        static constexpr uint32_t LOG_HASH = ConstExprHashingUtils::HashString("LOG");
        static constexpr uint32_t UPDATE_IN_DATABASE_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_DATABASE");


        UpdateBehavior GetUpdateBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOG_HASH)
          {
            return UpdateBehavior::LOG;
          }
          else if (hashCode == UPDATE_IN_DATABASE_HASH)
          {
            return UpdateBehavior::UPDATE_IN_DATABASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateBehavior>(hashCode);
          }

          return UpdateBehavior::NOT_SET;
        }

        Aws::String GetNameForUpdateBehavior(UpdateBehavior enumValue)
        {
          switch(enumValue)
          {
          case UpdateBehavior::NOT_SET:
            return {};
          case UpdateBehavior::LOG:
            return "LOG";
          case UpdateBehavior::UPDATE_IN_DATABASE:
            return "UPDATE_IN_DATABASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateBehaviorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
