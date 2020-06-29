/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribePackagesFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace DescribePackagesFilterNameMapper
      {

        static const int PackageID_HASH = HashingUtils::HashString("PackageID");
        static const int PackageName_HASH = HashingUtils::HashString("PackageName");
        static const int PackageStatus_HASH = HashingUtils::HashString("PackageStatus");


        DescribePackagesFilterName GetDescribePackagesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PackageID_HASH)
          {
            return DescribePackagesFilterName::PackageID;
          }
          else if (hashCode == PackageName_HASH)
          {
            return DescribePackagesFilterName::PackageName;
          }
          else if (hashCode == PackageStatus_HASH)
          {
            return DescribePackagesFilterName::PackageStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribePackagesFilterName>(hashCode);
          }

          return DescribePackagesFilterName::NOT_SET;
        }

        Aws::String GetNameForDescribePackagesFilterName(DescribePackagesFilterName enumValue)
        {
          switch(enumValue)
          {
          case DescribePackagesFilterName::PackageID:
            return "PackageID";
          case DescribePackagesFilterName::PackageName:
            return "PackageName";
          case DescribePackagesFilterName::PackageStatus:
            return "PackageStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribePackagesFilterNameMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
