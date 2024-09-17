/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/RecordMatchingModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace RecordMatchingModelMapper
      {

        static const int ONE_SOURCE_TO_ONE_TARGET_HASH = HashingUtils::HashString("ONE_SOURCE_TO_ONE_TARGET");
        static const int MANY_SOURCE_TO_ONE_TARGET_HASH = HashingUtils::HashString("MANY_SOURCE_TO_ONE_TARGET");


        RecordMatchingModel GetRecordMatchingModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_SOURCE_TO_ONE_TARGET_HASH)
          {
            return RecordMatchingModel::ONE_SOURCE_TO_ONE_TARGET;
          }
          else if (hashCode == MANY_SOURCE_TO_ONE_TARGET_HASH)
          {
            return RecordMatchingModel::MANY_SOURCE_TO_ONE_TARGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordMatchingModel>(hashCode);
          }

          return RecordMatchingModel::NOT_SET;
        }

        Aws::String GetNameForRecordMatchingModel(RecordMatchingModel enumValue)
        {
          switch(enumValue)
          {
          case RecordMatchingModel::NOT_SET:
            return {};
          case RecordMatchingModel::ONE_SOURCE_TO_ONE_TARGET:
            return "ONE_SOURCE_TO_ONE_TARGET";
          case RecordMatchingModel::MANY_SOURCE_TO_ONE_TARGET:
            return "MANY_SOURCE_TO_ONE_TARGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordMatchingModelMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
