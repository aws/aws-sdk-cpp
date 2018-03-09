﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/PrincipalType.h>
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
      namespace PrincipalTypeMapper
      {

        static const int All_HASH = HashingUtils::HashString("All");
        static const int Service_HASH = HashingUtils::HashString("Service");
        static const int OrganizationUnit_HASH = HashingUtils::HashString("OrganizationUnit");
        static const int Account_HASH = HashingUtils::HashString("Account");
        static const int User_HASH = HashingUtils::HashString("User");
        static const int Role_HASH = HashingUtils::HashString("Role");


        PrincipalType GetPrincipalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return PrincipalType::All;
          }
          else if (hashCode == Service_HASH)
          {
            return PrincipalType::Service;
          }
          else if (hashCode == OrganizationUnit_HASH)
          {
            return PrincipalType::OrganizationUnit;
          }
          else if (hashCode == Account_HASH)
          {
            return PrincipalType::Account;
          }
          else if (hashCode == User_HASH)
          {
            return PrincipalType::User;
          }
          else if (hashCode == Role_HASH)
          {
            return PrincipalType::Role;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrincipalType>(hashCode);
          }

          return PrincipalType::NOT_SET;
        }

        Aws::String GetNameForPrincipalType(PrincipalType enumValue)
        {
          switch(enumValue)
          {
          case PrincipalType::All:
            return "All";
          case PrincipalType::Service:
            return "Service";
          case PrincipalType::OrganizationUnit:
            return "OrganizationUnit";
          case PrincipalType::Account:
            return "Account";
          case PrincipalType::User:
            return "User";
          case PrincipalType::Role:
            return "Role";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PrincipalTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
