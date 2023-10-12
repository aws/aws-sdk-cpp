/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ServiceFieldMapper
      {

        static constexpr uint32_t TAGS_HASH = ConstExprHashingUtils::HashString("TAGS");


        ServiceField GetServiceFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAGS_HASH)
          {
            return ServiceField::TAGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceField>(hashCode);
          }

          return ServiceField::NOT_SET;
        }

        Aws::String GetNameForServiceField(ServiceField enumValue)
        {
          switch(enumValue)
          {
          case ServiceField::NOT_SET:
            return {};
          case ServiceField::TAGS:
            return "TAGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceFieldMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
