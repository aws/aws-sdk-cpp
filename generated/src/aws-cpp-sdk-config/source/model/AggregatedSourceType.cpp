/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregatedSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace AggregatedSourceTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");


        AggregatedSourceType GetAggregatedSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return AggregatedSourceType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return AggregatedSourceType::ORGANIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregatedSourceType>(hashCode);
          }

          return AggregatedSourceType::NOT_SET;
        }

        Aws::String GetNameForAggregatedSourceType(AggregatedSourceType enumValue)
        {
          switch(enumValue)
          {
          case AggregatedSourceType::ACCOUNT:
            return "ACCOUNT";
          case AggregatedSourceType::ORGANIZATION:
            return "ORGANIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregatedSourceTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
