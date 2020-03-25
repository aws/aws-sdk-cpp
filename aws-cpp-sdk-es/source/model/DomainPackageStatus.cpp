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

#include <aws/es/model/DomainPackageStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace DomainPackageStatusMapper
      {

        static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
        static const int ASSOCIATION_FAILED_HASH = HashingUtils::HashString("ASSOCIATION_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DISSOCIATING_HASH = HashingUtils::HashString("DISSOCIATING");
        static const int DISSOCIATION_FAILED_HASH = HashingUtils::HashString("DISSOCIATION_FAILED");


        DomainPackageStatus GetDomainPackageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATING_HASH)
          {
            return DomainPackageStatus::ASSOCIATING;
          }
          else if (hashCode == ASSOCIATION_FAILED_HASH)
          {
            return DomainPackageStatus::ASSOCIATION_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DomainPackageStatus::ACTIVE;
          }
          else if (hashCode == DISSOCIATING_HASH)
          {
            return DomainPackageStatus::DISSOCIATING;
          }
          else if (hashCode == DISSOCIATION_FAILED_HASH)
          {
            return DomainPackageStatus::DISSOCIATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainPackageStatus>(hashCode);
          }

          return DomainPackageStatus::NOT_SET;
        }

        Aws::String GetNameForDomainPackageStatus(DomainPackageStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainPackageStatus::ASSOCIATING:
            return "ASSOCIATING";
          case DomainPackageStatus::ASSOCIATION_FAILED:
            return "ASSOCIATION_FAILED";
          case DomainPackageStatus::ACTIVE:
            return "ACTIVE";
          case DomainPackageStatus::DISSOCIATING:
            return "DISSOCIATING";
          case DomainPackageStatus::DISSOCIATION_FAILED:
            return "DISSOCIATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainPackageStatusMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
