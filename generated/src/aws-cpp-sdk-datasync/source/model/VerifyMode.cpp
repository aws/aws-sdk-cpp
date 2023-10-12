/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/VerifyMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace VerifyModeMapper
      {

        static constexpr uint32_t POINT_IN_TIME_CONSISTENT_HASH = ConstExprHashingUtils::HashString("POINT_IN_TIME_CONSISTENT");
        static constexpr uint32_t ONLY_FILES_TRANSFERRED_HASH = ConstExprHashingUtils::HashString("ONLY_FILES_TRANSFERRED");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        VerifyMode GetVerifyModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POINT_IN_TIME_CONSISTENT_HASH)
          {
            return VerifyMode::POINT_IN_TIME_CONSISTENT;
          }
          else if (hashCode == ONLY_FILES_TRANSFERRED_HASH)
          {
            return VerifyMode::ONLY_FILES_TRANSFERRED;
          }
          else if (hashCode == NONE_HASH)
          {
            return VerifyMode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifyMode>(hashCode);
          }

          return VerifyMode::NOT_SET;
        }

        Aws::String GetNameForVerifyMode(VerifyMode enumValue)
        {
          switch(enumValue)
          {
          case VerifyMode::NOT_SET:
            return {};
          case VerifyMode::POINT_IN_TIME_CONSISTENT:
            return "POINT_IN_TIME_CONSISTENT";
          case VerifyMode::ONLY_FILES_TRANSFERRED:
            return "ONLY_FILES_TRANSFERRED";
          case VerifyMode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifyModeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
