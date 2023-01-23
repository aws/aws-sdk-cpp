﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ObjectType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace ObjectTypeMapper
      {

        static const int NODE_HASH = HashingUtils::HashString("NODE");
        static const int LEAF_NODE_HASH = HashingUtils::HashString("LEAF_NODE");
        static const int POLICY_HASH = HashingUtils::HashString("POLICY");
        static const int INDEX_HASH = HashingUtils::HashString("INDEX");


        ObjectType GetObjectTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NODE_HASH)
          {
            return ObjectType::NODE;
          }
          else if (hashCode == LEAF_NODE_HASH)
          {
            return ObjectType::LEAF_NODE;
          }
          else if (hashCode == POLICY_HASH)
          {
            return ObjectType::POLICY;
          }
          else if (hashCode == INDEX_HASH)
          {
            return ObjectType::INDEX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectType>(hashCode);
          }

          return ObjectType::NOT_SET;
        }

        Aws::String GetNameForObjectType(ObjectType enumValue)
        {
          switch(enumValue)
          {
          case ObjectType::NODE:
            return "NODE";
          case ObjectType::LEAF_NODE:
            return "LEAF_NODE";
          case ObjectType::POLICY:
            return "POLICY";
          case ObjectType::INDEX:
            return "INDEX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
