/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/License.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace LicenseMapper
      {

        static constexpr uint32_t Basic_HASH = ConstExprHashingUtils::HashString("Basic");
        static constexpr uint32_t Plus_HASH = ConstExprHashingUtils::HashString("Plus");
        static constexpr uint32_t Pro_HASH = ConstExprHashingUtils::HashString("Pro");
        static constexpr uint32_t ProTrial_HASH = ConstExprHashingUtils::HashString("ProTrial");


        License GetLicenseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Basic_HASH)
          {
            return License::Basic;
          }
          else if (hashCode == Plus_HASH)
          {
            return License::Plus;
          }
          else if (hashCode == Pro_HASH)
          {
            return License::Pro;
          }
          else if (hashCode == ProTrial_HASH)
          {
            return License::ProTrial;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<License>(hashCode);
          }

          return License::NOT_SET;
        }

        Aws::String GetNameForLicense(License enumValue)
        {
          switch(enumValue)
          {
          case License::NOT_SET:
            return {};
          case License::Basic:
            return "Basic";
          case License::Plus:
            return "Plus";
          case License::Pro:
            return "Pro";
          case License::ProTrial:
            return "ProTrial";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
