/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ResourceBucketAccess.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ResourceBucketAccessMapper
      {

        static const int allow_HASH = HashingUtils::HashString("allow");
        static const int deny_HASH = HashingUtils::HashString("deny");


        ResourceBucketAccess GetResourceBucketAccessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allow_HASH)
          {
            return ResourceBucketAccess::allow;
          }
          else if (hashCode == deny_HASH)
          {
            return ResourceBucketAccess::deny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceBucketAccess>(hashCode);
          }

          return ResourceBucketAccess::NOT_SET;
        }

        Aws::String GetNameForResourceBucketAccess(ResourceBucketAccess enumValue)
        {
          switch(enumValue)
          {
          case ResourceBucketAccess::NOT_SET:
            return {};
          case ResourceBucketAccess::allow:
            return "allow";
          case ResourceBucketAccess::deny:
            return "deny";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceBucketAccessMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
