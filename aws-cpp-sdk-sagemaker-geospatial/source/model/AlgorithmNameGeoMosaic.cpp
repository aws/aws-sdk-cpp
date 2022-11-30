/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/AlgorithmNameGeoMosaic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace AlgorithmNameGeoMosaicMapper
      {

        static const int NEAR_HASH = HashingUtils::HashString("NEAR");
        static const int BILINEAR_HASH = HashingUtils::HashString("BILINEAR");
        static const int CUBIC_HASH = HashingUtils::HashString("CUBIC");
        static const int CUBICSPLINE_HASH = HashingUtils::HashString("CUBICSPLINE");
        static const int LANCZOS_HASH = HashingUtils::HashString("LANCZOS");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int RMS_HASH = HashingUtils::HashString("RMS");
        static const int MODE_HASH = HashingUtils::HashString("MODE");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int MED_HASH = HashingUtils::HashString("MED");
        static const int Q1_HASH = HashingUtils::HashString("Q1");
        static const int Q3_HASH = HashingUtils::HashString("Q3");
        static const int SUM_HASH = HashingUtils::HashString("SUM");


        AlgorithmNameGeoMosaic GetAlgorithmNameGeoMosaicForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEAR_HASH)
          {
            return AlgorithmNameGeoMosaic::NEAR;
          }
          else if (hashCode == BILINEAR_HASH)
          {
            return AlgorithmNameGeoMosaic::BILINEAR;
          }
          else if (hashCode == CUBIC_HASH)
          {
            return AlgorithmNameGeoMosaic::CUBIC;
          }
          else if (hashCode == CUBICSPLINE_HASH)
          {
            return AlgorithmNameGeoMosaic::CUBICSPLINE;
          }
          else if (hashCode == LANCZOS_HASH)
          {
            return AlgorithmNameGeoMosaic::LANCZOS;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return AlgorithmNameGeoMosaic::AVERAGE;
          }
          else if (hashCode == RMS_HASH)
          {
            return AlgorithmNameGeoMosaic::RMS;
          }
          else if (hashCode == MODE_HASH)
          {
            return AlgorithmNameGeoMosaic::MODE;
          }
          else if (hashCode == MAX_HASH)
          {
            return AlgorithmNameGeoMosaic::MAX;
          }
          else if (hashCode == MIN_HASH)
          {
            return AlgorithmNameGeoMosaic::MIN;
          }
          else if (hashCode == MED_HASH)
          {
            return AlgorithmNameGeoMosaic::MED;
          }
          else if (hashCode == Q1_HASH)
          {
            return AlgorithmNameGeoMosaic::Q1;
          }
          else if (hashCode == Q3_HASH)
          {
            return AlgorithmNameGeoMosaic::Q3;
          }
          else if (hashCode == SUM_HASH)
          {
            return AlgorithmNameGeoMosaic::SUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlgorithmNameGeoMosaic>(hashCode);
          }

          return AlgorithmNameGeoMosaic::NOT_SET;
        }

        Aws::String GetNameForAlgorithmNameGeoMosaic(AlgorithmNameGeoMosaic enumValue)
        {
          switch(enumValue)
          {
          case AlgorithmNameGeoMosaic::NEAR:
            return "NEAR";
          case AlgorithmNameGeoMosaic::BILINEAR:
            return "BILINEAR";
          case AlgorithmNameGeoMosaic::CUBIC:
            return "CUBIC";
          case AlgorithmNameGeoMosaic::CUBICSPLINE:
            return "CUBICSPLINE";
          case AlgorithmNameGeoMosaic::LANCZOS:
            return "LANCZOS";
          case AlgorithmNameGeoMosaic::AVERAGE:
            return "AVERAGE";
          case AlgorithmNameGeoMosaic::RMS:
            return "RMS";
          case AlgorithmNameGeoMosaic::MODE:
            return "MODE";
          case AlgorithmNameGeoMosaic::MAX:
            return "MAX";
          case AlgorithmNameGeoMosaic::MIN:
            return "MIN";
          case AlgorithmNameGeoMosaic::MED:
            return "MED";
          case AlgorithmNameGeoMosaic::Q1:
            return "Q1";
          case AlgorithmNameGeoMosaic::Q3:
            return "Q3";
          case AlgorithmNameGeoMosaic::SUM:
            return "SUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlgorithmNameGeoMosaicMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
