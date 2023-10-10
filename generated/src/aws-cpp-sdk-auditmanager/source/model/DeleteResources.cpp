/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeleteResources.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace DeleteResourcesMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        DeleteResources GetDeleteResourcesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return DeleteResources::ALL;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return DeleteResources::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteResources>(hashCode);
          }

          return DeleteResources::NOT_SET;
        }

        Aws::String GetNameForDeleteResources(DeleteResources enumValue)
        {
          switch(enumValue)
          {
          case DeleteResources::NOT_SET:
            return {};
          case DeleteResources::ALL:
            return "ALL";
          case DeleteResources::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteResourcesMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
