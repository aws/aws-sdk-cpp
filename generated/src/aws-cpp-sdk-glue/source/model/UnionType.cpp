/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UnionType.h>
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
      namespace UnionTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int DISTINCT_HASH = HashingUtils::HashString("DISTINCT");


        UnionType GetUnionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return UnionType::ALL;
          }
          else if (hashCode == DISTINCT_HASH)
          {
            return UnionType::DISTINCT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnionType>(hashCode);
          }

          return UnionType::NOT_SET;
        }

        Aws::String GetNameForUnionType(UnionType enumValue)
        {
          switch(enumValue)
          {
          case UnionType::NOT_SET:
            return {};
          case UnionType::ALL:
            return "ALL";
          case UnionType::DISTINCT:
            return "DISTINCT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
