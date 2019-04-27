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

#include <aws/worklink/model/DomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkLink
  {
    namespace Model
    {
      namespace DomainStatusMapper
      {

        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
        static const int DISASSOCIATED_HASH = HashingUtils::HashString("DISASSOCIATED");
        static const int FAILED_TO_ASSOCIATE_HASH = HashingUtils::HashString("FAILED_TO_ASSOCIATE");
        static const int FAILED_TO_DISASSOCIATE_HASH = HashingUtils::HashString("FAILED_TO_DISASSOCIATE");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return DomainStatus::PENDING_VALIDATION;
          }
          else if (hashCode == ASSOCIATING_HASH)
          {
            return DomainStatus::ASSOCIATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DomainStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return DomainStatus::INACTIVE;
          }
          else if (hashCode == DISASSOCIATING_HASH)
          {
            return DomainStatus::DISASSOCIATING;
          }
          else if (hashCode == DISASSOCIATED_HASH)
          {
            return DomainStatus::DISASSOCIATED;
          }
          else if (hashCode == FAILED_TO_ASSOCIATE_HASH)
          {
            return DomainStatus::FAILED_TO_ASSOCIATE;
          }
          else if (hashCode == FAILED_TO_DISASSOCIATE_HASH)
          {
            return DomainStatus::FAILED_TO_DISASSOCIATE;
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
          case DomainStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case DomainStatus::ASSOCIATING:
            return "ASSOCIATING";
          case DomainStatus::ACTIVE:
            return "ACTIVE";
          case DomainStatus::INACTIVE:
            return "INACTIVE";
          case DomainStatus::DISASSOCIATING:
            return "DISASSOCIATING";
          case DomainStatus::DISASSOCIATED:
            return "DISASSOCIATED";
          case DomainStatus::FAILED_TO_ASSOCIATE:
            return "FAILED_TO_ASSOCIATE";
          case DomainStatus::FAILED_TO_DISASSOCIATE:
            return "FAILED_TO_DISASSOCIATE";
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
  } // namespace WorkLink
} // namespace Aws
