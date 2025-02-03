/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/SmbAuthenticationType.h>
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
      namespace SmbAuthenticationTypeMapper
      {

        static const int NTLM_HASH = HashingUtils::HashString("NTLM");
        static const int KERBEROS_HASH = HashingUtils::HashString("KERBEROS");


        SmbAuthenticationType GetSmbAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NTLM_HASH)
          {
            return SmbAuthenticationType::NTLM;
          }
          else if (hashCode == KERBEROS_HASH)
          {
            return SmbAuthenticationType::KERBEROS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmbAuthenticationType>(hashCode);
          }

          return SmbAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForSmbAuthenticationType(SmbAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case SmbAuthenticationType::NOT_SET:
            return {};
          case SmbAuthenticationType::NTLM:
            return "NTLM";
          case SmbAuthenticationType::KERBEROS:
            return "KERBEROS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmbAuthenticationTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
