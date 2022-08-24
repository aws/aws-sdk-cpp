/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginAccessControlSigningBehaviors.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace OriginAccessControlSigningBehaviorsMapper
      {

        static const int never_HASH = HashingUtils::HashString("never");
        static const int always_HASH = HashingUtils::HashString("always");
        static const int no_override_HASH = HashingUtils::HashString("no-override");


        OriginAccessControlSigningBehaviors GetOriginAccessControlSigningBehaviorsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == never_HASH)
          {
            return OriginAccessControlSigningBehaviors::never;
          }
          else if (hashCode == always_HASH)
          {
            return OriginAccessControlSigningBehaviors::always;
          }
          else if (hashCode == no_override_HASH)
          {
            return OriginAccessControlSigningBehaviors::no_override;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginAccessControlSigningBehaviors>(hashCode);
          }

          return OriginAccessControlSigningBehaviors::NOT_SET;
        }

        Aws::String GetNameForOriginAccessControlSigningBehaviors(OriginAccessControlSigningBehaviors enumValue)
        {
          switch(enumValue)
          {
          case OriginAccessControlSigningBehaviors::never:
            return "never";
          case OriginAccessControlSigningBehaviors::always:
            return "always";
          case OriginAccessControlSigningBehaviors::no_override:
            return "no-override";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginAccessControlSigningBehaviorsMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
