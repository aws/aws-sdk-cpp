/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace ChangeTypeMapper
      {

        static const int CORE_NETWORK_SEGMENT_HASH = HashingUtils::HashString("CORE_NETWORK_SEGMENT");
        static const int CORE_NETWORK_EDGE_HASH = HashingUtils::HashString("CORE_NETWORK_EDGE");
        static const int ATTACHMENT_MAPPING_HASH = HashingUtils::HashString("ATTACHMENT_MAPPING");
        static const int ATTACHMENT_ROUTE_PROPAGATION_HASH = HashingUtils::HashString("ATTACHMENT_ROUTE_PROPAGATION");
        static const int ATTACHMENT_ROUTE_STATIC_HASH = HashingUtils::HashString("ATTACHMENT_ROUTE_STATIC");


        ChangeType GetChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CORE_NETWORK_SEGMENT_HASH)
          {
            return ChangeType::CORE_NETWORK_SEGMENT;
          }
          else if (hashCode == CORE_NETWORK_EDGE_HASH)
          {
            return ChangeType::CORE_NETWORK_EDGE;
          }
          else if (hashCode == ATTACHMENT_MAPPING_HASH)
          {
            return ChangeType::ATTACHMENT_MAPPING;
          }
          else if (hashCode == ATTACHMENT_ROUTE_PROPAGATION_HASH)
          {
            return ChangeType::ATTACHMENT_ROUTE_PROPAGATION;
          }
          else if (hashCode == ATTACHMENT_ROUTE_STATIC_HASH)
          {
            return ChangeType::ATTACHMENT_ROUTE_STATIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeType>(hashCode);
          }

          return ChangeType::NOT_SET;
        }

        Aws::String GetNameForChangeType(ChangeType enumValue)
        {
          switch(enumValue)
          {
          case ChangeType::CORE_NETWORK_SEGMENT:
            return "CORE_NETWORK_SEGMENT";
          case ChangeType::CORE_NETWORK_EDGE:
            return "CORE_NETWORK_EDGE";
          case ChangeType::ATTACHMENT_MAPPING:
            return "ATTACHMENT_MAPPING";
          case ChangeType::ATTACHMENT_ROUTE_PROPAGATION:
            return "ATTACHMENT_ROUTE_PROPAGATION";
          case ChangeType::ATTACHMENT_ROUTE_STATIC:
            return "ATTACHMENT_ROUTE_STATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeTypeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
