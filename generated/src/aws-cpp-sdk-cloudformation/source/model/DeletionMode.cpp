/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeletionMode.h>
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
      namespace DeletionModeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int FORCE_DELETE_STACK_HASH = HashingUtils::HashString("FORCE_DELETE_STACK");


        DeletionMode GetDeletionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return DeletionMode::STANDARD;
          }
          else if (hashCode == FORCE_DELETE_STACK_HASH)
          {
            return DeletionMode::FORCE_DELETE_STACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionMode>(hashCode);
          }

          return DeletionMode::NOT_SET;
        }

        Aws::String GetNameForDeletionMode(DeletionMode enumValue)
        {
          switch(enumValue)
          {
          case DeletionMode::NOT_SET:
            return {};
          case DeletionMode::STANDARD:
            return "STANDARD";
          case DeletionMode::FORCE_DELETE_STACK:
            return "FORCE_DELETE_STACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionModeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
