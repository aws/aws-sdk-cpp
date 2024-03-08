/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaIsolationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace LambdaIsolationModeMapper
      {

        static const int GreengrassContainer_HASH = HashingUtils::HashString("GreengrassContainer");
        static const int NoContainer_HASH = HashingUtils::HashString("NoContainer");


        LambdaIsolationMode GetLambdaIsolationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreengrassContainer_HASH)
          {
            return LambdaIsolationMode::GreengrassContainer;
          }
          else if (hashCode == NoContainer_HASH)
          {
            return LambdaIsolationMode::NoContainer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaIsolationMode>(hashCode);
          }

          return LambdaIsolationMode::NOT_SET;
        }

        Aws::String GetNameForLambdaIsolationMode(LambdaIsolationMode enumValue)
        {
          switch(enumValue)
          {
          case LambdaIsolationMode::NOT_SET:
            return {};
          case LambdaIsolationMode::GreengrassContainer:
            return "GreengrassContainer";
          case LambdaIsolationMode::NoContainer:
            return "NoContainer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaIsolationModeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
