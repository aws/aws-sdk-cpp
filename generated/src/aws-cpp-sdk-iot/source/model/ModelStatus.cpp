/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ModelStatusMapper
      {

        static const int PENDING_BUILD_HASH = HashingUtils::HashString("PENDING_BUILD");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_BUILD_HASH)
          {
            return ModelStatus::PENDING_BUILD;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ModelStatus::ACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ModelStatus::EXPIRED;
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
          case ModelStatus::PENDING_BUILD:
            return "PENDING_BUILD";
          case ModelStatus::ACTIVE:
            return "ACTIVE";
          case ModelStatus::EXPIRED:
            return "EXPIRED";
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
  } // namespace IoT
} // namespace Aws
