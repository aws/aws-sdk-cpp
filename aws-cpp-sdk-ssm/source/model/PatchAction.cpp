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

#include <aws/ssm/model/PatchAction.h>
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
      namespace PatchActionMapper
      {

        static const int ALLOW_AS_DEPENDENCY_HASH = HashingUtils::HashString("ALLOW_AS_DEPENDENCY");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");


        PatchAction GetPatchActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_AS_DEPENDENCY_HASH)
          {
            return PatchAction::ALLOW_AS_DEPENDENCY;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return PatchAction::BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchAction>(hashCode);
          }

          return PatchAction::NOT_SET;
        }

        Aws::String GetNameForPatchAction(PatchAction enumValue)
        {
          switch(enumValue)
          {
          case PatchAction::ALLOW_AS_DEPENDENCY:
            return "ALLOW_AS_DEPENDENCY";
          case PatchAction::BLOCK:
            return "BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchActionMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
