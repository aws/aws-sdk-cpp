/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TargetStorageTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TargetStorageTierMapper
      {

        static const int archive_HASH = HashingUtils::HashString("archive");


        TargetStorageTier GetTargetStorageTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == archive_HASH)
          {
            return TargetStorageTier::archive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStorageTier>(hashCode);
          }

          return TargetStorageTier::NOT_SET;
        }

        Aws::String GetNameForTargetStorageTier(TargetStorageTier enumValue)
        {
          switch(enumValue)
          {
          case TargetStorageTier::NOT_SET:
            return {};
          case TargetStorageTier::archive:
            return "archive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStorageTierMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
