/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/KeywordInputType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace KeywordInputTypeMapper
      {

        static const int SELECT_FROM_LIST_HASH = HashingUtils::HashString("SELECT_FROM_LIST");
        static const int UPLOAD_FILE_HASH = HashingUtils::HashString("UPLOAD_FILE");
        static const int INPUT_TEXT_HASH = HashingUtils::HashString("INPUT_TEXT");


        KeywordInputType GetKeywordInputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECT_FROM_LIST_HASH)
          {
            return KeywordInputType::SELECT_FROM_LIST;
          }
          else if (hashCode == UPLOAD_FILE_HASH)
          {
            return KeywordInputType::UPLOAD_FILE;
          }
          else if (hashCode == INPUT_TEXT_HASH)
          {
            return KeywordInputType::INPUT_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeywordInputType>(hashCode);
          }

          return KeywordInputType::NOT_SET;
        }

        Aws::String GetNameForKeywordInputType(KeywordInputType enumValue)
        {
          switch(enumValue)
          {
          case KeywordInputType::NOT_SET:
            return {};
          case KeywordInputType::SELECT_FROM_LIST:
            return "SELECT_FROM_LIST";
          case KeywordInputType::UPLOAD_FILE:
            return "UPLOAD_FILE";
          case KeywordInputType::INPUT_TEXT:
            return "INPUT_TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeywordInputTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
