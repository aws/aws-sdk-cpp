﻿/**
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


        KeywordInputType GetKeywordInputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECT_FROM_LIST_HASH)
          {
            return KeywordInputType::SELECT_FROM_LIST;
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
          case KeywordInputType::SELECT_FROM_LIST:
            return "SELECT_FROM_LIST";
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
