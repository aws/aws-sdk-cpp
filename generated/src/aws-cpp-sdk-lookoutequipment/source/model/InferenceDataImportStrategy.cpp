/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceDataImportStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace InferenceDataImportStrategyMapper
      {

        static const int NO_IMPORT_HASH = HashingUtils::HashString("NO_IMPORT");
        static const int ADD_WHEN_EMPTY_HASH = HashingUtils::HashString("ADD_WHEN_EMPTY");
        static const int OVERWRITE_HASH = HashingUtils::HashString("OVERWRITE");


        InferenceDataImportStrategy GetInferenceDataImportStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_IMPORT_HASH)
          {
            return InferenceDataImportStrategy::NO_IMPORT;
          }
          else if (hashCode == ADD_WHEN_EMPTY_HASH)
          {
            return InferenceDataImportStrategy::ADD_WHEN_EMPTY;
          }
          else if (hashCode == OVERWRITE_HASH)
          {
            return InferenceDataImportStrategy::OVERWRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceDataImportStrategy>(hashCode);
          }

          return InferenceDataImportStrategy::NOT_SET;
        }

        Aws::String GetNameForInferenceDataImportStrategy(InferenceDataImportStrategy enumValue)
        {
          switch(enumValue)
          {
          case InferenceDataImportStrategy::NOT_SET:
            return {};
          case InferenceDataImportStrategy::NO_IMPORT:
            return "NO_IMPORT";
          case InferenceDataImportStrategy::ADD_WHEN_EMPTY:
            return "ADD_WHEN_EMPTY";
          case InferenceDataImportStrategy::OVERWRITE:
            return "OVERWRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceDataImportStrategyMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
