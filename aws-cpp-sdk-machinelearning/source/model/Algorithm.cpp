/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/Algorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MachineLearning
  {
    namespace Model
    {
      namespace AlgorithmMapper
      {

        static const int sgd_HASH = HashingUtils::HashString("sgd");


        Algorithm GetAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sgd_HASH)
          {
            return Algorithm::sgd;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Algorithm>(hashCode);
          }

          return Algorithm::NOT_SET;
        }

        Aws::String GetNameForAlgorithm(Algorithm enumValue)
        {
          switch(enumValue)
          {
          case Algorithm::sgd:
            return "sgd";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlgorithmMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
