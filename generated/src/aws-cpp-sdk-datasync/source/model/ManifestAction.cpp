/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ManifestAction.h>
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
      namespace ManifestActionMapper
      {

        static const int TRANSFER_HASH = HashingUtils::HashString("TRANSFER");


        ManifestAction GetManifestActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSFER_HASH)
          {
            return ManifestAction::TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManifestAction>(hashCode);
          }

          return ManifestAction::NOT_SET;
        }

        Aws::String GetNameForManifestAction(ManifestAction enumValue)
        {
          switch(enumValue)
          {
          case ManifestAction::NOT_SET:
            return {};
          case ManifestAction::TRANSFER:
            return "TRANSFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManifestActionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
