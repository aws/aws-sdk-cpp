/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/OriginTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace OriginTypeValueMapper
      {

        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");
        static const int TARGET_HASH = HashingUtils::HashString("TARGET");


        OriginTypeValue GetOriginTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_HASH)
          {
            return OriginTypeValue::SOURCE;
          }
          else if (hashCode == TARGET_HASH)
          {
            return OriginTypeValue::TARGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginTypeValue>(hashCode);
          }

          return OriginTypeValue::NOT_SET;
        }

        Aws::String GetNameForOriginTypeValue(OriginTypeValue enumValue)
        {
          switch(enumValue)
          {
          case OriginTypeValue::NOT_SET:
            return {};
          case OriginTypeValue::SOURCE:
            return "SOURCE";
          case OriginTypeValue::TARGET:
            return "TARGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
