/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AccessScopeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace AccessScopeTypeMapper
      {

        static const int cluster_HASH = HashingUtils::HashString("cluster");
        static const int namespace__HASH = HashingUtils::HashString("namespace");


        AccessScopeType GetAccessScopeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_HASH)
          {
            return AccessScopeType::cluster;
          }
          else if (hashCode == namespace__HASH)
          {
            return AccessScopeType::namespace_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessScopeType>(hashCode);
          }

          return AccessScopeType::NOT_SET;
        }

        Aws::String GetNameForAccessScopeType(AccessScopeType enumValue)
        {
          switch(enumValue)
          {
          case AccessScopeType::NOT_SET:
            return {};
          case AccessScopeType::cluster:
            return "cluster";
          case AccessScopeType::namespace_:
            return "namespace";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessScopeTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
