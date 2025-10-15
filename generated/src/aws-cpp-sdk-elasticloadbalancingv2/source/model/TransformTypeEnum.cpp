/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TransformTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace TransformTypeEnumMapper
      {

        static const int host_header_rewrite_HASH = HashingUtils::HashString("host-header-rewrite");
        static const int url_rewrite_HASH = HashingUtils::HashString("url-rewrite");


        TransformTypeEnum GetTransformTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == host_header_rewrite_HASH)
          {
            return TransformTypeEnum::host_header_rewrite;
          }
          else if (hashCode == url_rewrite_HASH)
          {
            return TransformTypeEnum::url_rewrite;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformTypeEnum>(hashCode);
          }

          return TransformTypeEnum::NOT_SET;
        }

        Aws::String GetNameForTransformTypeEnum(TransformTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case TransformTypeEnum::NOT_SET:
            return {};
          case TransformTypeEnum::host_header_rewrite:
            return "host-header-rewrite";
          case TransformTypeEnum::url_rewrite:
            return "url-rewrite";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformTypeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
