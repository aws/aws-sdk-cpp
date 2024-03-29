﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/VpcLinkVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace VpcLinkVersionMapper
      {

        static const int V2_HASH = HashingUtils::HashString("V2");


        VpcLinkVersion GetVpcLinkVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V2_HASH)
          {
            return VpcLinkVersion::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcLinkVersion>(hashCode);
          }

          return VpcLinkVersion::NOT_SET;
        }

        Aws::String GetNameForVpcLinkVersion(VpcLinkVersion enumValue)
        {
          switch(enumValue)
          {
          case VpcLinkVersion::NOT_SET:
            return {};
          case VpcLinkVersion::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcLinkVersionMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
