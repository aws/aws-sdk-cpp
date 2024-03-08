/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ModelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace ModelTypeMapper
      {

        static const int DOCUMENT_CLASSIFIER_HASH = HashingUtils::HashString("DOCUMENT_CLASSIFIER");
        static const int ENTITY_RECOGNIZER_HASH = HashingUtils::HashString("ENTITY_RECOGNIZER");


        ModelType GetModelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_CLASSIFIER_HASH)
          {
            return ModelType::DOCUMENT_CLASSIFIER;
          }
          else if (hashCode == ENTITY_RECOGNIZER_HASH)
          {
            return ModelType::ENTITY_RECOGNIZER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelType>(hashCode);
          }

          return ModelType::NOT_SET;
        }

        Aws::String GetNameForModelType(ModelType enumValue)
        {
          switch(enumValue)
          {
          case ModelType::NOT_SET:
            return {};
          case ModelType::DOCUMENT_CLASSIFIER:
            return "DOCUMENT_CLASSIFIER";
          case ModelType::ENTITY_RECOGNIZER:
            return "ENTITY_RECOGNIZER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
