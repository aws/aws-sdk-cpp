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
#include <aws/ds/model/TrustDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace TrustDirectionMapper
      {

        static const int One_Way_Outgoing_HASH = HashingUtils::HashString("One-Way: Outgoing");
        static const int One_Way_Incoming_HASH = HashingUtils::HashString("One-Way: Incoming");
        static const int Two_Way_HASH = HashingUtils::HashString("Two-Way");


        TrustDirection GetTrustDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == One_Way_Outgoing_HASH)
          {
            return TrustDirection::One_Way_Outgoing;
          }
          else if (hashCode == One_Way_Incoming_HASH)
          {
            return TrustDirection::One_Way_Incoming;
          }
          else if (hashCode == Two_Way_HASH)
          {
            return TrustDirection::Two_Way;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustDirection>(hashCode);
          }

          return TrustDirection::NOT_SET;
        }

        Aws::String GetNameForTrustDirection(TrustDirection enumValue)
        {
          switch(enumValue)
          {
          case TrustDirection::One_Way_Outgoing:
            return "One-Way: Outgoing";
          case TrustDirection::One_Way_Incoming:
            return "One-Way: Incoming";
          case TrustDirection::Two_Way:
            return "Two-Way";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TrustDirectionMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
