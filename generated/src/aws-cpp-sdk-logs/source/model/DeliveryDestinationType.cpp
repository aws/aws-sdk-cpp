/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeliveryDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace DeliveryDestinationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int CWL_HASH = HashingUtils::HashString("CWL");
        static const int FH_HASH = HashingUtils::HashString("FH");


        DeliveryDestinationType GetDeliveryDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return DeliveryDestinationType::S3;
          }
          else if (hashCode == CWL_HASH)
          {
            return DeliveryDestinationType::CWL;
          }
          else if (hashCode == FH_HASH)
          {
            return DeliveryDestinationType::FH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryDestinationType>(hashCode);
          }

          return DeliveryDestinationType::NOT_SET;
        }

        Aws::String GetNameForDeliveryDestinationType(DeliveryDestinationType enumValue)
        {
          switch(enumValue)
          {
          case DeliveryDestinationType::NOT_SET:
            return {};
          case DeliveryDestinationType::S3:
            return "S3";
          case DeliveryDestinationType::CWL:
            return "CWL";
          case DeliveryDestinationType::FH:
            return "FH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryDestinationTypeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
