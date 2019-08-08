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

#include <aws/lakeformation/model/FieldNameString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace FieldNameStringMapper
      {

        static const int RESOURCE_ARN_HASH = HashingUtils::HashString("RESOURCE_ARN");
        static const int ROLE_ARN_HASH = HashingUtils::HashString("ROLE_ARN");
        static const int LAST_MODIFIED_HASH = HashingUtils::HashString("LAST_MODIFIED");


        FieldNameString GetFieldNameStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_ARN_HASH)
          {
            return FieldNameString::RESOURCE_ARN;
          }
          else if (hashCode == ROLE_ARN_HASH)
          {
            return FieldNameString::ROLE_ARN;
          }
          else if (hashCode == LAST_MODIFIED_HASH)
          {
            return FieldNameString::LAST_MODIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldNameString>(hashCode);
          }

          return FieldNameString::NOT_SET;
        }

        Aws::String GetNameForFieldNameString(FieldNameString enumValue)
        {
          switch(enumValue)
          {
          case FieldNameString::RESOURCE_ARN:
            return "RESOURCE_ARN";
          case FieldNameString::ROLE_ARN:
            return "ROLE_ARN";
          case FieldNameString::LAST_MODIFIED:
            return "LAST_MODIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldNameStringMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
