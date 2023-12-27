/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DefaultDocumentIdFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace DefaultDocumentIdFormatMapper
      {

        static const int FIREHOSE_DEFAULT_HASH = HashingUtils::HashString("FIREHOSE_DEFAULT");
        static const int NO_DOCUMENT_ID_HASH = HashingUtils::HashString("NO_DOCUMENT_ID");


        DefaultDocumentIdFormat GetDefaultDocumentIdFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIREHOSE_DEFAULT_HASH)
          {
            return DefaultDocumentIdFormat::FIREHOSE_DEFAULT;
          }
          else if (hashCode == NO_DOCUMENT_ID_HASH)
          {
            return DefaultDocumentIdFormat::NO_DOCUMENT_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultDocumentIdFormat>(hashCode);
          }

          return DefaultDocumentIdFormat::NOT_SET;
        }

        Aws::String GetNameForDefaultDocumentIdFormat(DefaultDocumentIdFormat enumValue)
        {
          switch(enumValue)
          {
          case DefaultDocumentIdFormat::NOT_SET:
            return {};
          case DefaultDocumentIdFormat::FIREHOSE_DEFAULT:
            return "FIREHOSE_DEFAULT";
          case DefaultDocumentIdFormat::NO_DOCUMENT_ID:
            return "NO_DOCUMENT_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultDocumentIdFormatMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
