/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/RedactionOutput.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace RedactionOutputMapper
      {

        static const int redacted_HASH = HashingUtils::HashString("redacted");
        static const int redacted_and_unredacted_HASH = HashingUtils::HashString("redacted_and_unredacted");


        RedactionOutput GetRedactionOutputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == redacted_HASH)
          {
            return RedactionOutput::redacted;
          }
          else if (hashCode == redacted_and_unredacted_HASH)
          {
            return RedactionOutput::redacted_and_unredacted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedactionOutput>(hashCode);
          }

          return RedactionOutput::NOT_SET;
        }

        Aws::String GetNameForRedactionOutput(RedactionOutput enumValue)
        {
          switch(enumValue)
          {
          case RedactionOutput::redacted:
            return "redacted";
          case RedactionOutput::redacted_and_unredacted:
            return "redacted_and_unredacted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedactionOutputMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
