﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/NodeUpdateInitiatedBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace NodeUpdateInitiatedByMapper
      {

        static const int system_HASH = HashingUtils::HashString("system");
        static const int customer_HASH = HashingUtils::HashString("customer");


        NodeUpdateInitiatedBy GetNodeUpdateInitiatedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == system_HASH)
          {
            return NodeUpdateInitiatedBy::system;
          }
          else if (hashCode == customer_HASH)
          {
            return NodeUpdateInitiatedBy::customer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeUpdateInitiatedBy>(hashCode);
          }

          return NodeUpdateInitiatedBy::NOT_SET;
        }

        Aws::String GetNameForNodeUpdateInitiatedBy(NodeUpdateInitiatedBy enumValue)
        {
          switch(enumValue)
          {
          case NodeUpdateInitiatedBy::system:
            return "system";
          case NodeUpdateInitiatedBy::customer:
            return "customer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeUpdateInitiatedByMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
