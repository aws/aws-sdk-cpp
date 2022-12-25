/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DataLakeSettings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LakeFormation
{
namespace Model
{
  class GetDataLakeSettingsResult
  {
  public:
    AWS_LAKEFORMATION_API GetDataLakeSettingsResult();
    AWS_LAKEFORMATION_API GetDataLakeSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetDataLakeSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline const DataLakeSettings& GetDataLakeSettings() const{ return m_dataLakeSettings; }

    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline void SetDataLakeSettings(const DataLakeSettings& value) { m_dataLakeSettings = value; }

    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline void SetDataLakeSettings(DataLakeSettings&& value) { m_dataLakeSettings = std::move(value); }

    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline GetDataLakeSettingsResult& WithDataLakeSettings(const DataLakeSettings& value) { SetDataLakeSettings(value); return *this;}

    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline GetDataLakeSettingsResult& WithDataLakeSettings(DataLakeSettings&& value) { SetDataLakeSettings(std::move(value)); return *this;}

  private:

    DataLakeSettings m_dataLakeSettings;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
