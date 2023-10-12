/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ModelEndpointStatusMapper
      {

        static constexpr uint32_t ASSOCIATED_HASH = ConstExprHashingUtils::HashString("ASSOCIATED");
        static constexpr uint32_t DISSOCIATED_HASH = ConstExprHashingUtils::HashString("DISSOCIATED");


        ModelEndpointStatus GetModelEndpointStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATED_HASH)
          {
            return ModelEndpointStatus::ASSOCIATED;
          }
          else if (hashCode == DISSOCIATED_HASH)
          {
            return ModelEndpointStatus::DISSOCIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelEndpointStatus>(hashCode);
          }

          return ModelEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForModelEndpointStatus(ModelEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelEndpointStatus::NOT_SET:
            return {};
          case ModelEndpointStatus::ASSOCIATED:
            return "ASSOCIATED";
          case ModelEndpointStatus::DISSOCIATED:
            return "DISSOCIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelEndpointStatusMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
