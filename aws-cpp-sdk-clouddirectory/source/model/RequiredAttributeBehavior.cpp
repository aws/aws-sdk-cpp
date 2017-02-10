/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/RequiredAttributeBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace RequiredAttributeBehaviorMapper
      {

        static const int REQUIRED_ALWAYS_HASH = HashingUtils::HashString("REQUIRED_ALWAYS");
        static const int NOT_REQUIRED_HASH = HashingUtils::HashString("NOT_REQUIRED");


        RequiredAttributeBehavior GetRequiredAttributeBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRED_ALWAYS_HASH)
          {
            return RequiredAttributeBehavior::REQUIRED_ALWAYS;
          }
          else if (hashCode == NOT_REQUIRED_HASH)
          {
            return RequiredAttributeBehavior::NOT_REQUIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequiredAttributeBehavior>(hashCode);
          }

          return RequiredAttributeBehavior::NOT_SET;
        }

        Aws::String GetNameForRequiredAttributeBehavior(RequiredAttributeBehavior enumValue)
        {
          switch(enumValue)
          {
          case RequiredAttributeBehavior::REQUIRED_ALWAYS:
            return "REQUIRED_ALWAYS";
          case RequiredAttributeBehavior::NOT_REQUIRED:
            return "NOT_REQUIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RequiredAttributeBehaviorMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
