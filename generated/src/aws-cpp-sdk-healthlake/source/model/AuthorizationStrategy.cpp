/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/AuthorizationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace AuthorizationStrategyMapper
      {

        static const int SMART_ON_FHIR_V1_HASH = HashingUtils::HashString("SMART_ON_FHIR_V1");
        static const int AWS_AUTH_HASH = HashingUtils::HashString("AWS_AUTH");


        AuthorizationStrategy GetAuthorizationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMART_ON_FHIR_V1_HASH)
          {
            return AuthorizationStrategy::SMART_ON_FHIR_V1;
          }
          else if (hashCode == AWS_AUTH_HASH)
          {
            return AuthorizationStrategy::AWS_AUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationStrategy>(hashCode);
          }

          return AuthorizationStrategy::NOT_SET;
        }

        Aws::String GetNameForAuthorizationStrategy(AuthorizationStrategy enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationStrategy::NOT_SET:
            return {};
          case AuthorizationStrategy::SMART_ON_FHIR_V1:
            return "SMART_ON_FHIR_V1";
          case AuthorizationStrategy::AWS_AUTH:
            return "AWS_AUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizationStrategyMapper
    } // namespace Model
  } // namespace HealthLake
} // namespace Aws
