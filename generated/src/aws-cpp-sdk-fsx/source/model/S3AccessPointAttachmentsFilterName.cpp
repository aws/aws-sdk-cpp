/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/S3AccessPointAttachmentsFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace S3AccessPointAttachmentsFilterNameMapper
      {

        static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
        static const int volume_id_HASH = HashingUtils::HashString("volume-id");
        static const int type_HASH = HashingUtils::HashString("type");


        S3AccessPointAttachmentsFilterName GetS3AccessPointAttachmentsFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return S3AccessPointAttachmentsFilterName::file_system_id;
          }
          else if (hashCode == volume_id_HASH)
          {
            return S3AccessPointAttachmentsFilterName::volume_id;
          }
          else if (hashCode == type_HASH)
          {
            return S3AccessPointAttachmentsFilterName::type;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3AccessPointAttachmentsFilterName>(hashCode);
          }

          return S3AccessPointAttachmentsFilterName::NOT_SET;
        }

        Aws::String GetNameForS3AccessPointAttachmentsFilterName(S3AccessPointAttachmentsFilterName enumValue)
        {
          switch(enumValue)
          {
          case S3AccessPointAttachmentsFilterName::NOT_SET:
            return {};
          case S3AccessPointAttachmentsFilterName::file_system_id:
            return "file-system-id";
          case S3AccessPointAttachmentsFilterName::volume_id:
            return "volume-id";
          case S3AccessPointAttachmentsFilterName::type:
            return "type";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3AccessPointAttachmentsFilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
