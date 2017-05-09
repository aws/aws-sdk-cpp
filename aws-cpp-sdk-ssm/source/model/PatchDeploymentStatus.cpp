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

#include <aws/ssm/model/PatchDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchDeploymentStatusMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
        static const int EXPLICIT_APPROVED_HASH = HashingUtils::HashString("EXPLICIT_APPROVED");
        static const int EXPLICIT_REJECTED_HASH = HashingUtils::HashString("EXPLICIT_REJECTED");


        PatchDeploymentStatus GetPatchDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return PatchDeploymentStatus::APPROVED;
          }
          else if (hashCode == PENDING_APPROVAL_HASH)
          {
            return PatchDeploymentStatus::PENDING_APPROVAL;
          }
          else if (hashCode == EXPLICIT_APPROVED_HASH)
          {
            return PatchDeploymentStatus::EXPLICIT_APPROVED;
          }
          else if (hashCode == EXPLICIT_REJECTED_HASH)
          {
            return PatchDeploymentStatus::EXPLICIT_REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchDeploymentStatus>(hashCode);
          }

          return PatchDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForPatchDeploymentStatus(PatchDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case PatchDeploymentStatus::APPROVED:
            return "APPROVED";
          case PatchDeploymentStatus::PENDING_APPROVAL:
            return "PENDING_APPROVAL";
          case PatchDeploymentStatus::EXPLICIT_APPROVED:
            return "EXPLICIT_APPROVED";
          case PatchDeploymentStatus::EXPLICIT_REJECTED:
            return "EXPLICIT_REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PatchDeploymentStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
