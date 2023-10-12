/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/FederationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace FederationModeMapper
      {

        static constexpr uint32_t FEDERATED_HASH = ConstExprHashingUtils::HashString("FEDERATED");
        static constexpr uint32_t LOCAL_HASH = ConstExprHashingUtils::HashString("LOCAL");


        FederationMode GetFederationModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FEDERATED_HASH)
          {
            return FederationMode::FEDERATED;
          }
          else if (hashCode == LOCAL_HASH)
          {
            return FederationMode::LOCAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FederationMode>(hashCode);
          }

          return FederationMode::NOT_SET;
        }

        Aws::String GetNameForFederationMode(FederationMode enumValue)
        {
          switch(enumValue)
          {
          case FederationMode::NOT_SET:
            return {};
          case FederationMode::FEDERATED:
            return "FEDERATED";
          case FederationMode::LOCAL:
            return "LOCAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FederationModeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
