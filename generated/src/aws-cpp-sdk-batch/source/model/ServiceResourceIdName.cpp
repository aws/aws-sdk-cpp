/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceResourceIdName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ServiceResourceIdNameMapper
      {

        static const int TrainingJobArn_HASH = HashingUtils::HashString("TrainingJobArn");


        ServiceResourceIdName GetServiceResourceIdNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TrainingJobArn_HASH)
          {
            return ServiceResourceIdName::TrainingJobArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceResourceIdName>(hashCode);
          }

          return ServiceResourceIdName::NOT_SET;
        }

        Aws::String GetNameForServiceResourceIdName(ServiceResourceIdName enumValue)
        {
          switch(enumValue)
          {
          case ServiceResourceIdName::NOT_SET:
            return {};
          case ServiceResourceIdName::TrainingJobArn:
            return "TrainingJobArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceResourceIdNameMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
