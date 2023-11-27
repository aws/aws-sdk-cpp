/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/EmptyTargetResolutionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FIS
  {
    namespace Model
    {
      namespace EmptyTargetResolutionModeMapper
      {

        static const int fail_HASH = HashingUtils::HashString("fail");
        static const int skip_HASH = HashingUtils::HashString("skip");


        EmptyTargetResolutionMode GetEmptyTargetResolutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == fail_HASH)
          {
            return EmptyTargetResolutionMode::fail;
          }
          else if (hashCode == skip_HASH)
          {
            return EmptyTargetResolutionMode::skip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmptyTargetResolutionMode>(hashCode);
          }

          return EmptyTargetResolutionMode::NOT_SET;
        }

        Aws::String GetNameForEmptyTargetResolutionMode(EmptyTargetResolutionMode enumValue)
        {
          switch(enumValue)
          {
          case EmptyTargetResolutionMode::NOT_SET:
            return {};
          case EmptyTargetResolutionMode::fail:
            return "fail";
          case EmptyTargetResolutionMode::skip:
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

      } // namespace EmptyTargetResolutionModeMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
