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

#include <aws/cur/model/AdditionalArtifact.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace AdditionalArtifactMapper
      {

        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int QUICKSIGHT_HASH = HashingUtils::HashString("QUICKSIGHT");


        AdditionalArtifact GetAdditionalArtifactForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDSHIFT_HASH)
          {
            return AdditionalArtifact::REDSHIFT;
          }
          else if (hashCode == QUICKSIGHT_HASH)
          {
            return AdditionalArtifact::QUICKSIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalArtifact>(hashCode);
          }

          return AdditionalArtifact::NOT_SET;
        }

        Aws::String GetNameForAdditionalArtifact(AdditionalArtifact enumValue)
        {
          switch(enumValue)
          {
          case AdditionalArtifact::REDSHIFT:
            return "REDSHIFT";
          case AdditionalArtifact::QUICKSIGHT:
            return "QUICKSIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AdditionalArtifactMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
