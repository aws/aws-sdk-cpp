/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/ResolutionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace ResolutionStrategyMapper
      {

        static const int OPTIMISTIC_CONCURRENCY_HASH = HashingUtils::HashString("OPTIMISTIC_CONCURRENCY");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int AUTOMERGE_HASH = HashingUtils::HashString("AUTOMERGE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ResolutionStrategy GetResolutionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPTIMISTIC_CONCURRENCY_HASH)
          {
            return ResolutionStrategy::OPTIMISTIC_CONCURRENCY;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return ResolutionStrategy::LAMBDA;
          }
          else if (hashCode == AUTOMERGE_HASH)
          {
            return ResolutionStrategy::AUTOMERGE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ResolutionStrategy::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolutionStrategy>(hashCode);
          }

          return ResolutionStrategy::NOT_SET;
        }

        Aws::String GetNameForResolutionStrategy(ResolutionStrategy enumValue)
        {
          switch(enumValue)
          {
          case ResolutionStrategy::NOT_SET:
            return {};
          case ResolutionStrategy::OPTIMISTIC_CONCURRENCY:
            return "OPTIMISTIC_CONCURRENCY";
          case ResolutionStrategy::LAMBDA:
            return "LAMBDA";
          case ResolutionStrategy::AUTOMERGE:
            return "AUTOMERGE";
          case ResolutionStrategy::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolutionStrategyMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
