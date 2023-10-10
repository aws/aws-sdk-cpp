/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/HdfsAuthenticationType.h>
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
      namespace HdfsAuthenticationTypeMapper
      {

        static const int SIMPLE_HASH = HashingUtils::HashString("SIMPLE");
        static const int KERBEROS_HASH = HashingUtils::HashString("KERBEROS");


        HdfsAuthenticationType GetHdfsAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIMPLE_HASH)
          {
            return HdfsAuthenticationType::SIMPLE;
          }
          else if (hashCode == KERBEROS_HASH)
          {
            return HdfsAuthenticationType::KERBEROS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HdfsAuthenticationType>(hashCode);
          }

          return HdfsAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForHdfsAuthenticationType(HdfsAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case HdfsAuthenticationType::NOT_SET:
            return {};
          case HdfsAuthenticationType::SIMPLE:
            return "SIMPLE";
          case HdfsAuthenticationType::KERBEROS:
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

      } // namespace HdfsAuthenticationTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
