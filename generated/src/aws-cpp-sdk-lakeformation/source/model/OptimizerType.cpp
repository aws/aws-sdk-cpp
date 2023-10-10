/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/OptimizerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace OptimizerTypeMapper
      {

        static const int COMPACTION_HASH = HashingUtils::HashString("COMPACTION");
        static const int GARBAGE_COLLECTION_HASH = HashingUtils::HashString("GARBAGE_COLLECTION");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        OptimizerType GetOptimizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPACTION_HASH)
          {
            return OptimizerType::COMPACTION;
          }
          else if (hashCode == GARBAGE_COLLECTION_HASH)
          {
            return OptimizerType::GARBAGE_COLLECTION;
          }
          else if (hashCode == ALL_HASH)
          {
            return OptimizerType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptimizerType>(hashCode);
          }

          return OptimizerType::NOT_SET;
        }

        Aws::String GetNameForOptimizerType(OptimizerType enumValue)
        {
          switch(enumValue)
          {
          case OptimizerType::NOT_SET:
            return {};
          case OptimizerType::COMPACTION:
            return "COMPACTION";
          case OptimizerType::GARBAGE_COLLECTION:
            return "GARBAGE_COLLECTION";
          case OptimizerType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptimizerTypeMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
