/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/LicenseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace LicenseTypeMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int BYOL_HASH = HashingUtils::HashString("BYOL");


        LicenseType GetLicenseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return LicenseType::AWS;
          }
          else if (hashCode == BYOL_HASH)
          {
            return LicenseType::BYOL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseType>(hashCode);
          }

          return LicenseType::NOT_SET;
        }

        Aws::String GetNameForLicenseType(LicenseType enumValue)
        {
          switch(enumValue)
          {
          case LicenseType::AWS:
            return "AWS";
          case LicenseType::BYOL:
            return "BYOL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseTypeMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
