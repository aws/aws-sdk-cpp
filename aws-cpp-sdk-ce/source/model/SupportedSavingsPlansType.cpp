/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace SupportedSavingsPlansTypeMapper
      {

        static const int COMPUTE_SP_HASH = HashingUtils::HashString("COMPUTE_SP");
        static const int EC2_INSTANCE_SP_HASH = HashingUtils::HashString("EC2_INSTANCE_SP");


        SupportedSavingsPlansType GetSupportedSavingsPlansTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPUTE_SP_HASH)
          {
            return SupportedSavingsPlansType::COMPUTE_SP;
          }
          else if (hashCode == EC2_INSTANCE_SP_HASH)
          {
            return SupportedSavingsPlansType::EC2_INSTANCE_SP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedSavingsPlansType>(hashCode);
          }

          return SupportedSavingsPlansType::NOT_SET;
        }

        Aws::String GetNameForSupportedSavingsPlansType(SupportedSavingsPlansType enumValue)
        {
          switch(enumValue)
          {
          case SupportedSavingsPlansType::COMPUTE_SP:
            return "COMPUTE_SP";
          case SupportedSavingsPlansType::EC2_INSTANCE_SP:
            return "EC2_INSTANCE_SP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedSavingsPlansTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
