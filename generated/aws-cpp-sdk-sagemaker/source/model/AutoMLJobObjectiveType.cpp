/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobObjectiveType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AutoMLJobObjectiveTypeMapper
      {

        static const int Maximize_HASH = HashingUtils::HashString("Maximize");
        static const int Minimize_HASH = HashingUtils::HashString("Minimize");


        AutoMLJobObjectiveType GetAutoMLJobObjectiveTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximize_HASH)
          {
            return AutoMLJobObjectiveType::Maximize;
          }
          else if (hashCode == Minimize_HASH)
          {
            return AutoMLJobObjectiveType::Minimize;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLJobObjectiveType>(hashCode);
          }

          return AutoMLJobObjectiveType::NOT_SET;
        }

        Aws::String GetNameForAutoMLJobObjectiveType(AutoMLJobObjectiveType enumValue)
        {
          switch(enumValue)
          {
          case AutoMLJobObjectiveType::Maximize:
            return "Maximize";
          case AutoMLJobObjectiveType::Minimize:
            return "Minimize";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLJobObjectiveTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
