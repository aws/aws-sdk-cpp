/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace DestinationTypeMapper
      {

        static const int EVENT_DATA_STORE_HASH = HashingUtils::HashString("EVENT_DATA_STORE");
        static const int AWS_SERVICE_HASH = HashingUtils::HashString("AWS_SERVICE");


        DestinationType GetDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_DATA_STORE_HASH)
          {
            return DestinationType::EVENT_DATA_STORE;
          }
          else if (hashCode == AWS_SERVICE_HASH)
          {
            return DestinationType::AWS_SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationType>(hashCode);
          }

          return DestinationType::NOT_SET;
        }

        Aws::String GetNameForDestinationType(DestinationType enumValue)
        {
          switch(enumValue)
          {
          case DestinationType::EVENT_DATA_STORE:
            return "EVENT_DATA_STORE";
          case DestinationType::AWS_SERVICE:
            return "AWS_SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationTypeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
