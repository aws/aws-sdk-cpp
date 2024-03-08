/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ArtifactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace ArtifactTypeMapper
      {

        static const int UDF_HASH = HashingUtils::HashString("UDF");
        static const int DEPENDENCY_JAR_HASH = HashingUtils::HashString("DEPENDENCY_JAR");


        ArtifactType GetArtifactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UDF_HASH)
          {
            return ArtifactType::UDF;
          }
          else if (hashCode == DEPENDENCY_JAR_HASH)
          {
            return ArtifactType::DEPENDENCY_JAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactType>(hashCode);
          }

          return ArtifactType::NOT_SET;
        }

        Aws::String GetNameForArtifactType(ArtifactType enumValue)
        {
          switch(enumValue)
          {
          case ArtifactType::NOT_SET:
            return {};
          case ArtifactType::UDF:
            return "UDF";
          case ArtifactType::DEPENDENCY_JAR:
            return "DEPENDENCY_JAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArtifactTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
