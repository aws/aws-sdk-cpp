/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NodeDataEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace NodeDataEncodingMapper
      {

        static const int BINARY_HASH = HashingUtils::HashString("BINARY");
        static const int TYPED_HASH = HashingUtils::HashString("TYPED");


        NodeDataEncoding GetNodeDataEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BINARY_HASH)
          {
            return NodeDataEncoding::BINARY;
          }
          else if (hashCode == TYPED_HASH)
          {
            return NodeDataEncoding::TYPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeDataEncoding>(hashCode);
          }

          return NodeDataEncoding::NOT_SET;
        }

        Aws::String GetNameForNodeDataEncoding(NodeDataEncoding enumValue)
        {
          switch(enumValue)
          {
          case NodeDataEncoding::NOT_SET:
            return {};
          case NodeDataEncoding::BINARY:
            return "BINARY";
          case NodeDataEncoding::TYPED:
            return "TYPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeDataEncodingMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
