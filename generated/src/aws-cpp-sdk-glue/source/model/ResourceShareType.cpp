/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResourceShareType.h>
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
      namespace ResourceShareTypeMapper
      {

        static const int FOREIGN_HASH = HashingUtils::HashString("FOREIGN");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ResourceShareType GetResourceShareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOREIGN_HASH)
          {
            return ResourceShareType::FOREIGN;
          }
          else if (hashCode == ALL_HASH)
          {
            return ResourceShareType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareType>(hashCode);
          }

          return ResourceShareType::NOT_SET;
        }

        Aws::String GetNameForResourceShareType(ResourceShareType enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareType::FOREIGN:
            return "FOREIGN";
          case ResourceShareType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceShareTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
