/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AutoImportPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace AutoImportPolicyTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int NEW_CHANGED_HASH = HashingUtils::HashString("NEW_CHANGED");


        AutoImportPolicyType GetAutoImportPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AutoImportPolicyType::NONE;
          }
          else if (hashCode == NEW__HASH)
          {
            return AutoImportPolicyType::NEW_;
          }
          else if (hashCode == NEW_CHANGED_HASH)
          {
            return AutoImportPolicyType::NEW_CHANGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoImportPolicyType>(hashCode);
          }

          return AutoImportPolicyType::NOT_SET;
        }

        Aws::String GetNameForAutoImportPolicyType(AutoImportPolicyType enumValue)
        {
          switch(enumValue)
          {
          case AutoImportPolicyType::NONE:
            return "NONE";
          case AutoImportPolicyType::NEW_:
            return "NEW";
          case AutoImportPolicyType::NEW_CHANGED:
            return "NEW_CHANGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoImportPolicyTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
