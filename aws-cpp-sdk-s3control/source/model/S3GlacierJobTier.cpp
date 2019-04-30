/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/s3control/model/S3GlacierJobTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3GlacierJobTierMapper
      {

        static const int BULK_HASH = HashingUtils::HashString("BULK");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        S3GlacierJobTier GetS3GlacierJobTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BULK_HASH)
          {
            return S3GlacierJobTier::BULK;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return S3GlacierJobTier::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3GlacierJobTier>(hashCode);
          }

          return S3GlacierJobTier::NOT_SET;
        }

        Aws::String GetNameForS3GlacierJobTier(S3GlacierJobTier enumValue)
        {
          switch(enumValue)
          {
          case S3GlacierJobTier::BULK:
            return "BULK";
          case S3GlacierJobTier::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3GlacierJobTierMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
