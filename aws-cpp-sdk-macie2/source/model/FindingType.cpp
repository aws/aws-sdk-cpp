/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/FindingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace FindingTypeMapper
      {

        static const int SensitiveData_S3Object_Multiple_HASH = HashingUtils::HashString("SensitiveData:S3Object/Multiple");
        static const int SensitiveData_S3Object_Financial_HASH = HashingUtils::HashString("SensitiveData:S3Object/Financial");
        static const int SensitiveData_S3Object_Personal_HASH = HashingUtils::HashString("SensitiveData:S3Object/Personal");
        static const int SensitiveData_S3Object_Credentials_HASH = HashingUtils::HashString("SensitiveData:S3Object/Credentials");
        static const int SensitiveData_S3Object_CustomIdentifier_HASH = HashingUtils::HashString("SensitiveData:S3Object/CustomIdentifier");
        static const int Policy_IAMUser_S3BucketPublic_HASH = HashingUtils::HashString("Policy:IAMUser/S3BucketPublic");
        static const int Policy_IAMUser_S3BucketSharedExternally_HASH = HashingUtils::HashString("Policy:IAMUser/S3BucketSharedExternally");
        static const int Policy_IAMUser_S3BucketReplicatedExternally_HASH = HashingUtils::HashString("Policy:IAMUser/S3BucketReplicatedExternally");
        static const int Policy_IAMUser_S3BucketEncryptionDisabled_HASH = HashingUtils::HashString("Policy:IAMUser/S3BucketEncryptionDisabled");
        static const int Policy_IAMUser_S3BlockPublicAccessDisabled_HASH = HashingUtils::HashString("Policy:IAMUser/S3BlockPublicAccessDisabled");


        FindingType GetFindingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SensitiveData_S3Object_Multiple_HASH)
          {
            return FindingType::SensitiveData_S3Object_Multiple;
          }
          else if (hashCode == SensitiveData_S3Object_Financial_HASH)
          {
            return FindingType::SensitiveData_S3Object_Financial;
          }
          else if (hashCode == SensitiveData_S3Object_Personal_HASH)
          {
            return FindingType::SensitiveData_S3Object_Personal;
          }
          else if (hashCode == SensitiveData_S3Object_Credentials_HASH)
          {
            return FindingType::SensitiveData_S3Object_Credentials;
          }
          else if (hashCode == SensitiveData_S3Object_CustomIdentifier_HASH)
          {
            return FindingType::SensitiveData_S3Object_CustomIdentifier;
          }
          else if (hashCode == Policy_IAMUser_S3BucketPublic_HASH)
          {
            return FindingType::Policy_IAMUser_S3BucketPublic;
          }
          else if (hashCode == Policy_IAMUser_S3BucketSharedExternally_HASH)
          {
            return FindingType::Policy_IAMUser_S3BucketSharedExternally;
          }
          else if (hashCode == Policy_IAMUser_S3BucketReplicatedExternally_HASH)
          {
            return FindingType::Policy_IAMUser_S3BucketReplicatedExternally;
          }
          else if (hashCode == Policy_IAMUser_S3BucketEncryptionDisabled_HASH)
          {
            return FindingType::Policy_IAMUser_S3BucketEncryptionDisabled;
          }
          else if (hashCode == Policy_IAMUser_S3BlockPublicAccessDisabled_HASH)
          {
            return FindingType::Policy_IAMUser_S3BlockPublicAccessDisabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingType>(hashCode);
          }

          return FindingType::NOT_SET;
        }

        Aws::String GetNameForFindingType(FindingType enumValue)
        {
          switch(enumValue)
          {
          case FindingType::SensitiveData_S3Object_Multiple:
            return "SensitiveData:S3Object/Multiple";
          case FindingType::SensitiveData_S3Object_Financial:
            return "SensitiveData:S3Object/Financial";
          case FindingType::SensitiveData_S3Object_Personal:
            return "SensitiveData:S3Object/Personal";
          case FindingType::SensitiveData_S3Object_Credentials:
            return "SensitiveData:S3Object/Credentials";
          case FindingType::SensitiveData_S3Object_CustomIdentifier:
            return "SensitiveData:S3Object/CustomIdentifier";
          case FindingType::Policy_IAMUser_S3BucketPublic:
            return "Policy:IAMUser/S3BucketPublic";
          case FindingType::Policy_IAMUser_S3BucketSharedExternally:
            return "Policy:IAMUser/S3BucketSharedExternally";
          case FindingType::Policy_IAMUser_S3BucketReplicatedExternally:
            return "Policy:IAMUser/S3BucketReplicatedExternally";
          case FindingType::Policy_IAMUser_S3BucketEncryptionDisabled:
            return "Policy:IAMUser/S3BucketEncryptionDisabled";
          case FindingType::Policy_IAMUser_S3BlockPublicAccessDisabled:
            return "Policy:IAMUser/S3BlockPublicAccessDisabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
