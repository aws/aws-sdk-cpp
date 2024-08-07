/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/InclusionAnnotationValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace InclusionAnnotationValueMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        InclusionAnnotationValue GetInclusionAnnotationValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return InclusionAnnotationValue::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return InclusionAnnotationValue::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InclusionAnnotationValue>(hashCode);
          }

          return InclusionAnnotationValue::NOT_SET;
        }

        Aws::String GetNameForInclusionAnnotationValue(InclusionAnnotationValue enumValue)
        {
          switch(enumValue)
          {
          case InclusionAnnotationValue::NOT_SET:
            return {};
          case InclusionAnnotationValue::INCLUDE:
            return "INCLUDE";
          case InclusionAnnotationValue::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InclusionAnnotationValueMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
