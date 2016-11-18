/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/workspaces/model/Compute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ComputeMapper
      {

        static const int VALUE_HASH = HashingUtils::HashString("VALUE");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int PERFORMANCE_HASH = HashingUtils::HashString("PERFORMANCE");


        Compute GetComputeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_HASH)
          {
            return Compute::VALUE;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return Compute::STANDARD;
          }
          else if (hashCode == PERFORMANCE_HASH)
          {
            return Compute::PERFORMANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Compute>(hashCode);
          }

          return Compute::NOT_SET;
        }

        Aws::String GetNameForCompute(Compute enumValue)
        {
          switch(enumValue)
          {
          case Compute::VALUE:
            return "VALUE";
          case Compute::STANDARD:
            return "STANDARD";
          case Compute::PERFORMANCE:
            return "PERFORMANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ComputeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
