/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace DirectoryTypeMapper
      {

        static constexpr uint32_t SimpleAD_HASH = ConstExprHashingUtils::HashString("SimpleAD");
        static constexpr uint32_t ADConnector_HASH = ConstExprHashingUtils::HashString("ADConnector");
        static constexpr uint32_t MicrosoftAD_HASH = ConstExprHashingUtils::HashString("MicrosoftAD");
        static constexpr uint32_t SharedMicrosoftAD_HASH = ConstExprHashingUtils::HashString("SharedMicrosoftAD");


        DirectoryType GetDirectoryTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SimpleAD_HASH)
          {
            return DirectoryType::SimpleAD;
          }
          else if (hashCode == ADConnector_HASH)
          {
            return DirectoryType::ADConnector;
          }
          else if (hashCode == MicrosoftAD_HASH)
          {
            return DirectoryType::MicrosoftAD;
          }
          else if (hashCode == SharedMicrosoftAD_HASH)
          {
            return DirectoryType::SharedMicrosoftAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryType>(hashCode);
          }

          return DirectoryType::NOT_SET;
        }

        Aws::String GetNameForDirectoryType(DirectoryType enumValue)
        {
          switch(enumValue)
          {
          case DirectoryType::NOT_SET:
            return {};
          case DirectoryType::SimpleAD:
            return "SimpleAD";
          case DirectoryType::ADConnector:
            return "ADConnector";
          case DirectoryType::MicrosoftAD:
            return "MicrosoftAD";
          case DirectoryType::SharedMicrosoftAD:
            return "SharedMicrosoftAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
