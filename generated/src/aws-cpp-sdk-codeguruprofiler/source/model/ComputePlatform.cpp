/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ComputePlatform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace ComputePlatformMapper
      {

        static constexpr uint32_t Default_HASH = ConstExprHashingUtils::HashString("Default");
        static constexpr uint32_t AWSLambda_HASH = ConstExprHashingUtils::HashString("AWSLambda");


        ComputePlatform GetComputePlatformForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Default_HASH)
          {
            return ComputePlatform::Default;
          }
          else if (hashCode == AWSLambda_HASH)
          {
            return ComputePlatform::AWSLambda;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputePlatform>(hashCode);
          }

          return ComputePlatform::NOT_SET;
        }

        Aws::String GetNameForComputePlatform(ComputePlatform enumValue)
        {
          switch(enumValue)
          {
          case ComputePlatform::NOT_SET:
            return {};
          case ComputePlatform::Default:
            return "Default";
          case ComputePlatform::AWSLambda:
            return "AWSLambda";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputePlatformMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
