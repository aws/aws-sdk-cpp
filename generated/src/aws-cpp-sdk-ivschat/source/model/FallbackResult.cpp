/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/FallbackResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivschat
  {
    namespace Model
    {
      namespace FallbackResultMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        FallbackResult GetFallbackResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return FallbackResult::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return FallbackResult::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FallbackResult>(hashCode);
          }

          return FallbackResult::NOT_SET;
        }

        Aws::String GetNameForFallbackResult(FallbackResult enumValue)
        {
          switch(enumValue)
          {
          case FallbackResult::NOT_SET:
            return {};
          case FallbackResult::ALLOW:
            return "ALLOW";
          case FallbackResult::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FallbackResultMapper
    } // namespace Model
  } // namespace ivschat
} // namespace Aws
