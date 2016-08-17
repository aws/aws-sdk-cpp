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
#include <aws/redshift/model/ParameterApplyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ParameterApplyTypeMapper
      {

        static const int static__HASH = HashingUtils::HashString("static");
        static const int dynamic_HASH = HashingUtils::HashString("dynamic");


        ParameterApplyType GetParameterApplyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == static__HASH)
          {
            return ParameterApplyType::static_;
          }
          else if (hashCode == dynamic_HASH)
          {
            return ParameterApplyType::dynamic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterApplyType>(hashCode);
          }

          return ParameterApplyType::NOT_SET;
        }

        Aws::String GetNameForParameterApplyType(ParameterApplyType enumValue)
        {
          switch(enumValue)
          {
          case ParameterApplyType::static_:
            return "static";
          case ParameterApplyType::dynamic:
            return "dynamic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ParameterApplyTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
