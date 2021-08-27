/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ICD10CMEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace ICD10CMEntityTypeMapper
      {

        static const int DX_NAME_HASH = HashingUtils::HashString("DX_NAME");


        ICD10CMEntityType GetICD10CMEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DX_NAME_HASH)
          {
            return ICD10CMEntityType::DX_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICD10CMEntityType>(hashCode);
          }

          return ICD10CMEntityType::NOT_SET;
        }

        Aws::String GetNameForICD10CMEntityType(ICD10CMEntityType enumValue)
        {
          switch(enumValue)
          {
          case ICD10CMEntityType::DX_NAME:
            return "DX_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICD10CMEntityTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
