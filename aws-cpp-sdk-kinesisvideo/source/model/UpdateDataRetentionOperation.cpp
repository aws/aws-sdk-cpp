/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
