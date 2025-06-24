/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelStatus.h>
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
      namespace ModelStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return ModelStatus::Active;
          }
          else if (hashCode == Creating_HASH)
          {
            return ModelStatus::Creating;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelStatus>(hashCode);
          }

          return ModelStatus::NOT_SET;
        }

        Aws::String GetNameForModelStatus(ModelStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelStatus::NOT_SET:
            return {};
          case ModelStatus::Active:
            return "Active";
          case ModelStatus::Creating:
            return "Creating";
          case ModelStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
