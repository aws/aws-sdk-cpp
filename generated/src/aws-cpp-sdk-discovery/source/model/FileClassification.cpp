/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/FileClassification.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace FileClassificationMapper
      {

        static const int MODELIZEIT_EXPORT_HASH = HashingUtils::HashString("MODELIZEIT_EXPORT");
        static const int RVTOOLS_EXPORT_HASH = HashingUtils::HashString("RVTOOLS_EXPORT");
        static const int VMWARE_NSX_EXPORT_HASH = HashingUtils::HashString("VMWARE_NSX_EXPORT");
        static const int IMPORT_TEMPLATE_HASH = HashingUtils::HashString("IMPORT_TEMPLATE");


        FileClassification GetFileClassificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MODELIZEIT_EXPORT_HASH)
          {
            return FileClassification::MODELIZEIT_EXPORT;
          }
          else if (hashCode == RVTOOLS_EXPORT_HASH)
          {
            return FileClassification::RVTOOLS_EXPORT;
          }
          else if (hashCode == VMWARE_NSX_EXPORT_HASH)
          {
            return FileClassification::VMWARE_NSX_EXPORT;
          }
          else if (hashCode == IMPORT_TEMPLATE_HASH)
          {
            return FileClassification::IMPORT_TEMPLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileClassification>(hashCode);
          }

          return FileClassification::NOT_SET;
        }

        Aws::String GetNameForFileClassification(FileClassification enumValue)
        {
          switch(enumValue)
          {
          case FileClassification::NOT_SET:
            return {};
          case FileClassification::MODELIZEIT_EXPORT:
            return "MODELIZEIT_EXPORT";
          case FileClassification::RVTOOLS_EXPORT:
            return "RVTOOLS_EXPORT";
          case FileClassification::VMWARE_NSX_EXPORT:
            return "VMWARE_NSX_EXPORT";
          case FileClassification::IMPORT_TEMPLATE:
            return "IMPORT_TEMPLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileClassificationMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
