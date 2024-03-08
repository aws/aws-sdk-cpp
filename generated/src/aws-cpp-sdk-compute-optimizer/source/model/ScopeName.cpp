/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ScopeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace ScopeNameMapper
      {

        static const int Organization_HASH = HashingUtils::HashString("Organization");
        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int ResourceArn_HASH = HashingUtils::HashString("ResourceArn");


        ScopeName GetScopeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Organization_HASH)
          {
            return ScopeName::Organization;
          }
          else if (hashCode == AccountId_HASH)
          {
            return ScopeName::AccountId;
          }
          else if (hashCode == ResourceArn_HASH)
          {
            return ScopeName::ResourceArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScopeName>(hashCode);
          }

          return ScopeName::NOT_SET;
        }

        Aws::String GetNameForScopeName(ScopeName enumValue)
        {
          switch(enumValue)
          {
          case ScopeName::NOT_SET:
            return {};
          case ScopeName::Organization:
            return "Organization";
          case ScopeName::AccountId:
            return "AccountId";
          case ScopeName::ResourceArn:
            return "ResourceArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
