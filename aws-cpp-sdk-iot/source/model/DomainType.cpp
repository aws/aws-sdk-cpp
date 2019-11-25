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

#include <aws/iot/model/DomainType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DomainTypeMapper
      {

        static const int ENDPOINT_HASH = HashingUtils::HashString("ENDPOINT");
        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
        static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");


        DomainType GetDomainTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENDPOINT_HASH)
          {
            return DomainType::ENDPOINT;
          }
          else if (hashCode == AWS_MANAGED_HASH)
          {
            return DomainType::AWS_MANAGED;
          }
          else if (hashCode == CUSTOMER_MANAGED_HASH)
          {
            return DomainType::CUSTOMER_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainType>(hashCode);
          }

          return DomainType::NOT_SET;
        }

        Aws::String GetNameForDomainType(DomainType enumValue)
        {
          switch(enumValue)
          {
          case DomainType::ENDPOINT:
            return "ENDPOINT";
          case DomainType::AWS_MANAGED:
            return "AWS_MANAGED";
          case DomainType::CUSTOMER_MANAGED:
            return "CUSTOMER_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
