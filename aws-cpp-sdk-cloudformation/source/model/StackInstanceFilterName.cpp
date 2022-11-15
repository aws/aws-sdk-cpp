/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackInstanceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackInstanceFilterNameMapper
      {

        static const int DETAILED_STATUS_HASH = HashingUtils::HashString("DETAILED_STATUS");
        static const int LAST_OPERATION_ID_HASH = HashingUtils::HashString("LAST_OPERATION_ID");


        StackInstanceFilterName GetStackInstanceFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETAILED_STATUS_HASH)
          {
            return StackInstanceFilterName::DETAILED_STATUS;
          }
          else if (hashCode == LAST_OPERATION_ID_HASH)
          {
            return StackInstanceFilterName::LAST_OPERATION_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceFilterName>(hashCode);
          }

          return StackInstanceFilterName::NOT_SET;
        }

        Aws::String GetNameForStackInstanceFilterName(StackInstanceFilterName enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceFilterName::DETAILED_STATUS:
            return "DETAILED_STATUS";
          case StackInstanceFilterName::LAST_OPERATION_ID:
            return "LAST_OPERATION_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceFilterNameMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
