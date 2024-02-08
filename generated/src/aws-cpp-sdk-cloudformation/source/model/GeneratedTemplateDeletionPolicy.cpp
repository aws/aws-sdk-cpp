/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GeneratedTemplateDeletionPolicy.h>
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
      namespace GeneratedTemplateDeletionPolicyMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");


        GeneratedTemplateDeletionPolicy GetGeneratedTemplateDeletionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return GeneratedTemplateDeletionPolicy::DELETE_;
          }
          else if (hashCode == RETAIN_HASH)
          {
            return GeneratedTemplateDeletionPolicy::RETAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedTemplateDeletionPolicy>(hashCode);
          }

          return GeneratedTemplateDeletionPolicy::NOT_SET;
        }

        Aws::String GetNameForGeneratedTemplateDeletionPolicy(GeneratedTemplateDeletionPolicy enumValue)
        {
          switch(enumValue)
          {
          case GeneratedTemplateDeletionPolicy::NOT_SET:
            return {};
          case GeneratedTemplateDeletionPolicy::DELETE_:
            return "DELETE";
          case GeneratedTemplateDeletionPolicy::RETAIN:
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

      } // namespace GeneratedTemplateDeletionPolicyMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
