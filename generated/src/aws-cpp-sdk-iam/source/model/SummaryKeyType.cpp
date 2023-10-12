/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/SummaryKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace SummaryKeyTypeMapper
      {

        static constexpr uint32_t Users_HASH = ConstExprHashingUtils::HashString("Users");
        static constexpr uint32_t UsersQuota_HASH = ConstExprHashingUtils::HashString("UsersQuota");
        static constexpr uint32_t Groups_HASH = ConstExprHashingUtils::HashString("Groups");
        static constexpr uint32_t GroupsQuota_HASH = ConstExprHashingUtils::HashString("GroupsQuota");
        static constexpr uint32_t ServerCertificates_HASH = ConstExprHashingUtils::HashString("ServerCertificates");
        static constexpr uint32_t ServerCertificatesQuota_HASH = ConstExprHashingUtils::HashString("ServerCertificatesQuota");
        static constexpr uint32_t UserPolicySizeQuota_HASH = ConstExprHashingUtils::HashString("UserPolicySizeQuota");
        static constexpr uint32_t GroupPolicySizeQuota_HASH = ConstExprHashingUtils::HashString("GroupPolicySizeQuota");
        static constexpr uint32_t GroupsPerUserQuota_HASH = ConstExprHashingUtils::HashString("GroupsPerUserQuota");
        static constexpr uint32_t SigningCertificatesPerUserQuota_HASH = ConstExprHashingUtils::HashString("SigningCertificatesPerUserQuota");
        static constexpr uint32_t AccessKeysPerUserQuota_HASH = ConstExprHashingUtils::HashString("AccessKeysPerUserQuota");
        static constexpr uint32_t MFADevices_HASH = ConstExprHashingUtils::HashString("MFADevices");
        static constexpr uint32_t MFADevicesInUse_HASH = ConstExprHashingUtils::HashString("MFADevicesInUse");
        static constexpr uint32_t AccountMFAEnabled_HASH = ConstExprHashingUtils::HashString("AccountMFAEnabled");
        static constexpr uint32_t AccountAccessKeysPresent_HASH = ConstExprHashingUtils::HashString("AccountAccessKeysPresent");
        static constexpr uint32_t AccountSigningCertificatesPresent_HASH = ConstExprHashingUtils::HashString("AccountSigningCertificatesPresent");
        static constexpr uint32_t AttachedPoliciesPerGroupQuota_HASH = ConstExprHashingUtils::HashString("AttachedPoliciesPerGroupQuota");
        static constexpr uint32_t AttachedPoliciesPerRoleQuota_HASH = ConstExprHashingUtils::HashString("AttachedPoliciesPerRoleQuota");
        static constexpr uint32_t AttachedPoliciesPerUserQuota_HASH = ConstExprHashingUtils::HashString("AttachedPoliciesPerUserQuota");
        static constexpr uint32_t Policies_HASH = ConstExprHashingUtils::HashString("Policies");
        static constexpr uint32_t PoliciesQuota_HASH = ConstExprHashingUtils::HashString("PoliciesQuota");
        static constexpr uint32_t PolicySizeQuota_HASH = ConstExprHashingUtils::HashString("PolicySizeQuota");
        static constexpr uint32_t PolicyVersionsInUse_HASH = ConstExprHashingUtils::HashString("PolicyVersionsInUse");
        static constexpr uint32_t PolicyVersionsInUseQuota_HASH = ConstExprHashingUtils::HashString("PolicyVersionsInUseQuota");
        static constexpr uint32_t VersionsPerPolicyQuota_HASH = ConstExprHashingUtils::HashString("VersionsPerPolicyQuota");
        static constexpr uint32_t GlobalEndpointTokenVersion_HASH = ConstExprHashingUtils::HashString("GlobalEndpointTokenVersion");


        SummaryKeyType GetSummaryKeyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Users_HASH)
          {
            return SummaryKeyType::Users;
          }
          else if (hashCode == UsersQuota_HASH)
          {
            return SummaryKeyType::UsersQuota;
          }
          else if (hashCode == Groups_HASH)
          {
            return SummaryKeyType::Groups;
          }
          else if (hashCode == GroupsQuota_HASH)
          {
            return SummaryKeyType::GroupsQuota;
          }
          else if (hashCode == ServerCertificates_HASH)
          {
            return SummaryKeyType::ServerCertificates;
          }
          else if (hashCode == ServerCertificatesQuota_HASH)
          {
            return SummaryKeyType::ServerCertificatesQuota;
          }
          else if (hashCode == UserPolicySizeQuota_HASH)
          {
            return SummaryKeyType::UserPolicySizeQuota;
          }
          else if (hashCode == GroupPolicySizeQuota_HASH)
          {
            return SummaryKeyType::GroupPolicySizeQuota;
          }
          else if (hashCode == GroupsPerUserQuota_HASH)
          {
            return SummaryKeyType::GroupsPerUserQuota;
          }
          else if (hashCode == SigningCertificatesPerUserQuota_HASH)
          {
            return SummaryKeyType::SigningCertificatesPerUserQuota;
          }
          else if (hashCode == AccessKeysPerUserQuota_HASH)
          {
            return SummaryKeyType::AccessKeysPerUserQuota;
          }
          else if (hashCode == MFADevices_HASH)
          {
            return SummaryKeyType::MFADevices;
          }
          else if (hashCode == MFADevicesInUse_HASH)
          {
            return SummaryKeyType::MFADevicesInUse;
          }
          else if (hashCode == AccountMFAEnabled_HASH)
          {
            return SummaryKeyType::AccountMFAEnabled;
          }
          else if (hashCode == AccountAccessKeysPresent_HASH)
          {
            return SummaryKeyType::AccountAccessKeysPresent;
          }
          else if (hashCode == AccountSigningCertificatesPresent_HASH)
          {
            return SummaryKeyType::AccountSigningCertificatesPresent;
          }
          else if (hashCode == AttachedPoliciesPerGroupQuota_HASH)
          {
            return SummaryKeyType::AttachedPoliciesPerGroupQuota;
          }
          else if (hashCode == AttachedPoliciesPerRoleQuota_HASH)
          {
            return SummaryKeyType::AttachedPoliciesPerRoleQuota;
          }
          else if (hashCode == AttachedPoliciesPerUserQuota_HASH)
          {
            return SummaryKeyType::AttachedPoliciesPerUserQuota;
          }
          else if (hashCode == Policies_HASH)
          {
            return SummaryKeyType::Policies;
          }
          else if (hashCode == PoliciesQuota_HASH)
          {
            return SummaryKeyType::PoliciesQuota;
          }
          else if (hashCode == PolicySizeQuota_HASH)
          {
            return SummaryKeyType::PolicySizeQuota;
          }
          else if (hashCode == PolicyVersionsInUse_HASH)
          {
            return SummaryKeyType::PolicyVersionsInUse;
          }
          else if (hashCode == PolicyVersionsInUseQuota_HASH)
          {
            return SummaryKeyType::PolicyVersionsInUseQuota;
          }
          else if (hashCode == VersionsPerPolicyQuota_HASH)
          {
            return SummaryKeyType::VersionsPerPolicyQuota;
          }
          else if (hashCode == GlobalEndpointTokenVersion_HASH)
          {
            return SummaryKeyType::GlobalEndpointTokenVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SummaryKeyType>(hashCode);
          }

          return SummaryKeyType::NOT_SET;
        }

        Aws::String GetNameForSummaryKeyType(SummaryKeyType enumValue)
        {
          switch(enumValue)
          {
          case SummaryKeyType::NOT_SET:
            return {};
          case SummaryKeyType::Users:
            return "Users";
          case SummaryKeyType::UsersQuota:
            return "UsersQuota";
          case SummaryKeyType::Groups:
            return "Groups";
          case SummaryKeyType::GroupsQuota:
            return "GroupsQuota";
          case SummaryKeyType::ServerCertificates:
            return "ServerCertificates";
          case SummaryKeyType::ServerCertificatesQuota:
            return "ServerCertificatesQuota";
          case SummaryKeyType::UserPolicySizeQuota:
            return "UserPolicySizeQuota";
          case SummaryKeyType::GroupPolicySizeQuota:
            return "GroupPolicySizeQuota";
          case SummaryKeyType::GroupsPerUserQuota:
            return "GroupsPerUserQuota";
          case SummaryKeyType::SigningCertificatesPerUserQuota:
            return "SigningCertificatesPerUserQuota";
          case SummaryKeyType::AccessKeysPerUserQuota:
            return "AccessKeysPerUserQuota";
          case SummaryKeyType::MFADevices:
            return "MFADevices";
          case SummaryKeyType::MFADevicesInUse:
            return "MFADevicesInUse";
          case SummaryKeyType::AccountMFAEnabled:
            return "AccountMFAEnabled";
          case SummaryKeyType::AccountAccessKeysPresent:
            return "AccountAccessKeysPresent";
          case SummaryKeyType::AccountSigningCertificatesPresent:
            return "AccountSigningCertificatesPresent";
          case SummaryKeyType::AttachedPoliciesPerGroupQuota:
            return "AttachedPoliciesPerGroupQuota";
          case SummaryKeyType::AttachedPoliciesPerRoleQuota:
            return "AttachedPoliciesPerRoleQuota";
          case SummaryKeyType::AttachedPoliciesPerUserQuota:
            return "AttachedPoliciesPerUserQuota";
          case SummaryKeyType::Policies:
            return "Policies";
          case SummaryKeyType::PoliciesQuota:
            return "PoliciesQuota";
          case SummaryKeyType::PolicySizeQuota:
            return "PolicySizeQuota";
          case SummaryKeyType::PolicyVersionsInUse:
            return "PolicyVersionsInUse";
          case SummaryKeyType::PolicyVersionsInUseQuota:
            return "PolicyVersionsInUseQuota";
          case SummaryKeyType::VersionsPerPolicyQuota:
            return "VersionsPerPolicyQuota";
          case SummaryKeyType::GlobalEndpointTokenVersion:
            return "GlobalEndpointTokenVersion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SummaryKeyTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
