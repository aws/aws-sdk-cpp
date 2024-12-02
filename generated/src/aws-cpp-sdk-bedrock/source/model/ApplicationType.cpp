/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ApplicationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace ApplicationTypeMapper
      {

        static const int ModelEvaluation_HASH = HashingUtils::HashString("ModelEvaluation");
        static const int RagEvaluation_HASH = HashingUtils::HashString("RagEvaluation");


        ApplicationType GetApplicationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ModelEvaluation_HASH)
          {
            return ApplicationType::ModelEvaluation;
          }
          else if (hashCode == RagEvaluation_HASH)
          {
            return ApplicationType::RagEvaluation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationType>(hashCode);
          }

          return ApplicationType::NOT_SET;
        }

        Aws::String GetNameForApplicationType(ApplicationType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationType::NOT_SET:
            return {};
          case ApplicationType::ModelEvaluation:
            return "ModelEvaluation";
          case ApplicationType::RagEvaluation:
            return "RagEvaluation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
