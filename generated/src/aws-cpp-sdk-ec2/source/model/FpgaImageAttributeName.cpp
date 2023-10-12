/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FpgaImageAttributeName.h>
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
      namespace FpgaImageAttributeNameMapper
      {

        static constexpr uint32_t description_HASH = ConstExprHashingUtils::HashString("description");
        static constexpr uint32_t name_HASH = ConstExprHashingUtils::HashString("name");
        static constexpr uint32_t loadPermission_HASH = ConstExprHashingUtils::HashString("loadPermission");
        static constexpr uint32_t productCodes_HASH = ConstExprHashingUtils::HashString("productCodes");


        FpgaImageAttributeName GetFpgaImageAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == description_HASH)
          {
            return FpgaImageAttributeName::description;
          }
          else if (hashCode == name_HASH)
          {
            return FpgaImageAttributeName::name;
          }
          else if (hashCode == loadPermission_HASH)
          {
            return FpgaImageAttributeName::loadPermission;
          }
          else if (hashCode == productCodes_HASH)
          {
            return FpgaImageAttributeName::productCodes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FpgaImageAttributeName>(hashCode);
          }

          return FpgaImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForFpgaImageAttributeName(FpgaImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case FpgaImageAttributeName::NOT_SET:
            return {};
          case FpgaImageAttributeName::description:
            return "description";
          case FpgaImageAttributeName::name:
            return "name";
          case FpgaImageAttributeName::loadPermission:
            return "loadPermission";
          case FpgaImageAttributeName::productCodes:
            return "productCodes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FpgaImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
