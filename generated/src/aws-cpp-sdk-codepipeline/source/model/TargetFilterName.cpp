/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/TargetFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace TargetFilterNameMapper
      {

        static const int TARGET_STATUS_HASH = HashingUtils::HashString("TARGET_STATUS");


        TargetFilterName GetTargetFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TARGET_STATUS_HASH)
          {
            return TargetFilterName::TARGET_STATUS;
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
          case TargetFilterName::NOT_SET:
            return {};
          case TargetFilterName::TARGET_STATUS:
            return "TARGET_STATUS";
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
  } // namespace CodePipeline
} // namespace Aws
