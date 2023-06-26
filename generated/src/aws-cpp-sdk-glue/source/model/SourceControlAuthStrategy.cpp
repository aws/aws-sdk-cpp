/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SourceControlAuthStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SourceControlAuthStrategyMapper
      {

        static const int PERSONAL_ACCESS_TOKEN_HASH = HashingUtils::HashString("PERSONAL_ACCESS_TOKEN");
        static const int AWS_SECRETS_MANAGER_HASH = HashingUtils::HashString("AWS_SECRETS_MANAGER");


        SourceControlAuthStrategy GetSourceControlAuthStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSONAL_ACCESS_TOKEN_HASH)
          {
            return SourceControlAuthStrategy::PERSONAL_ACCESS_TOKEN;
          }
          else if (hashCode == AWS_SECRETS_MANAGER_HASH)
          {
            return SourceControlAuthStrategy::AWS_SECRETS_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceControlAuthStrategy>(hashCode);
          }

          return SourceControlAuthStrategy::NOT_SET;
        }

        Aws::String GetNameForSourceControlAuthStrategy(SourceControlAuthStrategy enumValue)
        {
          switch(enumValue)
          {
          case SourceControlAuthStrategy::PERSONAL_ACCESS_TOKEN:
            return "PERSONAL_ACCESS_TOKEN";
          case SourceControlAuthStrategy::AWS_SECRETS_MANAGER:
            return "AWS_SECRETS_MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceControlAuthStrategyMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
