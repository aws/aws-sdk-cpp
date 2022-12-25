/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeletableCertificateBasedAuthProperty.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace DeletableCertificateBasedAuthPropertyMapper
      {

        static const int CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN_HASH = HashingUtils::HashString("CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN");


        DeletableCertificateBasedAuthProperty GetDeletableCertificateBasedAuthPropertyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN_HASH)
          {
            return DeletableCertificateBasedAuthProperty::CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletableCertificateBasedAuthProperty>(hashCode);
          }

          return DeletableCertificateBasedAuthProperty::NOT_SET;
        }

        Aws::String GetNameForDeletableCertificateBasedAuthProperty(DeletableCertificateBasedAuthProperty enumValue)
        {
          switch(enumValue)
          {
          case DeletableCertificateBasedAuthProperty::CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN:
            return "CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletableCertificateBasedAuthPropertyMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
