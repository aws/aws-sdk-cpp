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

#include <aws/comprehendmedical/model/RxNormEntityType.h>
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
      namespace RxNormEntityTypeMapper
      {

        static const int BRAND_NAME_HASH = HashingUtils::HashString("BRAND_NAME");
        static const int GENERIC_NAME_HASH = HashingUtils::HashString("GENERIC_NAME");


        RxNormEntityType GetRxNormEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BRAND_NAME_HASH)
          {
            return RxNormEntityType::BRAND_NAME;
          }
          else if (hashCode == GENERIC_NAME_HASH)
          {
            return RxNormEntityType::GENERIC_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RxNormEntityType>(hashCode);
          }

          return RxNormEntityType::NOT_SET;
        }

        Aws::String GetNameForRxNormEntityType(RxNormEntityType enumValue)
        {
          switch(enumValue)
          {
          case RxNormEntityType::BRAND_NAME:
            return "BRAND_NAME";
          case RxNormEntityType::GENERIC_NAME:
            return "GENERIC_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RxNormEntityTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
