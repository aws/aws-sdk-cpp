/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/NodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace NodeTypeMapper
      {

        static constexpr uint32_t BROKER_HASH = ConstExprHashingUtils::HashString("BROKER");


        NodeType GetNodeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BROKER_HASH)
          {
            return NodeType::BROKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeType>(hashCode);
          }

          return NodeType::NOT_SET;
        }

        Aws::String GetNameForNodeType(NodeType enumValue)
        {
          switch(enumValue)
          {
          case NodeType::NOT_SET:
            return {};
          case NodeType::BROKER:
            return "BROKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeTypeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
