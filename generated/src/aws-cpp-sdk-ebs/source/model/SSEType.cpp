/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/SSEType.h>
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
      namespace SSETypeMapper
      {

        static const int sse_ebs_HASH = HashingUtils::HashString("sse-ebs");
        static const int sse_kms_HASH = HashingUtils::HashString("sse-kms");
        static const int none_HASH = HashingUtils::HashString("none");


        SSEType GetSSETypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sse_ebs_HASH)
          {
            return SSEType::sse_ebs;
          }
          else if (hashCode == sse_kms_HASH)
          {
            return SSEType::sse_kms;
          }
          else if (hashCode == none_HASH)
          {
            return SSEType::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SSEType>(hashCode);
          }

          return SSEType::NOT_SET;
        }

        Aws::String GetNameForSSEType(SSEType enumValue)
        {
          switch(enumValue)
          {
          case SSEType::NOT_SET:
            return {};
          case SSEType::sse_ebs:
            return "sse-ebs";
          case SSEType::sse_kms:
            return "sse-kms";
          case SSEType::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SSETypeMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
