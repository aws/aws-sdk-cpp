/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/FindingActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace FindingActionTypeMapper
      {

        static const int AWS_API_CALL_HASH = HashingUtils::HashString("AWS_API_CALL");


        FindingActionType GetFindingActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_API_CALL_HASH)
          {
            return FindingActionType::AWS_API_CALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingActionType>(hashCode);
          }

          return FindingActionType::NOT_SET;
        }

        Aws::String GetNameForFindingActionType(FindingActionType enumValue)
        {
          switch(enumValue)
          {
          case FindingActionType::AWS_API_CALL:
            return "AWS_API_CALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingActionTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
