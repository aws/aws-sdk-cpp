/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ReconfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ReconfigurationTypeMapper
      {

        static const int OVERWRITE_HASH = HashingUtils::HashString("OVERWRITE");
        static const int MERGE_HASH = HashingUtils::HashString("MERGE");


        ReconfigurationType GetReconfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERWRITE_HASH)
          {
            return ReconfigurationType::OVERWRITE;
          }
          else if (hashCode == MERGE_HASH)
          {
            return ReconfigurationType::MERGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReconfigurationType>(hashCode);
          }

          return ReconfigurationType::NOT_SET;
        }

        Aws::String GetNameForReconfigurationType(ReconfigurationType enumValue)
        {
          switch(enumValue)
          {
          case ReconfigurationType::NOT_SET:
            return {};
          case ReconfigurationType::OVERWRITE:
            return "OVERWRITE";
          case ReconfigurationType::MERGE:
            return "MERGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReconfigurationTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
