/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ComputeEnvironments.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ComputeEnvironmentsMapper
      {

        static const int SPARK_HASH = HashingUtils::HashString("SPARK");
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int PYTHON_HASH = HashingUtils::HashString("PYTHON");


        ComputeEnvironments GetComputeEnvironmentsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPARK_HASH)
          {
            return ComputeEnvironments::SPARK;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return ComputeEnvironments::ATHENA;
          }
          else if (hashCode == PYTHON_HASH)
          {
            return ComputeEnvironments::PYTHON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeEnvironments>(hashCode);
          }

          return ComputeEnvironments::NOT_SET;
        }

        Aws::String GetNameForComputeEnvironments(ComputeEnvironments enumValue)
        {
          switch(enumValue)
          {
          case ComputeEnvironments::NOT_SET:
            return {};
          case ComputeEnvironments::SPARK:
            return "SPARK";
          case ComputeEnvironments::ATHENA:
            return "ATHENA";
          case ComputeEnvironments::PYTHON:
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

      } // namespace ComputeEnvironmentsMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
