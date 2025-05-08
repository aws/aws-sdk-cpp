/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FlexibleEnaQueuesSupport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FlexibleEnaQueuesSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");


        FlexibleEnaQueuesSupport GetFlexibleEnaQueuesSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return FlexibleEnaQueuesSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return FlexibleEnaQueuesSupport::supported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlexibleEnaQueuesSupport>(hashCode);
          }

          return FlexibleEnaQueuesSupport::NOT_SET;
        }

        Aws::String GetNameForFlexibleEnaQueuesSupport(FlexibleEnaQueuesSupport enumValue)
        {
          switch(enumValue)
          {
          case FlexibleEnaQueuesSupport::NOT_SET:
            return {};
          case FlexibleEnaQueuesSupport::unsupported:
            return "unsupported";
          case FlexibleEnaQueuesSupport::supported:
            return "supported";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlexibleEnaQueuesSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
