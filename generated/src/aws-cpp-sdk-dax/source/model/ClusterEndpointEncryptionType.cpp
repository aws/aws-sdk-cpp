/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/ClusterEndpointEncryptionType.h>
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
      namespace ClusterEndpointEncryptionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int TLS_HASH = HashingUtils::HashString("TLS");


        ClusterEndpointEncryptionType GetClusterEndpointEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ClusterEndpointEncryptionType::NONE;
          }
          else if (hashCode == TLS_HASH)
          {
            return ClusterEndpointEncryptionType::TLS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterEndpointEncryptionType>(hashCode);
          }

          return ClusterEndpointEncryptionType::NOT_SET;
        }

        Aws::String GetNameForClusterEndpointEncryptionType(ClusterEndpointEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case ClusterEndpointEncryptionType::NOT_SET:
            return {};
          case ClusterEndpointEncryptionType::NONE:
            return "NONE";
          case ClusterEndpointEncryptionType::TLS:
            return "TLS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterEndpointEncryptionTypeMapper
    } // namespace Model
  } // namespace DAX
} // namespace Aws
