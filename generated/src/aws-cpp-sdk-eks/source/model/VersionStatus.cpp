/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/VersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace VersionStatusMapper
      {

        static const int UNSUPPORTED_HASH = HashingUtils::HashString("UNSUPPORTED");
        static const int STANDARD_SUPPORT_HASH = HashingUtils::HashString("STANDARD_SUPPORT");
        static const int EXTENDED_SUPPORT_HASH = HashingUtils::HashString("EXTENDED_SUPPORT");


        VersionStatus GetVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSUPPORTED_HASH)
          {
            return VersionStatus::UNSUPPORTED;
          }
          else if (hashCode == STANDARD_SUPPORT_HASH)
          {
            return VersionStatus::STANDARD_SUPPORT;
          }
          else if (hashCode == EXTENDED_SUPPORT_HASH)
          {
            return VersionStatus::EXTENDED_SUPPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionStatus>(hashCode);
          }

          return VersionStatus::NOT_SET;
        }

        Aws::String GetNameForVersionStatus(VersionStatus enumValue)
        {
          switch(enumValue)
          {
          case VersionStatus::NOT_SET:
            return {};
          case VersionStatus::UNSUPPORTED:
            return "UNSUPPORTED";
          case VersionStatus::STANDARD_SUPPORT:
            return "STANDARD_SUPPORT";
          case VersionStatus::EXTENDED_SUPPORT:
            return "EXTENDED_SUPPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
