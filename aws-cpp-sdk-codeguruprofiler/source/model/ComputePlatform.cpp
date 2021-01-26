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

        static const int AWSLambda_HASH = HashingUtils::HashString("AWSLambda");
        static const int Default_HASH = HashingUtils::HashString("Default");


        ComputePlatform GetComputePlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSLambda_HASH)
          {
            return ComputePlatform::AWSLambda;
          }
          else if (hashCode == Default_HASH)
          {
            return ComputePlatform::Default;
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
          case ComputePlatform::AWSLambda:
            return "AWSLambda";
          case ComputePlatform::Default:
            return "Default";
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
