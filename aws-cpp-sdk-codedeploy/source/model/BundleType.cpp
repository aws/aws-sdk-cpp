/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BundleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace BundleTypeMapper
      {

        static const int tar_HASH = HashingUtils::HashString("tar");
        static const int tgz_HASH = HashingUtils::HashString("tgz");
        static const int zip_HASH = HashingUtils::HashString("zip");
        static const int YAML_HASH = HashingUtils::HashString("YAML");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        BundleType GetBundleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == tar_HASH)
          {
            return BundleType::tar;
          }
          else if (hashCode == tgz_HASH)
          {
            return BundleType::tgz;
          }
          else if (hashCode == zip_HASH)
          {
            return BundleType::zip;
          }
          else if (hashCode == YAML_HASH)
          {
            return BundleType::YAML;
          }
          else if (hashCode == JSON_HASH)
          {
            return BundleType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BundleType>(hashCode);
          }

          return BundleType::NOT_SET;
        }

        Aws::String GetNameForBundleType(BundleType enumValue)
        {
          switch(enumValue)
          {
          case BundleType::tar:
            return "tar";
          case BundleType::tgz:
            return "tgz";
          case BundleType::zip:
            return "zip";
          case BundleType::YAML:
            return "YAML";
          case BundleType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BundleTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
