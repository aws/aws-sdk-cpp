/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ComputeEnvironment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ComputeEnvironmentMapper
      {

        static const int SPARK_HASH = HashingUtils::HashString("SPARK");
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int PYTHON_HASH = HashingUtils::HashString("PYTHON");


        ComputeEnvironment GetComputeEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPARK_HASH)
          {
            return ComputeEnvironment::SPARK;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return ComputeEnvironment::ATHENA;
          }
          else if (hashCode == PYTHON_HASH)
          {
            return ComputeEnvironment::PYTHON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeEnvironment>(hashCode);
          }

          return ComputeEnvironment::NOT_SET;
        }

        Aws::String GetNameForComputeEnvironment(ComputeEnvironment enumValue)
        {
          switch(enumValue)
          {
          case ComputeEnvironment::NOT_SET:
            return {};
          case ComputeEnvironment::SPARK:
            return "SPARK";
          case ComputeEnvironment::ATHENA:
            return "ATHENA";
          case ComputeEnvironment::PYTHON:
            return "PYTHON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeEnvironmentMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
