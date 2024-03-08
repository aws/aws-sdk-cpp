/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeContentRedactionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace TranscribeContentRedactionTypeMapper
      {

        static const int PII_HASH = HashingUtils::HashString("PII");


        TranscribeContentRedactionType GetTranscribeContentRedactionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PII_HASH)
          {
            return TranscribeContentRedactionType::PII;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeContentRedactionType>(hashCode);
          }

          return TranscribeContentRedactionType::NOT_SET;
        }

        Aws::String GetNameForTranscribeContentRedactionType(TranscribeContentRedactionType enumValue)
        {
          switch(enumValue)
          {
          case TranscribeContentRedactionType::NOT_SET:
            return {};
          case TranscribeContentRedactionType::PII:
            return "PII";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeContentRedactionTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
