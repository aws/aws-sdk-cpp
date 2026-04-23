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

#include <aws/gamelift/model/AcceptanceType.h>
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
      namespace AcceptanceTypeMapper
      {

        static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");


        AcceptanceType GetAcceptanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_HASH)
          {
            return AcceptanceType::ACCEPT;
          }
          else if (hashCode == REJECT_HASH)
          {
            return AcceptanceType::REJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptanceType>(hashCode);
          }

          return AcceptanceType::NOT_SET;
        }

        Aws::String GetNameForAcceptanceType(AcceptanceType enumValue)
        {
          switch(enumValue)
          {
          case AcceptanceType::ACCEPT:
            return "ACCEPT";
          case AcceptanceType::REJECT:
            return "REJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptanceTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
