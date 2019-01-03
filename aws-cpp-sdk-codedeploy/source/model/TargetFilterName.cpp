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

#include <aws/codedeploy/model/TargetFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace TargetFilterNameMapper
      {

        static const int TargetStatus_HASH = HashingUtils::HashString("TargetStatus");
        static const int ServerInstanceLabel_HASH = HashingUtils::HashString("ServerInstanceLabel");


        TargetFilterName GetTargetFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TargetStatus_HASH)
          {
            return TargetFilterName::TargetStatus;
          }
          else if (hashCode == ServerInstanceLabel_HASH)
          {
            return TargetFilterName::ServerInstanceLabel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetFilterName>(hashCode);
          }

          return TargetFilterName::NOT_SET;
        }

        Aws::String GetNameForTargetFilterName(TargetFilterName enumValue)
        {
          switch(enumValue)
          {
          case TargetFilterName::TargetStatus:
            return "TargetStatus";
          case TargetFilterName::ServerInstanceLabel:
            return "ServerInstanceLabel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetFilterNameMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
