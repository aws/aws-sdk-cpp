/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/DigitalSignatureMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace DigitalSignatureMethodMapper
      {

        static const int JWT_PS384_HASH = HashingUtils::HashString("JWT_PS384");


        DigitalSignatureMethod GetDigitalSignatureMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JWT_PS384_HASH)
          {
            return DigitalSignatureMethod::JWT_PS384;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DigitalSignatureMethod>(hashCode);
          }

          return DigitalSignatureMethod::NOT_SET;
        }

        Aws::String GetNameForDigitalSignatureMethod(DigitalSignatureMethod enumValue)
        {
          switch(enumValue)
          {
          case DigitalSignatureMethod::NOT_SET:
            return {};
          case DigitalSignatureMethod::JWT_PS384:
            return "JWT_PS384";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DigitalSignatureMethodMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
