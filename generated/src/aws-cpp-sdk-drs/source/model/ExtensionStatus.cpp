/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ExtensionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace ExtensionStatusMapper
      {

        static constexpr uint32_t EXTENDED_HASH = ConstExprHashingUtils::HashString("EXTENDED");
        static constexpr uint32_t EXTENSION_ERROR_HASH = ConstExprHashingUtils::HashString("EXTENSION_ERROR");
        static constexpr uint32_t NOT_EXTENDED_HASH = ConstExprHashingUtils::HashString("NOT_EXTENDED");


        ExtensionStatus GetExtensionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTENDED_HASH)
          {
            return ExtensionStatus::EXTENDED;
          }
          else if (hashCode == EXTENSION_ERROR_HASH)
          {
            return ExtensionStatus::EXTENSION_ERROR;
          }
          else if (hashCode == NOT_EXTENDED_HASH)
          {
            return ExtensionStatus::NOT_EXTENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExtensionStatus>(hashCode);
          }

          return ExtensionStatus::NOT_SET;
        }

        Aws::String GetNameForExtensionStatus(ExtensionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExtensionStatus::NOT_SET:
            return {};
          case ExtensionStatus::EXTENDED:
            return "EXTENDED";
          case ExtensionStatus::EXTENSION_ERROR:
            return "EXTENSION_ERROR";
          case ExtensionStatus::NOT_EXTENDED:
            return "NOT_EXTENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExtensionStatusMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
