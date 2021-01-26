/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AttachmentsSourceKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AttachmentsSourceKeyMapper
      {

        static const int SourceUrl_HASH = HashingUtils::HashString("SourceUrl");
        static const int S3FileUrl_HASH = HashingUtils::HashString("S3FileUrl");
        static const int AttachmentReference_HASH = HashingUtils::HashString("AttachmentReference");


        AttachmentsSourceKey GetAttachmentsSourceKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SourceUrl_HASH)
          {
            return AttachmentsSourceKey::SourceUrl;
          }
          else if (hashCode == S3FileUrl_HASH)
          {
            return AttachmentsSourceKey::S3FileUrl;
          }
          else if (hashCode == AttachmentReference_HASH)
          {
            return AttachmentsSourceKey::AttachmentReference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentsSourceKey>(hashCode);
          }

          return AttachmentsSourceKey::NOT_SET;
        }

        Aws::String GetNameForAttachmentsSourceKey(AttachmentsSourceKey enumValue)
        {
          switch(enumValue)
          {
          case AttachmentsSourceKey::SourceUrl:
            return "SourceUrl";
          case AttachmentsSourceKey::S3FileUrl:
            return "S3FileUrl";
          case AttachmentsSourceKey::AttachmentReference:
            return "AttachmentReference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentsSourceKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
