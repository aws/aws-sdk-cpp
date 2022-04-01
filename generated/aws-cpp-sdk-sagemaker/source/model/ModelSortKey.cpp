/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelSortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ModelSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        ModelSortKey GetModelSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ModelSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ModelSortKey::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelSortKey>(hashCode);
          }

          return ModelSortKey::NOT_SET;
        }

        Aws::String GetNameForModelSortKey(ModelSortKey enumValue)
        {
          switch(enumValue)
          {
          case ModelSortKey::Name:
            return "Name";
          case ModelSortKey::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
