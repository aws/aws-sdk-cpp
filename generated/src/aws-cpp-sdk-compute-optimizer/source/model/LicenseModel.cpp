/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace LicenseModelMapper
      {

        static const int LicenseIncluded_HASH = HashingUtils::HashString("LicenseIncluded");
        static const int BringYourOwnLicense_HASH = HashingUtils::HashString("BringYourOwnLicense");


        LicenseModel GetLicenseModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LicenseIncluded_HASH)
          {
            return LicenseModel::LicenseIncluded;
          }
          else if (hashCode == BringYourOwnLicense_HASH)
          {
            return LicenseModel::BringYourOwnLicense;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseModel>(hashCode);
          }

          return LicenseModel::NOT_SET;
        }

        Aws::String GetNameForLicenseModel(LicenseModel enumValue)
        {
          switch(enumValue)
          {
          case LicenseModel::NOT_SET:
            return {};
          case LicenseModel::LicenseIncluded:
            return "LicenseIncluded";
          case LicenseModel::BringYourOwnLicense:
            return "BringYourOwnLicense";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseModelMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
