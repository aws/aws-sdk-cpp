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

#include <aws/application-insights/model/ConfigurationEventResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace ConfigurationEventResourceTypeMapper
      {

        static const int CLOUDWATCH_ALARM_HASH = HashingUtils::HashString("CLOUDWATCH_ALARM");
        static const int CLOUDFORMATION_HASH = HashingUtils::HashString("CLOUDFORMATION");
        static const int SSM_ASSOCIATION_HASH = HashingUtils::HashString("SSM_ASSOCIATION");


        ConfigurationEventResourceType GetConfigurationEventResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDWATCH_ALARM_HASH)
          {
            return ConfigurationEventResourceType::CLOUDWATCH_ALARM;
          }
          else if (hashCode == CLOUDFORMATION_HASH)
          {
            return ConfigurationEventResourceType::CLOUDFORMATION;
          }
          else if (hashCode == SSM_ASSOCIATION_HASH)
          {
            return ConfigurationEventResourceType::SSM_ASSOCIATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationEventResourceType>(hashCode);
          }

          return ConfigurationEventResourceType::NOT_SET;
        }

        Aws::String GetNameForConfigurationEventResourceType(ConfigurationEventResourceType enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationEventResourceType::CLOUDWATCH_ALARM:
            return "CLOUDWATCH_ALARM";
          case ConfigurationEventResourceType::CLOUDFORMATION:
            return "CLOUDFORMATION";
          case ConfigurationEventResourceType::SSM_ASSOCIATION:
            return "SSM_ASSOCIATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationEventResourceTypeMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
