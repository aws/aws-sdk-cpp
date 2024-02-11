/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelModality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace ModelModalityMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
        static const int EMBEDDING_HASH = HashingUtils::HashString("EMBEDDING");


        ModelModality GetModelModalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return ModelModality::TEXT;
          }
          else if (hashCode == IMAGE_HASH)
          {
            return ModelModality::IMAGE;
          }
          else if (hashCode == EMBEDDING_HASH)
          {
            return ModelModality::EMBEDDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelModality>(hashCode);
          }

          return ModelModality::NOT_SET;
        }

        Aws::String GetNameForModelModality(ModelModality enumValue)
        {
          switch(enumValue)
          {
          case ModelModality::NOT_SET:
            return {};
          case ModelModality::TEXT:
            return "TEXT";
          case ModelModality::IMAGE:
            return "IMAGE";
          case ModelModality::EMBEDDING:
            return "EMBEDDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelModalityMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
