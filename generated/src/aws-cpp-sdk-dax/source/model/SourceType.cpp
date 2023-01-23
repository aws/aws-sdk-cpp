/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DAX
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int CLUSTER_HASH = HashingUtils::HashString("CLUSTER");
        static const int PARAMETER_GROUP_HASH = HashingUtils::HashString("PARAMETER_GROUP");
        static const int SUBNET_GROUP_HASH = HashingUtils::HashString("SUBNET_GROUP");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLUSTER_HASH)
          {
            return SourceType::CLUSTER;
          }
          else if (hashCode == PARAMETER_GROUP_HASH)
          {
            return SourceType::PARAMETER_GROUP;
          }
          else if (hashCode == SUBNET_GROUP_HASH)
          {
            return SourceType::SUBNET_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::CLUSTER:
            return "CLUSTER";
          case SourceType::PARAMETER_GROUP:
            return "PARAMETER_GROUP";
          case SourceType::SUBNET_GROUP:
            return "SUBNET_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace DAX
} // namespace Aws
