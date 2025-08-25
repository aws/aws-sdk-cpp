/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/ElementRequirement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace ElementRequirementMapper
      {

        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");
        static const int MANDATORY_HASH = HashingUtils::HashString("MANDATORY");


        ElementRequirement GetElementRequirementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPTIONAL_HASH)
          {
            return ElementRequirement::OPTIONAL;
          }
          else if (hashCode == MANDATORY_HASH)
          {
            return ElementRequirement::MANDATORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElementRequirement>(hashCode);
          }

          return ElementRequirement::NOT_SET;
        }

        Aws::String GetNameForElementRequirement(ElementRequirement enumValue)
        {
          switch(enumValue)
          {
          case ElementRequirement::NOT_SET:
            return {};
          case ElementRequirement::OPTIONAL:
            return "OPTIONAL";
          case ElementRequirement::MANDATORY:
            return "MANDATORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ElementRequirementMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
