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

#include <aws/sagemaker/model/AssemblyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AssemblyTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Line_HASH = HashingUtils::HashString("Line");


        AssemblyType GetAssemblyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return AssemblyType::None;
          }
          else if (hashCode == Line_HASH)
          {
            return AssemblyType::Line;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssemblyType>(hashCode);
          }

          return AssemblyType::NOT_SET;
        }

        Aws::String GetNameForAssemblyType(AssemblyType enumValue)
        {
          switch(enumValue)
          {
          case AssemblyType::None:
            return "None";
          case AssemblyType::Line:
            return "Line";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssemblyTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
