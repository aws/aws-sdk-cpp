/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Persona.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace PersonaMapper
      {

        static const int OWNER_HASH = HashingUtils::HashString("OWNER");
        static const int VIEWER_HASH = HashingUtils::HashString("VIEWER");


        Persona GetPersonaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNER_HASH)
          {
            return Persona::OWNER;
          }
          else if (hashCode == VIEWER_HASH)
          {
            return Persona::VIEWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Persona>(hashCode);
          }

          return Persona::NOT_SET;
        }

        Aws::String GetNameForPersona(Persona enumValue)
        {
          switch(enumValue)
          {
          case Persona::NOT_SET:
            return {};
          case Persona::OWNER:
            return "OWNER";
          case Persona::VIEWER:
            return "VIEWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersonaMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
