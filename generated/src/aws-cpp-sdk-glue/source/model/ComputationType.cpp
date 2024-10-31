/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ComputationType.h>
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
      namespace ComputationTypeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");


        ComputationType GetComputationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return ComputationType::FULL;
          }
          else if (hashCode == INCREMENTAL_HASH)
          {
            return ComputationType::INCREMENTAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputationType>(hashCode);
          }

          return ComputationType::NOT_SET;
        }

        Aws::String GetNameForComputationType(ComputationType enumValue)
        {
          switch(enumValue)
          {
          case ComputationType::NOT_SET:
            return {};
          case ComputationType::FULL:
            return "FULL";
          case ComputationType::INCREMENTAL:
            return "INCREMENTAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputationTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
