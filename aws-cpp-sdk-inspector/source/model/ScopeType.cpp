/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ScopeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace ScopeTypeMapper
      {

        static const int INSTANCE_ID_HASH = HashingUtils::HashString("INSTANCE_ID");
        static const int RULES_PACKAGE_ARN_HASH = HashingUtils::HashString("RULES_PACKAGE_ARN");


        ScopeType GetScopeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_ID_HASH)
          {
            return ScopeType::INSTANCE_ID;
          }
          else if (hashCode == RULES_PACKAGE_ARN_HASH)
          {
            return ScopeType::RULES_PACKAGE_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScopeType>(hashCode);
          }

          return ScopeType::NOT_SET;
        }

        Aws::String GetNameForScopeType(ScopeType enumValue)
        {
          switch(enumValue)
          {
          case ScopeType::INSTANCE_ID:
            return "INSTANCE_ID";
          case ScopeType::RULES_PACKAGE_ARN:
            return "RULES_PACKAGE_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeTypeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
