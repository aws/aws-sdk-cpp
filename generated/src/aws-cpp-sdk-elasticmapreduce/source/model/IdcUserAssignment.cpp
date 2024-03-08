/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/IdcUserAssignment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace IdcUserAssignmentMapper
      {

        static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        IdcUserAssignment GetIdcUserAssignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRED_HASH)
          {
            return IdcUserAssignment::REQUIRED;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return IdcUserAssignment::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdcUserAssignment>(hashCode);
          }

          return IdcUserAssignment::NOT_SET;
        }

        Aws::String GetNameForIdcUserAssignment(IdcUserAssignment enumValue)
        {
          switch(enumValue)
          {
          case IdcUserAssignment::NOT_SET:
            return {};
          case IdcUserAssignment::REQUIRED:
            return "REQUIRED";
          case IdcUserAssignment::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdcUserAssignmentMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
