/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformType.h>
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
      namespace TransformTypeMapper
      {

        static const int FIND_MATCHES_HASH = HashingUtils::HashString("FIND_MATCHES");


        TransformType GetTransformTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIND_MATCHES_HASH)
          {
            return TransformType::FIND_MATCHES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformType>(hashCode);
          }

          return TransformType::NOT_SET;
        }

        Aws::String GetNameForTransformType(TransformType enumValue)
        {
          switch(enumValue)
          {
          case TransformType::FIND_MATCHES:
            return "FIND_MATCHES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
