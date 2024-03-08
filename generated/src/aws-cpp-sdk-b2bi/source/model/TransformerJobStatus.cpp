/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TransformerJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace TransformerJobStatusMapper
      {

        static const int running_HASH = HashingUtils::HashString("running");
        static const int succeeded_HASH = HashingUtils::HashString("succeeded");
        static const int failed_HASH = HashingUtils::HashString("failed");


        TransformerJobStatus GetTransformerJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == running_HASH)
          {
            return TransformerJobStatus::running;
          }
          else if (hashCode == succeeded_HASH)
          {
            return TransformerJobStatus::succeeded;
          }
          else if (hashCode == failed_HASH)
          {
            return TransformerJobStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformerJobStatus>(hashCode);
          }

          return TransformerJobStatus::NOT_SET;
        }

        Aws::String GetNameForTransformerJobStatus(TransformerJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TransformerJobStatus::NOT_SET:
            return {};
          case TransformerJobStatus::running:
            return "running";
          case TransformerJobStatus::succeeded:
            return "succeeded";
          case TransformerJobStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformerJobStatusMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
