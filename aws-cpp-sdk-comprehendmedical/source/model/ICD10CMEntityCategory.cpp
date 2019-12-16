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

#include <aws/comprehendmedical/model/ICD10CMEntityCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace ICD10CMEntityCategoryMapper
      {

        static const int MEDICAL_CONDITION_HASH = HashingUtils::HashString("MEDICAL_CONDITION");


        ICD10CMEntityCategory GetICD10CMEntityCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDICAL_CONDITION_HASH)
          {
            return ICD10CMEntityCategory::MEDICAL_CONDITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICD10CMEntityCategory>(hashCode);
          }

          return ICD10CMEntityCategory::NOT_SET;
        }

        Aws::String GetNameForICD10CMEntityCategory(ICD10CMEntityCategory enumValue)
        {
          switch(enumValue)
          {
          case ICD10CMEntityCategory::MEDICAL_CONDITION:
            return "MEDICAL_CONDITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICD10CMEntityCategoryMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
