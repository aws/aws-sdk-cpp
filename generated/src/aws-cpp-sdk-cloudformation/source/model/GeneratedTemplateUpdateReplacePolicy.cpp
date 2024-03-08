/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GeneratedTemplateUpdateReplacePolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace GeneratedTemplateUpdateReplacePolicyMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");


        GeneratedTemplateUpdateReplacePolicy GetGeneratedTemplateUpdateReplacePolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return GeneratedTemplateUpdateReplacePolicy::DELETE_;
          }
          else if (hashCode == RETAIN_HASH)
          {
            return GeneratedTemplateUpdateReplacePolicy::RETAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedTemplateUpdateReplacePolicy>(hashCode);
          }

          return GeneratedTemplateUpdateReplacePolicy::NOT_SET;
        }

        Aws::String GetNameForGeneratedTemplateUpdateReplacePolicy(GeneratedTemplateUpdateReplacePolicy enumValue)
        {
          switch(enumValue)
          {
          case GeneratedTemplateUpdateReplacePolicy::NOT_SET:
            return {};
          case GeneratedTemplateUpdateReplacePolicy::DELETE_:
            return "DELETE";
          case GeneratedTemplateUpdateReplacePolicy::RETAIN:
            return "RETAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedTemplateUpdateReplacePolicyMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
