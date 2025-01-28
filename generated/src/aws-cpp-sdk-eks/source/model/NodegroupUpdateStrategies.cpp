/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodegroupUpdateStrategies.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace NodegroupUpdateStrategiesMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int MINIMAL_HASH = HashingUtils::HashString("MINIMAL");


        NodegroupUpdateStrategies GetNodegroupUpdateStrategiesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return NodegroupUpdateStrategies::DEFAULT;
          }
          else if (hashCode == MINIMAL_HASH)
          {
            return NodegroupUpdateStrategies::MINIMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodegroupUpdateStrategies>(hashCode);
          }

          return NodegroupUpdateStrategies::NOT_SET;
        }

        Aws::String GetNameForNodegroupUpdateStrategies(NodegroupUpdateStrategies enumValue)
        {
          switch(enumValue)
          {
          case NodegroupUpdateStrategies::NOT_SET:
            return {};
          case NodegroupUpdateStrategies::DEFAULT:
            return "DEFAULT";
          case NodegroupUpdateStrategies::MINIMAL:
            return "MINIMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodegroupUpdateStrategiesMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
