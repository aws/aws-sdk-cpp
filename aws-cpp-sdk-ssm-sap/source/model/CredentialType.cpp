/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/CredentialType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace CredentialTypeMapper
      {

        static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");


        CredentialType GetCredentialTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMIN_HASH)
          {
            return CredentialType::ADMIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CredentialType>(hashCode);
          }

          return CredentialType::NOT_SET;
        }

        Aws::String GetNameForCredentialType(CredentialType enumValue)
        {
          switch(enumValue)
          {
          case CredentialType::ADMIN:
            return "ADMIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CredentialTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
