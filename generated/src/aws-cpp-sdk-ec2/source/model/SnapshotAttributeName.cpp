/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotAttributeName.h>
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
      namespace SnapshotAttributeNameMapper
      {

        static constexpr uint32_t productCodes_HASH = ConstExprHashingUtils::HashString("productCodes");
        static constexpr uint32_t createVolumePermission_HASH = ConstExprHashingUtils::HashString("createVolumePermission");


        SnapshotAttributeName GetSnapshotAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == productCodes_HASH)
          {
            return SnapshotAttributeName::productCodes;
          }
          else if (hashCode == createVolumePermission_HASH)
          {
            return SnapshotAttributeName::createVolumePermission;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotAttributeName>(hashCode);
          }

          return SnapshotAttributeName::NOT_SET;
        }

        Aws::String GetNameForSnapshotAttributeName(SnapshotAttributeName enumValue)
        {
          switch(enumValue)
          {
          case SnapshotAttributeName::NOT_SET:
            return {};
          case SnapshotAttributeName::productCodes:
            return "productCodes";
          case SnapshotAttributeName::createVolumePermission:
            return "createVolumePermission";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
