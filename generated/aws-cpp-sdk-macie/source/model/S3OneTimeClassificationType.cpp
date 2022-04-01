/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/S3OneTimeClassificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie
  {
    namespace Model
    {
      namespace S3OneTimeClassificationTypeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        S3OneTimeClassificationType GetS3OneTimeClassificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return S3OneTimeClassificationType::FULL;
          }
          else if (hashCode == NONE_HASH)
          {
            return S3OneTimeClassificationType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3OneTimeClassificationType>(hashCode);
          }

          return S3OneTimeClassificationType::NOT_SET;
        }

        Aws::String GetNameForS3OneTimeClassificationType(S3OneTimeClassificationType enumValue)
        {
          switch(enumValue)
          {
          case S3OneTimeClassificationType::FULL:
            return "FULL";
          case S3OneTimeClassificationType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3OneTimeClassificationTypeMapper
    } // namespace Model
  } // namespace Macie
} // namespace Aws
