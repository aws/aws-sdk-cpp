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
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ProtectionPolicyMapper
      {

        static const int NoProtection_HASH = HashingUtils::HashString("NoProtection");
        static const int FullProtection_HASH = HashingUtils::HashString("FullProtection");


        ProtectionPolicy GetProtectionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoProtection_HASH)
          {
            return ProtectionPolicy::NoProtection;
          }
          else if (hashCode == FullProtection_HASH)
          {
            return ProtectionPolicy::FullProtection;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectionPolicy>(hashCode);
          }

          return ProtectionPolicy::NOT_SET;
        }

        Aws::String GetNameForProtectionPolicy(ProtectionPolicy enumValue)
        {
          switch(enumValue)
          {
          case ProtectionPolicy::NoProtection:
            return "NoProtection";
          case ProtectionPolicy::FullProtection:
            return "FullProtection";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProtectionPolicyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
