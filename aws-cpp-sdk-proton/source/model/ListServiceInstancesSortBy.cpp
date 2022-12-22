/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServiceInstancesSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace ListServiceInstancesSortByMapper
      {

        static const int name_HASH = HashingUtils::HashString("name");
        static const int deploymentStatus_HASH = HashingUtils::HashString("deploymentStatus");
        static const int templateName_HASH = HashingUtils::HashString("templateName");
        static const int serviceName_HASH = HashingUtils::HashString("serviceName");
        static const int environmentName_HASH = HashingUtils::HashString("environmentName");
        static const int lastDeploymentAttemptedAt_HASH = HashingUtils::HashString("lastDeploymentAttemptedAt");
        static const int createdAt_HASH = HashingUtils::HashString("createdAt");


        ListServiceInstancesSortBy GetListServiceInstancesSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == name_HASH)
          {
            return ListServiceInstancesSortBy::name;
          }
          else if (hashCode == deploymentStatus_HASH)
          {
            return ListServiceInstancesSortBy::deploymentStatus;
          }
          else if (hashCode == templateName_HASH)
          {
            return ListServiceInstancesSortBy::templateName;
          }
          else if (hashCode == serviceName_HASH)
          {
            return ListServiceInstancesSortBy::serviceName;
          }
          else if (hashCode == environmentName_HASH)
          {
            return ListServiceInstancesSortBy::environmentName;
          }
          else if (hashCode == lastDeploymentAttemptedAt_HASH)
          {
            return ListServiceInstancesSortBy::lastDeploymentAttemptedAt;
          }
          else if (hashCode == createdAt_HASH)
          {
            return ListServiceInstancesSortBy::createdAt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListServiceInstancesSortBy>(hashCode);
          }

          return ListServiceInstancesSortBy::NOT_SET;
        }

        Aws::String GetNameForListServiceInstancesSortBy(ListServiceInstancesSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListServiceInstancesSortBy::name:
            return "name";
          case ListServiceInstancesSortBy::deploymentStatus:
            return "deploymentStatus";
          case ListServiceInstancesSortBy::templateName:
            return "templateName";
          case ListServiceInstancesSortBy::serviceName:
            return "serviceName";
          case ListServiceInstancesSortBy::environmentName:
            return "environmentName";
          case ListServiceInstancesSortBy::lastDeploymentAttemptedAt:
            return "lastDeploymentAttemptedAt";
          case ListServiceInstancesSortBy::createdAt:
            return "createdAt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListServiceInstancesSortByMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
