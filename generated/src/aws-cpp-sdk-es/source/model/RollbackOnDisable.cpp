/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/RollbackOnDisable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace RollbackOnDisableMapper
      {

        static constexpr uint32_t NO_ROLLBACK_HASH = ConstExprHashingUtils::HashString("NO_ROLLBACK");
        static constexpr uint32_t DEFAULT_ROLLBACK_HASH = ConstExprHashingUtils::HashString("DEFAULT_ROLLBACK");


        RollbackOnDisable GetRollbackOnDisableForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_ROLLBACK_HASH)
          {
            return RollbackOnDisable::NO_ROLLBACK;
          }
          else if (hashCode == DEFAULT_ROLLBACK_HASH)
          {
            return RollbackOnDisable::DEFAULT_ROLLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RollbackOnDisable>(hashCode);
          }

          return RollbackOnDisable::NOT_SET;
        }

        Aws::String GetNameForRollbackOnDisable(RollbackOnDisable enumValue)
        {
          switch(enumValue)
          {
          case RollbackOnDisable::NOT_SET:
            return {};
          case RollbackOnDisable::NO_ROLLBACK:
            return "NO_ROLLBACK";
          case RollbackOnDisable::DEFAULT_ROLLBACK:
            return "DEFAULT_ROLLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RollbackOnDisableMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
