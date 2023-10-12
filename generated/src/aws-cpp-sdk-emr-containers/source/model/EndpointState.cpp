/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/EndpointState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace EndpointStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t TERMINATED_WITH_ERRORS_HASH = ConstExprHashingUtils::HashString("TERMINATED_WITH_ERRORS");


        EndpointState GetEndpointStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EndpointState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EndpointState::ACTIVE;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return EndpointState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return EndpointState::TERMINATED;
          }
          else if (hashCode == TERMINATED_WITH_ERRORS_HASH)
          {
            return EndpointState::TERMINATED_WITH_ERRORS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointState>(hashCode);
          }

          return EndpointState::NOT_SET;
        }

        Aws::String GetNameForEndpointState(EndpointState enumValue)
        {
          switch(enumValue)
          {
          case EndpointState::NOT_SET:
            return {};
          case EndpointState::CREATING:
            return "CREATING";
          case EndpointState::ACTIVE:
            return "ACTIVE";
          case EndpointState::TERMINATING:
            return "TERMINATING";
          case EndpointState::TERMINATED:
            return "TERMINATED";
          case EndpointState::TERMINATED_WITH_ERRORS:
            return "TERMINATED_WITH_ERRORS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStateMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
