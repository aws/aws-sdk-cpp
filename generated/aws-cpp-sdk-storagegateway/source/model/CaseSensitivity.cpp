/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CaseSensitivity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace CaseSensitivityMapper
      {

        static const int ClientSpecified_HASH = HashingUtils::HashString("ClientSpecified");
        static const int CaseSensitive_HASH = HashingUtils::HashString("CaseSensitive");


        CaseSensitivity GetCaseSensitivityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ClientSpecified_HASH)
          {
            return CaseSensitivity::ClientSpecified;
          }
          else if (hashCode == CaseSensitive_HASH)
          {
            return CaseSensitivity::CaseSensitive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaseSensitivity>(hashCode);
          }

          return CaseSensitivity::NOT_SET;
        }

        Aws::String GetNameForCaseSensitivity(CaseSensitivity enumValue)
        {
          switch(enumValue)
          {
          case CaseSensitivity::ClientSpecified:
            return "ClientSpecified";
          case CaseSensitivity::CaseSensitive:
            return "CaseSensitive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaseSensitivityMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
