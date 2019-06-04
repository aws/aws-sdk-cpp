/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int critical_HASH = HashingUtils::HashString("critical");
        static const int important_HASH = HashingUtils::HashString("important");
        static const int medium_HASH = HashingUtils::HashString("medium");
        static const int low_HASH = HashingUtils::HashString("low");


        ServiceUpdateSeverity GetServiceUpdateSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
