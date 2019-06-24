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

#include <aws/apigateway/model/DomainNameStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace DomainNameStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        DomainNameStatus GetDomainNameStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return DomainNameStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DomainNameStatus::UPDATING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DomainNameStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainNameStatus>(hashCode);
          }

          return DomainNameStatus::NOT_SET;
        }

        Aws::String GetNameForDomainNameStatus(DomainNameStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainNameStatus::AVAILABLE:
            return "AVAILABLE";
          case DomainNameStatus::UPDATING:
            return "UPDATING";
          case DomainNameStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainNameStatusMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
