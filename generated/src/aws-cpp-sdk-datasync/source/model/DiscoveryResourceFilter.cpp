/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DiscoveryResourceFilter.h>
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
      namespace DiscoveryResourceFilterMapper
      {

        static const int SVM_HASH = HashingUtils::HashString("SVM");


        DiscoveryResourceFilter GetDiscoveryResourceFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SVM_HASH)
          {
            return DiscoveryResourceFilter::SVM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryResourceFilter>(hashCode);
          }

          return DiscoveryResourceFilter::NOT_SET;
        }

        Aws::String GetNameForDiscoveryResourceFilter(DiscoveryResourceFilter enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryResourceFilter::NOT_SET:
            return {};
          case DiscoveryResourceFilter::SVM:
            return "SVM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryResourceFilterMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
