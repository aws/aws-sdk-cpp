/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AsgType.h>
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
      namespace AsgTypeMapper
      {

        static const int SingleInstanceType_HASH = HashingUtils::HashString("SingleInstanceType");
        static const int MixedInstanceTypes_HASH = HashingUtils::HashString("MixedInstanceTypes");


        AsgType GetAsgTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleInstanceType_HASH)
          {
            return AsgType::SingleInstanceType;
          }
          else if (hashCode == MixedInstanceTypes_HASH)
          {
            return AsgType::MixedInstanceTypes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsgType>(hashCode);
          }

          return AsgType::NOT_SET;
        }

        Aws::String GetNameForAsgType(AsgType enumValue)
        {
          switch(enumValue)
          {
          case AsgType::NOT_SET:
            return {};
          case AsgType::SingleInstanceType:
            return "SingleInstanceType";
          case AsgType::MixedInstanceTypes:
            return "MixedInstanceTypes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsgTypeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
