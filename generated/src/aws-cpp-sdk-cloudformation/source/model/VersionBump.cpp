/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/VersionBump.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace VersionBumpMapper
      {

        static const int MAJOR_HASH = HashingUtils::HashString("MAJOR");
        static const int MINOR_HASH = HashingUtils::HashString("MINOR");


        VersionBump GetVersionBumpForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAJOR_HASH)
          {
            return VersionBump::MAJOR;
          }
          else if (hashCode == MINOR_HASH)
          {
            return VersionBump::MINOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionBump>(hashCode);
          }

          return VersionBump::NOT_SET;
        }

        Aws::String GetNameForVersionBump(VersionBump enumValue)
        {
          switch(enumValue)
          {
          case VersionBump::NOT_SET:
            return {};
          case VersionBump::MAJOR:
            return "MAJOR";
          case VersionBump::MINOR:
            return "MINOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionBumpMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
