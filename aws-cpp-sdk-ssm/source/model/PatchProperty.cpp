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

#include <aws/ssm/model/PatchProperty.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchPropertyMapper
      {

        static const int PRODUCT_HASH = HashingUtils::HashString("PRODUCT");
        static const int PRODUCT_FAMILY_HASH = HashingUtils::HashString("PRODUCT_FAMILY");
        static const int CLASSIFICATION_HASH = HashingUtils::HashString("CLASSIFICATION");
        static const int MSRC_SEVERITY_HASH = HashingUtils::HashString("MSRC_SEVERITY");
        static const int PRIORITY_HASH = HashingUtils::HashString("PRIORITY");
        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");


        PatchProperty GetPatchPropertyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCT_HASH)
          {
            return PatchProperty::PRODUCT;
          }
          else if (hashCode == PRODUCT_FAMILY_HASH)
          {
            return PatchProperty::PRODUCT_FAMILY;
          }
          else if (hashCode == CLASSIFICATION_HASH)
          {
            return PatchProperty::CLASSIFICATION;
          }
          else if (hashCode == MSRC_SEVERITY_HASH)
          {
            return PatchProperty::MSRC_SEVERITY;
          }
          else if (hashCode == PRIORITY_HASH)
          {
            return PatchProperty::PRIORITY;
          }
          else if (hashCode == SEVERITY_HASH)
          {
            return PatchProperty::SEVERITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchProperty>(hashCode);
          }

          return PatchProperty::NOT_SET;
        }

        Aws::String GetNameForPatchProperty(PatchProperty enumValue)
        {
          switch(enumValue)
          {
          case PatchProperty::PRODUCT:
            return "PRODUCT";
          case PatchProperty::PRODUCT_FAMILY:
            return "PRODUCT_FAMILY";
          case PatchProperty::CLASSIFICATION:
            return "CLASSIFICATION";
          case PatchProperty::MSRC_SEVERITY:
            return "MSRC_SEVERITY";
          case PatchProperty::PRIORITY:
            return "PRIORITY";
          case PatchProperty::SEVERITY:
            return "SEVERITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchPropertyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
