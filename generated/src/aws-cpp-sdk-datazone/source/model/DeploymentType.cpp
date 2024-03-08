/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeploymentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DeploymentTypeMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        DeploymentType GetDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return DeploymentType::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return DeploymentType::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return DeploymentType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentType>(hashCode);
          }

          return DeploymentType::NOT_SET;
        }

        Aws::String GetNameForDeploymentType(DeploymentType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentType::NOT_SET:
            return {};
          case DeploymentType::CREATE:
            return "CREATE";
          case DeploymentType::UPDATE:
            return "UPDATE";
          case DeploymentType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
