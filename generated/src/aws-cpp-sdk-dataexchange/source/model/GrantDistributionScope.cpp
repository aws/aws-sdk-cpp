/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/GrantDistributionScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace GrantDistributionScopeMapper
      {

        static const int AWS_ORGANIZATION_HASH = HashingUtils::HashString("AWS_ORGANIZATION");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GrantDistributionScope GetGrantDistributionScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_ORGANIZATION_HASH)
          {
            return GrantDistributionScope::AWS_ORGANIZATION;
          }
          else if (hashCode == NONE_HASH)
          {
            return GrantDistributionScope::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GrantDistributionScope>(hashCode);
          }

          return GrantDistributionScope::NOT_SET;
        }

        Aws::String GetNameForGrantDistributionScope(GrantDistributionScope enumValue)
        {
          switch(enumValue)
          {
          case GrantDistributionScope::NOT_SET:
            return {};
          case GrantDistributionScope::AWS_ORGANIZATION:
            return "AWS_ORGANIZATION";
          case GrantDistributionScope::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GrantDistributionScopeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
