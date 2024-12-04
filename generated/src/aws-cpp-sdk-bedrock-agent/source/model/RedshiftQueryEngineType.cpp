/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftQueryEngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace RedshiftQueryEngineTypeMapper
      {

        static const int SERVERLESS_HASH = HashingUtils::HashString("SERVERLESS");
        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");


        RedshiftQueryEngineType GetRedshiftQueryEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVERLESS_HASH)
          {
            return RedshiftQueryEngineType::SERVERLESS;
          }
          else if (hashCode == PROVISIONED_HASH)
          {
            return RedshiftQueryEngineType::PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftQueryEngineType>(hashCode);
          }

          return RedshiftQueryEngineType::NOT_SET;
        }

        Aws::String GetNameForRedshiftQueryEngineType(RedshiftQueryEngineType enumValue)
        {
          switch(enumValue)
          {
          case RedshiftQueryEngineType::NOT_SET:
            return {};
          case RedshiftQueryEngineType::SERVERLESS:
            return "SERVERLESS";
          case RedshiftQueryEngineType::PROVISIONED:
            return "PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedshiftQueryEngineTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
