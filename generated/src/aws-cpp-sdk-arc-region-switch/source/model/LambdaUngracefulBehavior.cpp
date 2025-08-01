/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/LambdaUngracefulBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace LambdaUngracefulBehaviorMapper
      {

        static const int skip_HASH = HashingUtils::HashString("skip");


        LambdaUngracefulBehavior GetLambdaUngracefulBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == skip_HASH)
          {
            return LambdaUngracefulBehavior::skip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaUngracefulBehavior>(hashCode);
          }

          return LambdaUngracefulBehavior::NOT_SET;
        }

        Aws::String GetNameForLambdaUngracefulBehavior(LambdaUngracefulBehavior enumValue)
        {
          switch(enumValue)
          {
          case LambdaUngracefulBehavior::NOT_SET:
            return {};
          case LambdaUngracefulBehavior::skip:
            return "skip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaUngracefulBehaviorMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
