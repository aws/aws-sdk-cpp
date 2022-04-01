/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ResourceNotFoundExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EBS
  {
    namespace Model
    {
      namespace ResourceNotFoundExceptionReasonMapper
      {

        static const int SNAPSHOT_NOT_FOUND_HASH = HashingUtils::HashString("SNAPSHOT_NOT_FOUND");
        static const int DEPENDENCY_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("DEPENDENCY_RESOURCE_NOT_FOUND");


        ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNAPSHOT_NOT_FOUND_HASH)
          {
            return ResourceNotFoundExceptionReason::SNAPSHOT_NOT_FOUND;
          }
          else if (hashCode == DEPENDENCY_RESOURCE_NOT_FOUND_HASH)
          {
            return ResourceNotFoundExceptionReason::DEPENDENCY_RESOURCE_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceNotFoundExceptionReason>(hashCode);
          }

          return ResourceNotFoundExceptionReason::NOT_SET;
        }

        Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ResourceNotFoundExceptionReason::SNAPSHOT_NOT_FOUND:
            return "SNAPSHOT_NOT_FOUND";
          case ResourceNotFoundExceptionReason::DEPENDENCY_RESOURCE_NOT_FOUND:
            return "DEPENDENCY_RESOURCE_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceNotFoundExceptionReasonMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
