/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/HdfsDataTransferProtection.h>
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
      namespace HdfsDataTransferProtectionMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t AUTHENTICATION_HASH = ConstExprHashingUtils::HashString("AUTHENTICATION");
        static constexpr uint32_t INTEGRITY_HASH = ConstExprHashingUtils::HashString("INTEGRITY");
        static constexpr uint32_t PRIVACY_HASH = ConstExprHashingUtils::HashString("PRIVACY");


        HdfsDataTransferProtection GetHdfsDataTransferProtectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return HdfsDataTransferProtection::DISABLED;
          }
          else if (hashCode == AUTHENTICATION_HASH)
          {
            return HdfsDataTransferProtection::AUTHENTICATION;
          }
          else if (hashCode == INTEGRITY_HASH)
          {
            return HdfsDataTransferProtection::INTEGRITY;
          }
          else if (hashCode == PRIVACY_HASH)
          {
            return HdfsDataTransferProtection::PRIVACY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HdfsDataTransferProtection>(hashCode);
          }

          return HdfsDataTransferProtection::NOT_SET;
        }

        Aws::String GetNameForHdfsDataTransferProtection(HdfsDataTransferProtection enumValue)
        {
          switch(enumValue)
          {
          case HdfsDataTransferProtection::NOT_SET:
            return {};
          case HdfsDataTransferProtection::DISABLED:
            return "DISABLED";
          case HdfsDataTransferProtection::AUTHENTICATION:
            return "AUTHENTICATION";
          case HdfsDataTransferProtection::INTEGRITY:
            return "INTEGRITY";
          case HdfsDataTransferProtection::PRIVACY:
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

      } // namespace HdfsDataTransferProtectionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
