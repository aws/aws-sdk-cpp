/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/redshift/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int cluster_HASH = HashingUtils::HashString("cluster");
        static const int cluster_parameter_group_HASH = HashingUtils::HashString("cluster-parameter-group");
        static const int cluster_security_group_HASH = HashingUtils::HashString("cluster-security-group");
        static const int cluster_snapshot_HASH = HashingUtils::HashString("cluster-snapshot");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_HASH)
          {
            return SourceType::cluster;
          }
          else if (hashCode == cluster_parameter_group_HASH)
          {
            return SourceType::cluster_parameter_group;
          }
          else if (hashCode == cluster_security_group_HASH)
          {
            return SourceType::cluster_security_group;
          }
          else if (hashCode == cluster_snapshot_HASH)
          {
            return SourceType::cluster_snapshot;
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
          case SourceType::cluster:
            return "cluster";
          case SourceType::cluster_parameter_group:
            return "cluster-parameter-group";
          case SourceType::cluster_security_group:
            return "cluster-security-group";
          case SourceType::cluster_snapshot:
            return "cluster-snapshot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
