/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/AzureBlobAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace AzureBlobAuthenticationTypeMapper
      {

        static const int SAS_HASH = HashingUtils::HashString("SAS");


        AzureBlobAuthenticationType GetAzureBlobAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAS_HASH)
          {
            return AzureBlobAuthenticationType::SAS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AzureBlobAuthenticationType>(hashCode);
          }

          return AzureBlobAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForAzureBlobAuthenticationType(AzureBlobAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case AzureBlobAuthenticationType::NOT_SET:
            return {};
          case AzureBlobAuthenticationType::SAS:
            return "SAS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AzureBlobAuthenticationTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
