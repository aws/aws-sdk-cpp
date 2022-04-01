/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
