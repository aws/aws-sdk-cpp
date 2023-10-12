/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static constexpr uint32_t NotStarted_HASH = ConstExprHashingUtils::HashString("NotStarted");
        static constexpr uint32_t Started_HASH = ConstExprHashingUtils::HashString("Started");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotStarted_HASH)
          {
            return OperationStatus::NotStarted;
          }
          else if (hashCode == Started_HASH)
          {
            return OperationStatus::Started;
          }
          else if (hashCode == Failed_HASH)
          {
            return OperationStatus::Failed;
          }
          else if (hashCode == Completed_HASH)
          {
            return OperationStatus::Completed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return OperationStatus::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationStatus>(hashCode);
          }

          return OperationStatus::NOT_SET;
        }

        Aws::String GetNameForOperationStatus(OperationStatus enumValue)
        {
          switch(enumValue)
          {
          case OperationStatus::NOT_SET:
            return {};
          case OperationStatus::NotStarted:
            return "NotStarted";
          case OperationStatus::Started:
            return "Started";
          case OperationStatus::Failed:
            return "Failed";
          case OperationStatus::Completed:
            return "Completed";
          case OperationStatus::Succeeded:
            return "Succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
