/*
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

#include <aws/amplify/model/DomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace DomainStatusMapper
      {

        static const int PENDING_VERIFICATION_HASH = HashingUtils::HashString("PENDING_VERIFICATION");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_DEPLOYMENT_HASH = HashingUtils::HashString("PENDING_DEPLOYMENT");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int REQUESTING_CERTIFICATE_HASH = HashingUtils::HashString("REQUESTING_CERTIFICATE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VERIFICATION_HASH)
          {
            return DomainStatus::PENDING_VERIFICATION;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DomainStatus::IN_PROGRESS;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DomainStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_DEPLOYMENT_HASH)
          {
            return DomainStatus::PENDING_DEPLOYMENT;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DomainStatus::FAILED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return DomainStatus::CREATING;
          }
          else if (hashCode == REQUESTING_CERTIFICATE_HASH)
          {
            return DomainStatus::REQUESTING_CERTIFICATE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DomainStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::PENDING_VERIFICATION:
            return "PENDING_VERIFICATION";
          case DomainStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DomainStatus::AVAILABLE:
            return "AVAILABLE";
          case DomainStatus::PENDING_DEPLOYMENT:
            return "PENDING_DEPLOYMENT";
          case DomainStatus::FAILED:
            return "FAILED";
          case DomainStatus::CREATING:
            return "CREATING";
          case DomainStatus::REQUESTING_CERTIFICATE:
            return "REQUESTING_CERTIFICATE";
          case DomainStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
