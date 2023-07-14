﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ShareResourceTypeMapper
      {

        static const int WORKLOAD_HASH = HashingUtils::HashString("WORKLOAD");
        static const int LENS_HASH = HashingUtils::HashString("LENS");


        ShareResourceType GetShareResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKLOAD_HASH)
          {
            return ShareResourceType::WORKLOAD;
          }
          else if (hashCode == LENS_HASH)
          {
            return ShareResourceType::LENS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareResourceType>(hashCode);
          }

          return ShareResourceType::NOT_SET;
        }

        Aws::String GetNameForShareResourceType(ShareResourceType enumValue)
        {
          switch(enumValue)
          {
          case ShareResourceType::WORKLOAD:
            return "WORKLOAD";
          case ShareResourceType::LENS:
            return "LENS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareResourceTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
