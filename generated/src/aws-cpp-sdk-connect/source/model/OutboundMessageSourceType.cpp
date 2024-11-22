/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundMessageSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace OutboundMessageSourceTypeMapper
      {

        static const int TEMPLATE_HASH = HashingUtils::HashString("TEMPLATE");
        static const int RAW_HASH = HashingUtils::HashString("RAW");


        OutboundMessageSourceType GetOutboundMessageSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEMPLATE_HASH)
          {
            return OutboundMessageSourceType::TEMPLATE;
          }
          else if (hashCode == RAW_HASH)
          {
            return OutboundMessageSourceType::RAW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutboundMessageSourceType>(hashCode);
          }

          return OutboundMessageSourceType::NOT_SET;
        }

        Aws::String GetNameForOutboundMessageSourceType(OutboundMessageSourceType enumValue)
        {
          switch(enumValue)
          {
          case OutboundMessageSourceType::NOT_SET:
            return {};
          case OutboundMessageSourceType::TEMPLATE:
            return "TEMPLATE";
          case OutboundMessageSourceType::RAW:
            return "RAW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutboundMessageSourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
