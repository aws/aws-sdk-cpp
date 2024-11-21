/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CommandNamespace.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CommandNamespaceMapper
      {

        static const int AWS_IoT_HASH = HashingUtils::HashString("AWS-IoT");
        static const int AWS_IoT_FleetWise_HASH = HashingUtils::HashString("AWS-IoT-FleetWise");


        CommandNamespace GetCommandNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_IoT_HASH)
          {
            return CommandNamespace::AWS_IoT;
          }
          else if (hashCode == AWS_IoT_FleetWise_HASH)
          {
            return CommandNamespace::AWS_IoT_FleetWise;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandNamespace>(hashCode);
          }

          return CommandNamespace::NOT_SET;
        }

        Aws::String GetNameForCommandNamespace(CommandNamespace enumValue)
        {
          switch(enumValue)
          {
          case CommandNamespace::NOT_SET:
            return {};
          case CommandNamespace::AWS_IoT:
            return "AWS-IoT";
          case CommandNamespace::AWS_IoT_FleetWise:
            return "AWS-IoT-FleetWise";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommandNamespaceMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
