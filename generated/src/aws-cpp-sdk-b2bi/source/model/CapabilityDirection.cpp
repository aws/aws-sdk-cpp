/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CapabilityDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace CapabilityDirectionMapper
      {

        static const int INBOUND_HASH = HashingUtils::HashString("INBOUND");
        static const int OUTBOUND_HASH = HashingUtils::HashString("OUTBOUND");


        CapabilityDirection GetCapabilityDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOUND_HASH)
          {
            return CapabilityDirection::INBOUND;
          }
          else if (hashCode == OUTBOUND_HASH)
          {
            return CapabilityDirection::OUTBOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapabilityDirection>(hashCode);
          }

          return CapabilityDirection::NOT_SET;
        }

        Aws::String GetNameForCapabilityDirection(CapabilityDirection enumValue)
        {
          switch(enumValue)
          {
          case CapabilityDirection::NOT_SET:
            return {};
          case CapabilityDirection::INBOUND:
            return "INBOUND";
          case CapabilityDirection::OUTBOUND:
            return "OUTBOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilityDirectionMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
