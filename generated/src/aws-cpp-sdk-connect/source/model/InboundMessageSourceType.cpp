/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InboundMessageSourceType.h>
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
      namespace InboundMessageSourceTypeMapper
      {

        static const int RAW_HASH = HashingUtils::HashString("RAW");


        InboundMessageSourceType GetInboundMessageSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RAW_HASH)
          {
            return InboundMessageSourceType::RAW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InboundMessageSourceType>(hashCode);
          }

          return InboundMessageSourceType::NOT_SET;
        }

        Aws::String GetNameForInboundMessageSourceType(InboundMessageSourceType enumValue)
        {
          switch(enumValue)
          {
          case InboundMessageSourceType::NOT_SET:
            return {};
          case InboundMessageSourceType::RAW:
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

      } // namespace InboundMessageSourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
