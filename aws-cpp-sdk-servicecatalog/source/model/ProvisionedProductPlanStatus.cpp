﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/servicecatalog/model/ProvisionedProductPlanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProvisionedProductPlanStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_SUCCESS_HASH = HashingUtils::HashString("CREATE_SUCCESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int EXECUTE_IN_PROGRESS_HASH = HashingUtils::HashString("EXECUTE_IN_PROGRESS");
        static const int EXECUTE_SUCCESS_HASH = HashingUtils::HashString("EXECUTE_SUCCESS");
        static const int EXECUTE_FAILED_HASH = HashingUtils::HashString("EXECUTE_FAILED");


        ProvisionedProductPlanStatus GetProvisionedProductPlanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ProvisionedProductPlanStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_SUCCESS_HASH)
          {
            return ProvisionedProductPlanStatus::CREATE_SUCCESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ProvisionedProductPlanStatus::CREATE_FAILED;
          }
          else if (hashCode == EXECUTE_IN_PROGRESS_HASH)
          {
            return ProvisionedProductPlanStatus::EXECUTE_IN_PROGRESS;
          }
          else if (hashCode == EXECUTE_SUCCESS_HASH)
          {
            return ProvisionedProductPlanStatus::EXECUTE_SUCCESS;
          }
          else if (hashCode == EXECUTE_FAILED_HASH)
          {
            return ProvisionedProductPlanStatus::EXECUTE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedProductPlanStatus>(hashCode);
          }

          return ProvisionedProductPlanStatus::NOT_SET;
        }

        Aws::String GetNameForProvisionedProductPlanStatus(ProvisionedProductPlanStatus enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedProductPlanStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ProvisionedProductPlanStatus::CREATE_SUCCESS:
            return "CREATE_SUCCESS";
          case ProvisionedProductPlanStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ProvisionedProductPlanStatus::EXECUTE_IN_PROGRESS:
            return "EXECUTE_IN_PROGRESS";
          case ProvisionedProductPlanStatus::EXECUTE_SUCCESS:
            return "EXECUTE_SUCCESS";
          case ProvisionedProductPlanStatus::EXECUTE_FAILED:
            return "EXECUTE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProvisionedProductPlanStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
