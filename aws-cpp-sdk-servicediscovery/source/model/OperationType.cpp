/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/OperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace OperationTypeMapper
      {

        static const int CREATE_NAMESPACE_HASH = HashingUtils::HashString("CREATE_NAMESPACE");
        static const int DELETE_NAMESPACE_HASH = HashingUtils::HashString("DELETE_NAMESPACE");
        static const int UPDATE_SERVICE_HASH = HashingUtils::HashString("UPDATE_SERVICE");
        static const int REGISTER_INSTANCE_HASH = HashingUtils::HashString("REGISTER_INSTANCE");
        static const int DEREGISTER_INSTANCE_HASH = HashingUtils::HashString("DEREGISTER_INSTANCE");


        OperationType GetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_NAMESPACE_HASH)
          {
            return OperationType::CREATE_NAMESPACE;
          }
          else if (hashCode == DELETE_NAMESPACE_HASH)
          {
            return OperationType::DELETE_NAMESPACE;
          }
          else if (hashCode == UPDATE_SERVICE_HASH)
          {
            return OperationType::UPDATE_SERVICE;
          }
          else if (hashCode == REGISTER_INSTANCE_HASH)
          {
            return OperationType::REGISTER_INSTANCE;
          }
          else if (hashCode == DEREGISTER_INSTANCE_HASH)
          {
            return OperationType::DEREGISTER_INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationType>(hashCode);
          }

          return OperationType::NOT_SET;
        }

        Aws::String GetNameForOperationType(OperationType enumValue)
        {
          switch(enumValue)
          {
          case OperationType::CREATE_NAMESPACE:
            return "CREATE_NAMESPACE";
          case OperationType::DELETE_NAMESPACE:
            return "DELETE_NAMESPACE";
          case OperationType::UPDATE_SERVICE:
            return "UPDATE_SERVICE";
          case OperationType::REGISTER_INSTANCE:
            return "REGISTER_INSTANCE";
          case OperationType::DEREGISTER_INSTANCE:
            return "DEREGISTER_INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationTypeMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
