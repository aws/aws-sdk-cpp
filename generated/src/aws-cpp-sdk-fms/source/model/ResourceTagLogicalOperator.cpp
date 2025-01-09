/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ResourceTagLogicalOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace ResourceTagLogicalOperatorMapper
      {

        static const int AND_HASH = HashingUtils::HashString("AND");
        static const int OR_HASH = HashingUtils::HashString("OR");


        ResourceTagLogicalOperator GetResourceTagLogicalOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AND_HASH)
          {
            return ResourceTagLogicalOperator::AND;
          }
          else if (hashCode == OR_HASH)
          {
            return ResourceTagLogicalOperator::OR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTagLogicalOperator>(hashCode);
          }

          return ResourceTagLogicalOperator::NOT_SET;
        }

        Aws::String GetNameForResourceTagLogicalOperator(ResourceTagLogicalOperator enumValue)
        {
          switch(enumValue)
          {
          case ResourceTagLogicalOperator::NOT_SET:
            return {};
          case ResourceTagLogicalOperator::AND:
            return "AND";
          case ResourceTagLogicalOperator::OR:
            return "OR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTagLogicalOperatorMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
