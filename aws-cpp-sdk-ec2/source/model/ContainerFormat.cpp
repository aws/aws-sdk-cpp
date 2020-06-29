/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ContainerFormat.h>
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
      namespace ContainerFormatMapper
      {

        static const int ova_HASH = HashingUtils::HashString("ova");


        ContainerFormat GetContainerFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ova_HASH)
          {
            return ContainerFormat::ova;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFormat>(hashCode);
          }

          return ContainerFormat::NOT_SET;
        }

        Aws::String GetNameForContainerFormat(ContainerFormat enumValue)
        {
          switch(enumValue)
          {
          case ContainerFormat::ova:
            return "ova";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerFormatMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
