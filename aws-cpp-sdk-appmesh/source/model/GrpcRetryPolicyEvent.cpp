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

        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int deadline_exceeded_HASH = HashingUtils::HashString("deadline-exceeded");
        static const int internal_HASH = HashingUtils::HashString("internal");
        static const int resource_exhausted_HASH = HashingUtils::HashString("resource-exhausted");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");


        GrpcRetryPolicyEvent GetGrpcRetryPolicyEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
