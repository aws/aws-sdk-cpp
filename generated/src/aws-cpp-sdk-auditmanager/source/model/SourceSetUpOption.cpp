/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/SourceSetUpOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace SourceSetUpOptionMapper
      {

        static const int System_Controls_Mapping_HASH = HashingUtils::HashString("System_Controls_Mapping");
        static const int Procedural_Controls_Mapping_HASH = HashingUtils::HashString("Procedural_Controls_Mapping");


        SourceSetUpOption GetSourceSetUpOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == System_Controls_Mapping_HASH)
          {
            return SourceSetUpOption::System_Controls_Mapping;
          }
          else if (hashCode == Procedural_Controls_Mapping_HASH)
          {
            return SourceSetUpOption::Procedural_Controls_Mapping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceSetUpOption>(hashCode);
          }

          return SourceSetUpOption::NOT_SET;
        }

        Aws::String GetNameForSourceSetUpOption(SourceSetUpOption enumValue)
        {
          switch(enumValue)
          {
          case SourceSetUpOption::NOT_SET:
            return {};
          case SourceSetUpOption::System_Controls_Mapping:
            return "System_Controls_Mapping";
          case SourceSetUpOption::Procedural_Controls_Mapping:
            return "Procedural_Controls_Mapping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceSetUpOptionMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
