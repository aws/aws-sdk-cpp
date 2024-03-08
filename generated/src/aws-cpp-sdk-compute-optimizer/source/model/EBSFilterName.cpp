/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EBSFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace EBSFilterNameMapper
      {

        static const int Finding_HASH = HashingUtils::HashString("Finding");


        EBSFilterName GetEBSFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Finding_HASH)
          {
            return EBSFilterName::Finding;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EBSFilterName>(hashCode);
          }

          return EBSFilterName::NOT_SET;
        }

        Aws::String GetNameForEBSFilterName(EBSFilterName enumValue)
        {
          switch(enumValue)
          {
          case EBSFilterName::NOT_SET:
            return {};
          case EBSFilterName::Finding:
            return "Finding";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EBSFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
