/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorSessionField.h>
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
      namespace TrafficMirrorSessionFieldMapper
      {

        static constexpr uint32_t packet_length_HASH = ConstExprHashingUtils::HashString("packet-length");
        static constexpr uint32_t description_HASH = ConstExprHashingUtils::HashString("description");
        static constexpr uint32_t virtual_network_id_HASH = ConstExprHashingUtils::HashString("virtual-network-id");


        TrafficMirrorSessionField GetTrafficMirrorSessionFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == packet_length_HASH)
          {
            return TrafficMirrorSessionField::packet_length;
          }
          else if (hashCode == description_HASH)
          {
            return TrafficMirrorSessionField::description;
          }
          else if (hashCode == virtual_network_id_HASH)
          {
            return TrafficMirrorSessionField::virtual_network_id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficMirrorSessionField>(hashCode);
          }

          return TrafficMirrorSessionField::NOT_SET;
        }

        Aws::String GetNameForTrafficMirrorSessionField(TrafficMirrorSessionField enumValue)
        {
          switch(enumValue)
          {
          case TrafficMirrorSessionField::NOT_SET:
            return {};
          case TrafficMirrorSessionField::packet_length:
            return "packet-length";
          case TrafficMirrorSessionField::description:
            return "description";
          case TrafficMirrorSessionField::virtual_network_id:
            return "virtual-network-id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficMirrorSessionFieldMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
