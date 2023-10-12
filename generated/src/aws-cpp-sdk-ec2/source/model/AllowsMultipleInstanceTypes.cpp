/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllowsMultipleInstanceTypes.h>
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
      namespace AllowsMultipleInstanceTypesMapper
      {

        static constexpr uint32_t on_HASH = ConstExprHashingUtils::HashString("on");
        static constexpr uint32_t off_HASH = ConstExprHashingUtils::HashString("off");


        AllowsMultipleInstanceTypes GetAllowsMultipleInstanceTypesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return AllowsMultipleInstanceTypes::on;
          }
          else if (hashCode == off_HASH)
          {
            return AllowsMultipleInstanceTypes::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowsMultipleInstanceTypes>(hashCode);
          }

          return AllowsMultipleInstanceTypes::NOT_SET;
        }

        Aws::String GetNameForAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes enumValue)
        {
          switch(enumValue)
          {
          case AllowsMultipleInstanceTypes::NOT_SET:
            return {};
          case AllowsMultipleInstanceTypes::on:
            return "on";
          case AllowsMultipleInstanceTypes::off:
            return "off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowsMultipleInstanceTypesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
