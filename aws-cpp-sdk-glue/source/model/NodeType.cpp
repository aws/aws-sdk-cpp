﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/NodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace NodeTypeMapper
      {

        static const int CRAWLER_HASH = HashingUtils::HashString("CRAWLER");
        static const int JOB_HASH = HashingUtils::HashString("JOB");
        static const int TRIGGER_HASH = HashingUtils::HashString("TRIGGER");


        NodeType GetNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRAWLER_HASH)
          {
            return NodeType::CRAWLER;
          }
          else if (hashCode == JOB_HASH)
          {
            return NodeType::JOB;
          }
          else if (hashCode == TRIGGER_HASH)
          {
            return NodeType::TRIGGER;
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
          case NodeType::CRAWLER:
            return "CRAWLER";
          case NodeType::JOB:
            return "JOB";
          case NodeType::TRIGGER:
            return "TRIGGER";
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
  } // namespace Glue
} // namespace Aws
