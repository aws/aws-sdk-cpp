/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/FunctionIsolationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace FunctionIsolationModeMapper
      {

        static const int GreengrassContainer_HASH = HashingUtils::HashString("GreengrassContainer");
        static const int NoContainer_HASH = HashingUtils::HashString("NoContainer");


        FunctionIsolationMode GetFunctionIsolationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreengrassContainer_HASH)
          {
            return FunctionIsolationMode::GreengrassContainer;
          }
          else if (hashCode == NoContainer_HASH)
          {
            return FunctionIsolationMode::NoContainer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FunctionIsolationMode>(hashCode);
          }

          return FunctionIsolationMode::NOT_SET;
        }

        Aws::String GetNameForFunctionIsolationMode(FunctionIsolationMode enumValue)
        {
          switch(enumValue)
          {
          case FunctionIsolationMode::GreengrassContainer:
            return "GreengrassContainer";
          case FunctionIsolationMode::NoContainer:
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

      } // namespace FunctionIsolationModeMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
