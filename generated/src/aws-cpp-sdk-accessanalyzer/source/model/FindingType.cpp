/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace FindingTypeMapper
      {

        static const int ExternalAccess_HASH = HashingUtils::HashString("ExternalAccess");
        static const int UnusedIAMRole_HASH = HashingUtils::HashString("UnusedIAMRole");
        static const int UnusedIAMUserAccessKey_HASH = HashingUtils::HashString("UnusedIAMUserAccessKey");
        static const int UnusedIAMUserPassword_HASH = HashingUtils::HashString("UnusedIAMUserPassword");
        static const int UnusedPermission_HASH = HashingUtils::HashString("UnusedPermission");


        FindingType GetFindingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExternalAccess_HASH)
          {
            return FindingType::ExternalAccess;
          }
          else if (hashCode == UnusedIAMRole_HASH)
          {
            return FindingType::UnusedIAMRole;
          }
          else if (hashCode == UnusedIAMUserAccessKey_HASH)
          {
            return FindingType::UnusedIAMUserAccessKey;
          }
          else if (hashCode == UnusedIAMUserPassword_HASH)
          {
            return FindingType::UnusedIAMUserPassword;
          }
          else if (hashCode == UnusedPermission_HASH)
          {
            return FindingType::UnusedPermission;
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
          case FindingType::NOT_SET:
            return {};
          case FindingType::ExternalAccess:
            return "ExternalAccess";
          case FindingType::UnusedIAMRole:
            return "UnusedIAMRole";
          case FindingType::UnusedIAMUserAccessKey:
            return "UnusedIAMUserAccessKey";
          case FindingType::UnusedIAMUserPassword:
            return "UnusedIAMUserPassword";
          case FindingType::UnusedPermission:
            return "UnusedPermission";
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
  } // namespace AccessAnalyzer
} // namespace Aws
