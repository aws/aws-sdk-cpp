/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace AssetTypeMapper
      {

        static const int ec2_instance_HASH = HashingUtils::HashString("ec2-instance");


        AssetType GetAssetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ec2_instance_HASH)
          {
            return AssetType::ec2_instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetType>(hashCode);
          }

          return AssetType::NOT_SET;
        }

        Aws::String GetNameForAssetType(AssetType enumValue)
        {
          switch(enumValue)
          {
          case AssetType::ec2_instance:
            return "ec2-instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetTypeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
