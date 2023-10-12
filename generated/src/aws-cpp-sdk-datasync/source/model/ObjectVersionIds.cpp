/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ObjectVersionIds.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace ObjectVersionIdsMapper
      {

        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        ObjectVersionIds GetObjectVersionIdsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return ObjectVersionIds::INCLUDE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ObjectVersionIds::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectVersionIds>(hashCode);
          }

          return ObjectVersionIds::NOT_SET;
        }

        Aws::String GetNameForObjectVersionIds(ObjectVersionIds enumValue)
        {
          switch(enumValue)
          {
          case ObjectVersionIds::NOT_SET:
            return {};
          case ObjectVersionIds::INCLUDE:
            return "INCLUDE";
          case ObjectVersionIds::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectVersionIdsMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
