/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UpdateDataRetentionOperation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace UpdateDataRetentionOperationMapper
      {

        static const int INCREASE_DATA_RETENTION_HASH = HashingUtils::HashString("INCREASE_DATA_RETENTION");
        static const int DECREASE_DATA_RETENTION_HASH = HashingUtils::HashString("DECREASE_DATA_RETENTION");


        UpdateDataRetentionOperation GetUpdateDataRetentionOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCREASE_DATA_RETENTION_HASH)
          {
            return UpdateDataRetentionOperation::INCREASE_DATA_RETENTION;
          }
          else if (hashCode == DECREASE_DATA_RETENTION_HASH)
          {
            return UpdateDataRetentionOperation::DECREASE_DATA_RETENTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateDataRetentionOperation>(hashCode);
          }

          return UpdateDataRetentionOperation::NOT_SET;
        }

        Aws::String GetNameForUpdateDataRetentionOperation(UpdateDataRetentionOperation enumValue)
        {
          switch(enumValue)
          {
          case UpdateDataRetentionOperation::INCREASE_DATA_RETENTION:
            return "INCREASE_DATA_RETENTION";
          case UpdateDataRetentionOperation::DECREASE_DATA_RETENTION:
            return "DECREASE_DATA_RETENTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateDataRetentionOperationMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
