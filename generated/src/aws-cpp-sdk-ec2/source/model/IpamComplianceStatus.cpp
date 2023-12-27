/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamComplianceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace IpamComplianceStatusMapper
      {

        static const int compliant_HASH = HashingUtils::HashString("compliant");
        static const int noncompliant_HASH = HashingUtils::HashString("noncompliant");
        static const int unmanaged_HASH = HashingUtils::HashString("unmanaged");
        static const int ignored_HASH = HashingUtils::HashString("ignored");


        IpamComplianceStatus GetIpamComplianceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == compliant_HASH)
          {
            return IpamComplianceStatus::compliant;
          }
          else if (hashCode == noncompliant_HASH)
          {
            return IpamComplianceStatus::noncompliant;
          }
          else if (hashCode == unmanaged_HASH)
          {
            return IpamComplianceStatus::unmanaged;
          }
          else if (hashCode == ignored_HASH)
          {
            return IpamComplianceStatus::ignored;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamComplianceStatus>(hashCode);
          }

          return IpamComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForIpamComplianceStatus(IpamComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case IpamComplianceStatus::NOT_SET:
            return {};
          case IpamComplianceStatus::compliant:
            return "compliant";
          case IpamComplianceStatus::noncompliant:
            return "noncompliant";
          case IpamComplianceStatus::unmanaged:
            return "unmanaged";
          case IpamComplianceStatus::ignored:
            return "ignored";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamComplianceStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
