/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DataDeletionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace DataDeletionPolicyMapper
      {

        static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        DataDeletionPolicy GetDataDeletionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETAIN_HASH)
          {
            return DataDeletionPolicy::RETAIN;
          }
          else if (hashCode == DELETE__HASH)
          {
            return DataDeletionPolicy::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataDeletionPolicy>(hashCode);
          }

          return DataDeletionPolicy::NOT_SET;
        }

        Aws::String GetNameForDataDeletionPolicy(DataDeletionPolicy enumValue)
        {
          switch(enumValue)
          {
          case DataDeletionPolicy::NOT_SET:
            return {};
          case DataDeletionPolicy::RETAIN:
            return "RETAIN";
          case DataDeletionPolicy::DELETE_:
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

      } // namespace DataDeletionPolicyMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
