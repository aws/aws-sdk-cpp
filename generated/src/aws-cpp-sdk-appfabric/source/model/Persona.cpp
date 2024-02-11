/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Persona.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace PersonaMapper
      {

        static const int admin_HASH = HashingUtils::HashString("admin");
        static const int endUser_HASH = HashingUtils::HashString("endUser");


        Persona GetPersonaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == admin_HASH)
          {
            return Persona::admin;
          }
          else if (hashCode == endUser_HASH)
          {
            return Persona::endUser;
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
          case Persona::admin:
            return "admin";
          case Persona::endUser:
            return "endUser";
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
  } // namespace AppFabric
} // namespace Aws
