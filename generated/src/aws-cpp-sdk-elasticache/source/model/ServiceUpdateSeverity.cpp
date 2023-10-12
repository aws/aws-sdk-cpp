/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ServiceUpdateSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace ServiceUpdateSeverityMapper
      {

        static constexpr uint32_t critical_HASH = ConstExprHashingUtils::HashString("critical");
        static constexpr uint32_t important_HASH = ConstExprHashingUtils::HashString("important");
        static constexpr uint32_t medium_HASH = ConstExprHashingUtils::HashString("medium");
        static constexpr uint32_t low_HASH = ConstExprHashingUtils::HashString("low");


        ServiceUpdateSeverity GetServiceUpdateSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == critical_HASH)
          {
            return ServiceUpdateSeverity::critical;
          }
          else if (hashCode == important_HASH)
          {
            return ServiceUpdateSeverity::important;
          }
          else if (hashCode == medium_HASH)
          {
            return ServiceUpdateSeverity::medium;
          }
          else if (hashCode == low_HASH)
          {
            return ServiceUpdateSeverity::low;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceUpdateSeverity>(hashCode);
          }

          return ServiceUpdateSeverity::NOT_SET;
        }

        Aws::String GetNameForServiceUpdateSeverity(ServiceUpdateSeverity enumValue)
        {
          switch(enumValue)
          {
          case ServiceUpdateSeverity::NOT_SET:
            return {};
          case ServiceUpdateSeverity::critical:
            return "critical";
          case ServiceUpdateSeverity::important:
            return "important";
          case ServiceUpdateSeverity::medium:
            return "medium";
          case ServiceUpdateSeverity::low:
            return "low";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceUpdateSeverityMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
