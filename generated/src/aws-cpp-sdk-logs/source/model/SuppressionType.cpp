/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SuppressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace SuppressionTypeMapper
      {

        static const int LIMITED_HASH = HashingUtils::HashString("LIMITED");
        static const int INFINITE_HASH = HashingUtils::HashString("INFINITE");


        SuppressionType GetSuppressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIMITED_HASH)
          {
            return SuppressionType::LIMITED;
          }
          else if (hashCode == INFINITE_HASH)
          {
            return SuppressionType::INFINITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuppressionType>(hashCode);
          }

          return SuppressionType::NOT_SET;
        }

        Aws::String GetNameForSuppressionType(SuppressionType enumValue)
        {
          switch(enumValue)
          {
          case SuppressionType::NOT_SET:
            return {};
          case SuppressionType::LIMITED:
            return "LIMITED";
          case SuppressionType::INFINITE:
            return "INFINITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuppressionTypeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
