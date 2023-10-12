/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RecordState.h>
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
      namespace RecordStateMapper
      {

        static constexpr uint32_t Started_HASH = ConstExprHashingUtils::HashString("Started");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        RecordState GetRecordStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Started_HASH)
          {
            return RecordState::Started;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return RecordState::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return RecordState::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordState>(hashCode);
          }

          return RecordState::NOT_SET;
        }

        Aws::String GetNameForRecordState(RecordState enumValue)
        {
          switch(enumValue)
          {
          case RecordState::NOT_SET:
            return {};
          case RecordState::Started:
            return "Started";
          case RecordState::Succeeded:
            return "Succeeded";
          case RecordState::Failed:
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

      } // namespace RecordStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
