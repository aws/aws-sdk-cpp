/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/HdfsRpcProtection.h>
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
      namespace HdfsRpcProtectionMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int AUTHENTICATION_HASH = HashingUtils::HashString("AUTHENTICATION");
        static const int INTEGRITY_HASH = HashingUtils::HashString("INTEGRITY");
        static const int PRIVACY_HASH = HashingUtils::HashString("PRIVACY");


        HdfsRpcProtection GetHdfsRpcProtectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return HdfsRpcProtection::DISABLED;
          }
          else if (hashCode == AUTHENTICATION_HASH)
          {
            return HdfsRpcProtection::AUTHENTICATION;
          }
          else if (hashCode == INTEGRITY_HASH)
          {
            return HdfsRpcProtection::INTEGRITY;
          }
          else if (hashCode == PRIVACY_HASH)
          {
            return HdfsRpcProtection::PRIVACY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HdfsRpcProtection>(hashCode);
          }

          return HdfsRpcProtection::NOT_SET;
        }

        Aws::String GetNameForHdfsRpcProtection(HdfsRpcProtection enumValue)
        {
          switch(enumValue)
          {
          case HdfsRpcProtection::NOT_SET:
            return {};
          case HdfsRpcProtection::DISABLED:
            return "DISABLED";
          case HdfsRpcProtection::AUTHENTICATION:
            return "AUTHENTICATION";
          case HdfsRpcProtection::INTEGRITY:
            return "INTEGRITY";
          case HdfsRpcProtection::PRIVACY:
            return "PRIVACY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HdfsRpcProtectionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
