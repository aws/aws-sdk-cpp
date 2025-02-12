/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorDetection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackRefactorDetectionMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        StackRefactorDetection GetStackRefactorDetectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return StackRefactorDetection::AUTO;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return StackRefactorDetection::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackRefactorDetection>(hashCode);
          }

          return StackRefactorDetection::NOT_SET;
        }

        Aws::String GetNameForStackRefactorDetection(StackRefactorDetection enumValue)
        {
          switch(enumValue)
          {
          case StackRefactorDetection::NOT_SET:
            return {};
          case StackRefactorDetection::AUTO:
            return "AUTO";
          case StackRefactorDetection::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackRefactorDetectionMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
