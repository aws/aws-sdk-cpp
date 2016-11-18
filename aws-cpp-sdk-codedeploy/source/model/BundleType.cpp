/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BundleTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
