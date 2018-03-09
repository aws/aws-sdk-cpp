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

#include <aws/servicecatalog/model/ProvisionedProductStatus.h>
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
      namespace ProvisionedProductStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UNDER_CHANGE_HASH = HashingUtils::HashString("UNDER_CHANGE");
        static const int TAINTED_HASH = HashingUtils::HashString("TAINTED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int PLAN_IN_PROGRESS_HASH = HashingUtils::HashString("PLAN_IN_PROGRESS");


        ProvisionedProductStatus GetProvisionedProductStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ProvisionedProductStatus::AVAILABLE;
          }
          else if (hashCode == UNDER_CHANGE_HASH)
          {
            return ProvisionedProductStatus::UNDER_CHANGE;
          }
          else if (hashCode == TAINTED_HASH)
          {
            return ProvisionedProductStatus::TAINTED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ProvisionedProductStatus::ERROR_;
          }
          else if (hashCode == PLAN_IN_PROGRESS_HASH)
          {
            return ProvisionedProductStatus::PLAN_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedProductStatus>(hashCode);
          }

          return ProvisionedProductStatus::NOT_SET;
        }

        Aws::String GetNameForProvisionedProductStatus(ProvisionedProductStatus enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedProductStatus::AVAILABLE:
            return "AVAILABLE";
          case ProvisionedProductStatus::UNDER_CHANGE:
            return "UNDER_CHANGE";
          case ProvisionedProductStatus::TAINTED:
            return "TAINTED";
          case ProvisionedProductStatus::ERROR_:
            return "ERROR";
          case ProvisionedProductStatus::PLAN_IN_PROGRESS:
            return "PLAN_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProvisionedProductStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
