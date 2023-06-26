/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DomainType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace DomainTypeMapper
      {

        static const int vpc_HASH = HashingUtils::HashString("vpc");
        static const int standard_HASH = HashingUtils::HashString("standard");


        DomainType GetDomainTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return DomainType::vpc;
          }
          else if (hashCode == standard_HASH)
          {
            return DomainType::standard;
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
          case DomainType::vpc:
            return "vpc";
          case DomainType::standard:
            return "standard";
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
  } // namespace EC2
} // namespace Aws
