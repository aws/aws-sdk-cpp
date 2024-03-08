/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/PreferredResourceName.h>
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
      namespace PreferredResourceNameMapper
      {

        static const int Ec2InstanceTypes_HASH = HashingUtils::HashString("Ec2InstanceTypes");


        PreferredResourceName GetPreferredResourceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ec2InstanceTypes_HASH)
          {
            return PreferredResourceName::Ec2InstanceTypes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreferredResourceName>(hashCode);
          }

          return PreferredResourceName::NOT_SET;
        }

        Aws::String GetNameForPreferredResourceName(PreferredResourceName enumValue)
        {
          switch(enumValue)
          {
          case PreferredResourceName::NOT_SET:
            return {};
          case PreferredResourceName::Ec2InstanceTypes:
            return "Ec2InstanceTypes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreferredResourceNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
