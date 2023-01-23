/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/S3ContinuousClassificationType.h>
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
      namespace S3ContinuousClassificationTypeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");


        S3ContinuousClassificationType GetS3ContinuousClassificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return S3ContinuousClassificationType::FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ContinuousClassificationType>(hashCode);
          }

          return S3ContinuousClassificationType::NOT_SET;
        }

        Aws::String GetNameForS3ContinuousClassificationType(S3ContinuousClassificationType enumValue)
        {
          switch(enumValue)
          {
          case S3ContinuousClassificationType::FULL:
            return "FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ContinuousClassificationTypeMapper
    } // namespace Model
  } // namespace Macie
} // namespace Aws
