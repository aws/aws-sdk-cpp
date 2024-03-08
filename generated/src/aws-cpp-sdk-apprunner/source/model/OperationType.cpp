/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/OperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace OperationTypeMapper
      {

        static const int START_DEPLOYMENT_HASH = HashingUtils::HashString("START_DEPLOYMENT");
        static const int CREATE_SERVICE_HASH = HashingUtils::HashString("CREATE_SERVICE");
        static const int PAUSE_SERVICE_HASH = HashingUtils::HashString("PAUSE_SERVICE");
        static const int RESUME_SERVICE_HASH = HashingUtils::HashString("RESUME_SERVICE");
        static const int DELETE_SERVICE_HASH = HashingUtils::HashString("DELETE_SERVICE");
        static const int UPDATE_SERVICE_HASH = HashingUtils::HashString("UPDATE_SERVICE");


        OperationType GetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_DEPLOYMENT_HASH)
          {
            return OperationType::START_DEPLOYMENT;
          }
          else if (hashCode == CREATE_SERVICE_HASH)
          {
            return OperationType::CREATE_SERVICE;
          }
          else if (hashCode == PAUSE_SERVICE_HASH)
          {
            return OperationType::PAUSE_SERVICE;
          }
          else if (hashCode == RESUME_SERVICE_HASH)
          {
            return OperationType::RESUME_SERVICE;
          }
          else if (hashCode == DELETE_SERVICE_HASH)
          {
            return OperationType::DELETE_SERVICE;
          }
          else if (hashCode == UPDATE_SERVICE_HASH)
          {
            return OperationType::UPDATE_SERVICE;
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
          case OperationType::NOT_SET:
            return {};
          case OperationType::START_DEPLOYMENT:
            return "START_DEPLOYMENT";
          case OperationType::CREATE_SERVICE:
            return "CREATE_SERVICE";
          case OperationType::PAUSE_SERVICE:
            return "PAUSE_SERVICE";
          case OperationType::RESUME_SERVICE:
            return "RESUME_SERVICE";
          case OperationType::DELETE_SERVICE:
            return "DELETE_SERVICE";
          case OperationType::UPDATE_SERVICE:
            return "UPDATE_SERVICE";
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
  } // namespace AppRunner
} // namespace Aws
