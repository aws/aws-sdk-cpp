﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserImportJobStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace UserImportJobStatusTypeMapper
      {

        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Expired_HASH = HashingUtils::HashString("Expired");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");


        UserImportJobStatusType GetUserImportJobStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Created_HASH)
          {
            return UserImportJobStatusType::Created;
          }
          else if (hashCode == Pending_HASH)
          {
            return UserImportJobStatusType::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return UserImportJobStatusType::InProgress;
          }
          else if (hashCode == Stopping_HASH)
          {
            return UserImportJobStatusType::Stopping;
          }
          else if (hashCode == Expired_HASH)
          {
            return UserImportJobStatusType::Expired;
          }
          else if (hashCode == Stopped_HASH)
          {
            return UserImportJobStatusType::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return UserImportJobStatusType::Failed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return UserImportJobStatusType::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserImportJobStatusType>(hashCode);
          }

          return UserImportJobStatusType::NOT_SET;
        }

        Aws::String GetNameForUserImportJobStatusType(UserImportJobStatusType enumValue)
        {
          switch(enumValue)
          {
          case UserImportJobStatusType::NOT_SET:
            return {};
          case UserImportJobStatusType::Created:
            return "Created";
          case UserImportJobStatusType::Pending:
            return "Pending";
          case UserImportJobStatusType::InProgress:
            return "InProgress";
          case UserImportJobStatusType::Stopping:
            return "Stopping";
          case UserImportJobStatusType::Expired:
            return "Expired";
          case UserImportJobStatusType::Stopped:
            return "Stopped";
          case UserImportJobStatusType::Failed:
            return "Failed";
          case UserImportJobStatusType::Succeeded:
            return "Succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserImportJobStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
