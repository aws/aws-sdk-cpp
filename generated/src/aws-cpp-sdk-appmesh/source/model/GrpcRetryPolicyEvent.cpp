/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcRetryPolicyEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace GrpcRetryPolicyEventMapper
      {

        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t deadline_exceeded_HASH = ConstExprHashingUtils::HashString("deadline-exceeded");
        static constexpr uint32_t internal_HASH = ConstExprHashingUtils::HashString("internal");
        static constexpr uint32_t resource_exhausted_HASH = ConstExprHashingUtils::HashString("resource-exhausted");
        static constexpr uint32_t unavailable_HASH = ConstExprHashingUtils::HashString("unavailable");


        GrpcRetryPolicyEvent GetGrpcRetryPolicyEventForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cancelled_HASH)
          {
            return GrpcRetryPolicyEvent::cancelled;
          }
          else if (hashCode == deadline_exceeded_HASH)
          {
            return GrpcRetryPolicyEvent::deadline_exceeded;
          }
          else if (hashCode == internal_HASH)
          {
            return GrpcRetryPolicyEvent::internal;
          }
          else if (hashCode == resource_exhausted_HASH)
          {
            return GrpcRetryPolicyEvent::resource_exhausted;
          }
          else if (hashCode == unavailable_HASH)
          {
            return GrpcRetryPolicyEvent::unavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GrpcRetryPolicyEvent>(hashCode);
          }

          return GrpcRetryPolicyEvent::NOT_SET;
        }

        Aws::String GetNameForGrpcRetryPolicyEvent(GrpcRetryPolicyEvent enumValue)
        {
          switch(enumValue)
          {
          case GrpcRetryPolicyEvent::NOT_SET:
            return {};
          case GrpcRetryPolicyEvent::cancelled:
            return "cancelled";
          case GrpcRetryPolicyEvent::deadline_exceeded:
            return "deadline-exceeded";
          case GrpcRetryPolicyEvent::internal:
            return "internal";
          case GrpcRetryPolicyEvent::resource_exhausted:
            return "resource-exhausted";
          case GrpcRetryPolicyEvent::unavailable:
            return "unavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GrpcRetryPolicyEventMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
