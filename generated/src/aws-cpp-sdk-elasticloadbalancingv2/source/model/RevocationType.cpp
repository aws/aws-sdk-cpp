﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RevocationType.h>
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
      namespace RevocationTypeMapper
      {

        static const int CRL_HASH = HashingUtils::HashString("CRL");


        RevocationType GetRevocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRL_HASH)
          {
            return RevocationType::CRL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevocationType>(hashCode);
          }

          return RevocationType::NOT_SET;
        }

        Aws::String GetNameForRevocationType(RevocationType enumValue)
        {
          switch(enumValue)
          {
          case RevocationType::NOT_SET:
            return {};
          case RevocationType::CRL:
            return "CRL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RevocationTypeMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
