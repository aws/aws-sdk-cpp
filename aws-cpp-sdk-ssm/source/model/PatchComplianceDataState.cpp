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

#include <aws/ssm/model/PatchComplianceDataState.h>
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
      namespace PatchComplianceDataStateMapper
      {

        static const int INSTALLED_HASH = HashingUtils::HashString("INSTALLED");
        static const int INSTALLED_OTHER_HASH = HashingUtils::HashString("INSTALLED_OTHER");
        static const int MISSING_HASH = HashingUtils::HashString("MISSING");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PatchComplianceDataState GetPatchComplianceDataStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTALLED_HASH)
          {
            return PatchComplianceDataState::INSTALLED;
          }
          else if (hashCode == INSTALLED_OTHER_HASH)
          {
            return PatchComplianceDataState::INSTALLED_OTHER;
          }
          else if (hashCode == MISSING_HASH)
          {
            return PatchComplianceDataState::MISSING;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return PatchComplianceDataState::NOT_APPLICABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PatchComplianceDataState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchComplianceDataState>(hashCode);
          }

          return PatchComplianceDataState::NOT_SET;
        }

        Aws::String GetNameForPatchComplianceDataState(PatchComplianceDataState enumValue)
        {
          switch(enumValue)
          {
          case PatchComplianceDataState::INSTALLED:
            return "INSTALLED";
          case PatchComplianceDataState::INSTALLED_OTHER:
            return "INSTALLED_OTHER";
          case PatchComplianceDataState::MISSING:
            return "MISSING";
          case PatchComplianceDataState::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case PatchComplianceDataState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PatchComplianceDataStateMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
