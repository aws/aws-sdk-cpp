/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/AppAttributesKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace AppAttributesKeysMapper
      {

        static const int DocumentRoot_HASH = HashingUtils::HashString("DocumentRoot");
        static const int RailsEnv_HASH = HashingUtils::HashString("RailsEnv");
        static const int AutoBundleOnDeploy_HASH = HashingUtils::HashString("AutoBundleOnDeploy");
        static const int AwsFlowRubySettings_HASH = HashingUtils::HashString("AwsFlowRubySettings");


        AppAttributesKeys GetAppAttributesKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DocumentRoot_HASH)
          {
            return AppAttributesKeys::DocumentRoot;
          }
          else if (hashCode == RailsEnv_HASH)
          {
            return AppAttributesKeys::RailsEnv;
          }
          else if (hashCode == AutoBundleOnDeploy_HASH)
          {
            return AppAttributesKeys::AutoBundleOnDeploy;
          }
          else if (hashCode == AwsFlowRubySettings_HASH)
          {
            return AppAttributesKeys::AwsFlowRubySettings;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppAttributesKeys>(hashCode);
          }

          return AppAttributesKeys::NOT_SET;
        }

        Aws::String GetNameForAppAttributesKeys(AppAttributesKeys enumValue)
        {
          switch(enumValue)
          {
          case AppAttributesKeys::DocumentRoot:
            return "DocumentRoot";
          case AppAttributesKeys::RailsEnv:
            return "RailsEnv";
          case AppAttributesKeys::AutoBundleOnDeploy:
            return "AutoBundleOnDeploy";
          case AppAttributesKeys::AwsFlowRubySettings:
            return "AwsFlowRubySettings";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AppAttributesKeysMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
