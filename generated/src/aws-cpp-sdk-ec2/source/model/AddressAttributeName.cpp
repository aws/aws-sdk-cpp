/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AddressAttributeName.h>
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
      namespace AddressAttributeNameMapper
      {

        static const int domain_name_HASH = HashingUtils::HashString("domain-name");


        AddressAttributeName GetAddressAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == domain_name_HASH)
          {
            return AddressAttributeName::domain_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddressAttributeName>(hashCode);
          }

          return AddressAttributeName::NOT_SET;
        }

        Aws::String GetNameForAddressAttributeName(AddressAttributeName enumValue)
        {
          switch(enumValue)
          {
          case AddressAttributeName::NOT_SET:
            return {};
          case AddressAttributeName::domain_name:
            return "domain-name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddressAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
