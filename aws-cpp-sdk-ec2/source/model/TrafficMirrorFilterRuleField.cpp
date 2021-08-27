/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorFilterRuleField.h>
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
      namespace TrafficMirrorFilterRuleFieldMapper
      {

        static const int destination_port_range_HASH = HashingUtils::HashString("destination-port-range");
        static const int source_port_range_HASH = HashingUtils::HashString("source-port-range");
        static const int protocol_HASH = HashingUtils::HashString("protocol");
        static const int description_HASH = HashingUtils::HashString("description");


        TrafficMirrorFilterRuleField GetTrafficMirrorFilterRuleFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == destination_port_range_HASH)
          {
            return TrafficMirrorFilterRuleField::destination_port_range;
          }
          else if (hashCode == source_port_range_HASH)
          {
            return TrafficMirrorFilterRuleField::source_port_range;
          }
          else if (hashCode == protocol_HASH)
          {
            return TrafficMirrorFilterRuleField::protocol;
          }
          else if (hashCode == description_HASH)
          {
            return TrafficMirrorFilterRuleField::description;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficMirrorFilterRuleField>(hashCode);
          }

          return TrafficMirrorFilterRuleField::NOT_SET;
        }

        Aws::String GetNameForTrafficMirrorFilterRuleField(TrafficMirrorFilterRuleField enumValue)
        {
          switch(enumValue)
          {
          case TrafficMirrorFilterRuleField::destination_port_range:
            return "destination-port-range";
          case TrafficMirrorFilterRuleField::source_port_range:
            return "source-port-range";
          case TrafficMirrorFilterRuleField::protocol:
            return "protocol";
          case TrafficMirrorFilterRuleField::description:
            return "description";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficMirrorFilterRuleFieldMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
