/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/VpcEndpointErrorCode.h>
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
      namespace VpcEndpointErrorCodeMapper
      {

        static constexpr uint32_t ENDPOINT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ENDPOINT_NOT_FOUND");
        static constexpr uint32_t SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("SERVER_ERROR");


        VpcEndpointErrorCode GetVpcEndpointErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENDPOINT_NOT_FOUND_HASH)
          {
            return VpcEndpointErrorCode::ENDPOINT_NOT_FOUND;
          }
          else if (hashCode == SERVER_ERROR_HASH)
          {
            return VpcEndpointErrorCode::SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointErrorCode>(hashCode);
          }

          return VpcEndpointErrorCode::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointErrorCode(VpcEndpointErrorCode enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointErrorCode::NOT_SET:
            return {};
          case VpcEndpointErrorCode::ENDPOINT_NOT_FOUND:
            return "ENDPOINT_NOT_FOUND";
          case VpcEndpointErrorCode::SERVER_ERROR:
            return "SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointErrorCodeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
