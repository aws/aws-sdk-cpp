/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpointAttachmentType.h>
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
      namespace VerifiedAccessEndpointAttachmentTypeMapper
      {

        static const int vpc_HASH = HashingUtils::HashString("vpc");


        VerifiedAccessEndpointAttachmentType GetVerifiedAccessEndpointAttachmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return VerifiedAccessEndpointAttachmentType::vpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedAccessEndpointAttachmentType>(hashCode);
          }

          return VerifiedAccessEndpointAttachmentType::NOT_SET;
        }

        Aws::String GetNameForVerifiedAccessEndpointAttachmentType(VerifiedAccessEndpointAttachmentType enumValue)
        {
          switch(enumValue)
          {
          case VerifiedAccessEndpointAttachmentType::vpc:
            return "vpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedAccessEndpointAttachmentTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
