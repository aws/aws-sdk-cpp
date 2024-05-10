/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/S3EndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace S3EndpointTypeMapper
      {

        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
        static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");


        S3EndpointType GetS3EndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGIONAL_HASH)
          {
            return S3EndpointType::REGIONAL;
          }
          else if (hashCode == GLOBAL_HASH)
          {
            return S3EndpointType::GLOBAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3EndpointType>(hashCode);
          }

          return S3EndpointType::NOT_SET;
        }

        Aws::String GetNameForS3EndpointType(S3EndpointType enumValue)
        {
          switch(enumValue)
          {
          case S3EndpointType::NOT_SET:
            return {};
          case S3EndpointType::REGIONAL:
            return "REGIONAL";
          case S3EndpointType::GLOBAL:
            return "GLOBAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3EndpointTypeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
