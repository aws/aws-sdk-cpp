/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ClassificationScopeUpdateOperation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace ClassificationScopeUpdateOperationMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        ClassificationScopeUpdateOperation GetClassificationScopeUpdateOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return ClassificationScopeUpdateOperation::ADD;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return ClassificationScopeUpdateOperation::REPLACE;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return ClassificationScopeUpdateOperation::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClassificationScopeUpdateOperation>(hashCode);
          }

          return ClassificationScopeUpdateOperation::NOT_SET;
        }

        Aws::String GetNameForClassificationScopeUpdateOperation(ClassificationScopeUpdateOperation enumValue)
        {
          switch(enumValue)
          {
          case ClassificationScopeUpdateOperation::ADD:
            return "ADD";
          case ClassificationScopeUpdateOperation::REPLACE:
            return "REPLACE";
          case ClassificationScopeUpdateOperation::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClassificationScopeUpdateOperationMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
