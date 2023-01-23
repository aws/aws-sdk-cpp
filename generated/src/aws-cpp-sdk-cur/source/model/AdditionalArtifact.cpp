/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");


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
          else if (hashCode == ATHENA_HASH)
          {
            return AdditionalArtifact::ATHENA;
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
          case AdditionalArtifact::ATHENA:
            return "ATHENA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalArtifactMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
