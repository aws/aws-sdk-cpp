/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Logical.h>
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
      namespace LogicalMapper
      {

        static constexpr uint32_t AND_HASH = ConstExprHashingUtils::HashString("AND");
        static constexpr uint32_t ANY_HASH = ConstExprHashingUtils::HashString("ANY");


        Logical GetLogicalForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AND_HASH)
          {
            return Logical::AND;
          }
          else if (hashCode == ANY_HASH)
          {
            return Logical::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Logical>(hashCode);
          }

          return Logical::NOT_SET;
        }

        Aws::String GetNameForLogical(Logical enumValue)
        {
          switch(enumValue)
          {
          case Logical::NOT_SET:
            return {};
          case Logical::AND:
            return "AND";
          case Logical::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogicalMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
