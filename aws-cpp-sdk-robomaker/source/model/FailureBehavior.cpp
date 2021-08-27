/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace FailureBehaviorMapper
      {

        static const int Fail_HASH = HashingUtils::HashString("Fail");
        static const int Continue_HASH = HashingUtils::HashString("Continue");


        FailureBehavior GetFailureBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Fail_HASH)
          {
            return FailureBehavior::Fail;
          }
          else if (hashCode == Continue_HASH)
          {
            return FailureBehavior::Continue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureBehavior>(hashCode);
          }

          return FailureBehavior::NOT_SET;
        }

        Aws::String GetNameForFailureBehavior(FailureBehavior enumValue)
        {
          switch(enumValue)
          {
          case FailureBehavior::Fail:
            return "Fail";
          case FailureBehavior::Continue:
            return "Continue";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureBehaviorMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
