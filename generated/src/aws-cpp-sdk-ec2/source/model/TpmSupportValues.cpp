/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TpmSupportValues.h>
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
      namespace TpmSupportValuesMapper
      {

        static const int v2_0_HASH = HashingUtils::HashString("v2.0");


        TpmSupportValues GetTpmSupportValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == v2_0_HASH)
          {
            return TpmSupportValues::v2_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TpmSupportValues>(hashCode);
          }

          return TpmSupportValues::NOT_SET;
        }

        Aws::String GetNameForTpmSupportValues(TpmSupportValues enumValue)
        {
          switch(enumValue)
          {
          case TpmSupportValues::NOT_SET:
            return {};
          case TpmSupportValues::v2_0:
            return "v2.0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TpmSupportValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
