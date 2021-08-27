/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/LayerFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace LayerFailureCodeMapper
      {

        static const int InvalidLayerDigest_HASH = HashingUtils::HashString("InvalidLayerDigest");
        static const int MissingLayerDigest_HASH = HashingUtils::HashString("MissingLayerDigest");


        LayerFailureCode GetLayerFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidLayerDigest_HASH)
          {
            return LayerFailureCode::InvalidLayerDigest;
          }
          else if (hashCode == MissingLayerDigest_HASH)
          {
            return LayerFailureCode::MissingLayerDigest;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayerFailureCode>(hashCode);
          }

          return LayerFailureCode::NOT_SET;
        }

        Aws::String GetNameForLayerFailureCode(LayerFailureCode enumValue)
        {
          switch(enumValue)
          {
          case LayerFailureCode::InvalidLayerDigest:
            return "InvalidLayerDigest";
          case LayerFailureCode::MissingLayerDigest:
            return "MissingLayerDigest";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayerFailureCodeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
