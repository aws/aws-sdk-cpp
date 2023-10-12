/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContinuousDeploymentPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace ContinuousDeploymentPolicyTypeMapper
      {

        static constexpr uint32_t SingleWeight_HASH = ConstExprHashingUtils::HashString("SingleWeight");
        static constexpr uint32_t SingleHeader_HASH = ConstExprHashingUtils::HashString("SingleHeader");


        ContinuousDeploymentPolicyType GetContinuousDeploymentPolicyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleWeight_HASH)
          {
            return ContinuousDeploymentPolicyType::SingleWeight;
          }
          else if (hashCode == SingleHeader_HASH)
          {
            return ContinuousDeploymentPolicyType::SingleHeader;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContinuousDeploymentPolicyType>(hashCode);
          }

          return ContinuousDeploymentPolicyType::NOT_SET;
        }

        Aws::String GetNameForContinuousDeploymentPolicyType(ContinuousDeploymentPolicyType enumValue)
        {
          switch(enumValue)
          {
          case ContinuousDeploymentPolicyType::NOT_SET:
            return {};
          case ContinuousDeploymentPolicyType::SingleWeight:
            return "SingleWeight";
          case ContinuousDeploymentPolicyType::SingleHeader:
            return "SingleHeader";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContinuousDeploymentPolicyTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
