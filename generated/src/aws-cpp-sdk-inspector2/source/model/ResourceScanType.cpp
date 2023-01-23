/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceScanType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ResourceScanTypeMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int ECR_HASH = HashingUtils::HashString("ECR");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        ResourceScanType GetResourceScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return ResourceScanType::EC2;
          }
          else if (hashCode == ECR_HASH)
          {
            return ResourceScanType::ECR;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return ResourceScanType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceScanType>(hashCode);
          }

          return ResourceScanType::NOT_SET;
        }

        Aws::String GetNameForResourceScanType(ResourceScanType enumValue)
        {
          switch(enumValue)
          {
          case ResourceScanType::EC2:
            return "EC2";
          case ResourceScanType::ECR:
            return "ECR";
          case ResourceScanType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceScanTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
