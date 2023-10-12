/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSQuotaType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace OpenZFSQuotaTypeMapper
      {

        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t GROUP_HASH = ConstExprHashingUtils::HashString("GROUP");


        OpenZFSQuotaType GetOpenZFSQuotaTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return OpenZFSQuotaType::USER;
          }
          else if (hashCode == GROUP_HASH)
          {
            return OpenZFSQuotaType::GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenZFSQuotaType>(hashCode);
          }

          return OpenZFSQuotaType::NOT_SET;
        }

        Aws::String GetNameForOpenZFSQuotaType(OpenZFSQuotaType enumValue)
        {
          switch(enumValue)
          {
          case OpenZFSQuotaType::NOT_SET:
            return {};
          case OpenZFSQuotaType::USER:
            return "USER";
          case OpenZFSQuotaType::GROUP:
            return "GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenZFSQuotaTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
