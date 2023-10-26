/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KafkaSslEndpointIdentificationAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace KafkaSslEndpointIdentificationAlgorithmMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int https_HASH = HashingUtils::HashString("https");


        KafkaSslEndpointIdentificationAlgorithm GetKafkaSslEndpointIdentificationAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return KafkaSslEndpointIdentificationAlgorithm::none;
          }
          else if (hashCode == https_HASH)
          {
            return KafkaSslEndpointIdentificationAlgorithm::https;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaSslEndpointIdentificationAlgorithm>(hashCode);
          }

          return KafkaSslEndpointIdentificationAlgorithm::NOT_SET;
        }

        Aws::String GetNameForKafkaSslEndpointIdentificationAlgorithm(KafkaSslEndpointIdentificationAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case KafkaSslEndpointIdentificationAlgorithm::NOT_SET:
            return {};
          case KafkaSslEndpointIdentificationAlgorithm::none:
            return "none";
          case KafkaSslEndpointIdentificationAlgorithm::https:
            return "https";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaSslEndpointIdentificationAlgorithmMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
