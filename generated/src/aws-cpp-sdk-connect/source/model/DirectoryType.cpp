/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DirectoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace DirectoryTypeMapper
      {

        static const int SAML_HASH = HashingUtils::HashString("SAML");
        static const int CONNECT_MANAGED_HASH = HashingUtils::HashString("CONNECT_MANAGED");
        static const int EXISTING_DIRECTORY_HASH = HashingUtils::HashString("EXISTING_DIRECTORY");


        DirectoryType GetDirectoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAML_HASH)
          {
            return DirectoryType::SAML;
          }
          else if (hashCode == CONNECT_MANAGED_HASH)
          {
            return DirectoryType::CONNECT_MANAGED;
          }
          else if (hashCode == EXISTING_DIRECTORY_HASH)
          {
            return DirectoryType::EXISTING_DIRECTORY;
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
          case DirectoryType::SAML:
            return "SAML";
          case DirectoryType::CONNECT_MANAGED:
            return "CONNECT_MANAGED";
          case DirectoryType::EXISTING_DIRECTORY:
            return "EXISTING_DIRECTORY";
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
  } // namespace Connect
} // namespace Aws
