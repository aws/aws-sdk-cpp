/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ExternalConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace ExternalConnectionStatusMapper
      {

        static const int Available_HASH = HashingUtils::HashString("Available");


        ExternalConnectionStatus GetExternalConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Available_HASH)
          {
            return ExternalConnectionStatus::Available;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalConnectionStatus>(hashCode);
          }

          return ExternalConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForExternalConnectionStatus(ExternalConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExternalConnectionStatus::Available:
            return "Available";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExternalConnectionStatusMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
