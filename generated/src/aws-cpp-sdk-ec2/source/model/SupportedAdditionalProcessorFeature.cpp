/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SupportedAdditionalProcessorFeature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace SupportedAdditionalProcessorFeatureMapper
      {

        static const int amd_sev_snp_HASH = HashingUtils::HashString("amd-sev-snp");


        SupportedAdditionalProcessorFeature GetSupportedAdditionalProcessorFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == amd_sev_snp_HASH)
          {
            return SupportedAdditionalProcessorFeature::amd_sev_snp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedAdditionalProcessorFeature>(hashCode);
          }

          return SupportedAdditionalProcessorFeature::NOT_SET;
        }

        Aws::String GetNameForSupportedAdditionalProcessorFeature(SupportedAdditionalProcessorFeature enumValue)
        {
          switch(enumValue)
          {
          case SupportedAdditionalProcessorFeature::NOT_SET:
            return {};
          case SupportedAdditionalProcessorFeature::amd_sev_snp:
            return "amd-sev-snp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedAdditionalProcessorFeatureMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
