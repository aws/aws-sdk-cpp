/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransferType.h>
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
      namespace TransferTypeMapper
      {

        static const int time_based_HASH = HashingUtils::HashString("time-based");
        static const int standard_HASH = HashingUtils::HashString("standard");


        TransferType GetTransferTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == time_based_HASH)
          {
            return TransferType::time_based;
          }
          else if (hashCode == standard_HASH)
          {
            return TransferType::standard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransferType>(hashCode);
          }

          return TransferType::NOT_SET;
        }

        Aws::String GetNameForTransferType(TransferType enumValue)
        {
          switch(enumValue)
          {
          case TransferType::NOT_SET:
            return {};
          case TransferType::time_based:
            return "time-based";
          case TransferType::standard:
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

      } // namespace TransferTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
