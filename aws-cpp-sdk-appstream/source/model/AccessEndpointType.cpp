/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AccessEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace AccessEndpointTypeMapper
      {

        static const int STREAMING_HASH = HashingUtils::HashString("STREAMING");


        AccessEndpointType GetAccessEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STREAMING_HASH)
          {
            return AccessEndpointType::STREAMING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessEndpointType>(hashCode);
          }

          return AccessEndpointType::NOT_SET;
        }

        Aws::String GetNameForAccessEndpointType(AccessEndpointType enumValue)
        {
          switch(enumValue)
          {
          case AccessEndpointType::STREAMING:
            return "STREAMING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessEndpointTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
