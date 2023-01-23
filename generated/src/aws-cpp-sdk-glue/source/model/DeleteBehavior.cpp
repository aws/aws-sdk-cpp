/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteBehavior.h>
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
      namespace DeleteBehaviorMapper
      {

        static const int LOG_HASH = HashingUtils::HashString("LOG");
        static const int DELETE_FROM_DATABASE_HASH = HashingUtils::HashString("DELETE_FROM_DATABASE");
        static const int DEPRECATE_IN_DATABASE_HASH = HashingUtils::HashString("DEPRECATE_IN_DATABASE");


        DeleteBehavior GetDeleteBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOG_HASH)
          {
            return DeleteBehavior::LOG;
          }
          else if (hashCode == DELETE_FROM_DATABASE_HASH)
          {
            return DeleteBehavior::DELETE_FROM_DATABASE;
          }
          else if (hashCode == DEPRECATE_IN_DATABASE_HASH)
          {
            return DeleteBehavior::DEPRECATE_IN_DATABASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteBehavior>(hashCode);
          }

          return DeleteBehavior::NOT_SET;
        }

        Aws::String GetNameForDeleteBehavior(DeleteBehavior enumValue)
        {
          switch(enumValue)
          {
          case DeleteBehavior::LOG:
            return "LOG";
          case DeleteBehavior::DELETE_FROM_DATABASE:
            return "DELETE_FROM_DATABASE";
          case DeleteBehavior::DEPRECATE_IN_DATABASE:
            return "DEPRECATE_IN_DATABASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteBehaviorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
