/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/ParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DAX
  {
    namespace Model
    {
      namespace ParameterTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int NODE_TYPE_SPECIFIC_HASH = HashingUtils::HashString("NODE_TYPE_SPECIFIC");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ParameterType::DEFAULT;
          }
          else if (hashCode == NODE_TYPE_SPECIFIC_HASH)
          {
            return ParameterType::NODE_TYPE_SPECIFIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterType>(hashCode);
          }

          return ParameterType::NOT_SET;
        }

        Aws::String GetNameForParameterType(ParameterType enumValue)
        {
          switch(enumValue)
          {
          case ParameterType::DEFAULT:
            return "DEFAULT";
          case ParameterType::NODE_TYPE_SPECIFIC:
            return "NODE_TYPE_SPECIFIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTypeMapper
    } // namespace Model
  } // namespace DAX
} // namespace Aws
