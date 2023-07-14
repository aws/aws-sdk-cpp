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

        static const int SimpleAD_HASH = HashingUtils::HashString("SimpleAD");
        static const int ADConnector_HASH = HashingUtils::HashString("ADConnector");
        static const int MicrosoftAD_HASH = HashingUtils::HashString("MicrosoftAD");
        static const int SharedMicrosoftAD_HASH = HashingUtils::HashString("SharedMicrosoftAD");


        DirectoryType GetDirectoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
