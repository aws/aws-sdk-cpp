/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/VendorName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace VendorNameMapper
      {

        static const int GitHub_HASH = HashingUtils::HashString("GitHub");
        static const int GitLab_HASH = HashingUtils::HashString("GitLab");
        static const int NativeS3_HASH = HashingUtils::HashString("NativeS3");


        VendorName GetVendorNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GitHub_HASH)
          {
            return VendorName::GitHub;
          }
          else if (hashCode == GitLab_HASH)
          {
            return VendorName::GitLab;
          }
          else if (hashCode == NativeS3_HASH)
          {
            return VendorName::NativeS3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VendorName>(hashCode);
          }

          return VendorName::NOT_SET;
        }

        Aws::String GetNameForVendorName(VendorName enumValue)
        {
          switch(enumValue)
          {
          case VendorName::NOT_SET:
            return {};
          case VendorName::GitHub:
            return "GitHub";
          case VendorName::GitLab:
            return "GitLab";
          case VendorName::NativeS3:
            return "NativeS3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VendorNameMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
