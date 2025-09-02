/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachmentLimitType.h>
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
      namespace AttachmentLimitTypeMapper
      {

        static const int shared_HASH = HashingUtils::HashString("shared");
        static const int dedicated_HASH = HashingUtils::HashString("dedicated");


        AttachmentLimitType GetAttachmentLimitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == shared_HASH)
          {
            return AttachmentLimitType::shared;
          }
          else if (hashCode == dedicated_HASH)
          {
            return AttachmentLimitType::dedicated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentLimitType>(hashCode);
          }

          return AttachmentLimitType::NOT_SET;
        }

        Aws::String GetNameForAttachmentLimitType(AttachmentLimitType enumValue)
        {
          switch(enumValue)
          {
          case AttachmentLimitType::NOT_SET:
            return {};
          case AttachmentLimitType::shared:
            return "shared";
          case AttachmentLimitType::dedicated:
            return "dedicated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentLimitTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
