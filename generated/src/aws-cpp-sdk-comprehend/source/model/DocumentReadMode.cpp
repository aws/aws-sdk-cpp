/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentReadMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DocumentReadModeMapper
      {

        static const int SERVICE_DEFAULT_HASH = HashingUtils::HashString("SERVICE_DEFAULT");
        static const int FORCE_DOCUMENT_READ_ACTION_HASH = HashingUtils::HashString("FORCE_DOCUMENT_READ_ACTION");


        DocumentReadMode GetDocumentReadModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_DEFAULT_HASH)
          {
            return DocumentReadMode::SERVICE_DEFAULT;
          }
          else if (hashCode == FORCE_DOCUMENT_READ_ACTION_HASH)
          {
            return DocumentReadMode::FORCE_DOCUMENT_READ_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentReadMode>(hashCode);
          }

          return DocumentReadMode::NOT_SET;
        }

        Aws::String GetNameForDocumentReadMode(DocumentReadMode enumValue)
        {
          switch(enumValue)
          {
          case DocumentReadMode::NOT_SET:
            return {};
          case DocumentReadMode::SERVICE_DEFAULT:
            return "SERVICE_DEFAULT";
          case DocumentReadMode::FORCE_DOCUMENT_READ_ACTION:
            return "FORCE_DOCUMENT_READ_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentReadModeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
