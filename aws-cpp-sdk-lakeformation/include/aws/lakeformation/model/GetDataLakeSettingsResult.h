/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LAKEFORMATION_API GetDataLakeSettingsResult
  {
  public:
    GetDataLakeSettingsResult();
    GetDataLakeSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataLakeSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of AWS Lake Formation principals. </p>
     */
    inline const DataLakeSettings& GetDataLakeSettings() const{ return m_dataLakeSettings; }

    /**
     * <p>A list of AWS Lake Formation principals. </p>
     */
    inline void SetDataLakeSettings(const DataLakeSettings& value) { m_dataLakeSettings = value; }

    /**
     * <p>A list of AWS Lake Formation principals. </p>
     */
    inline void SetDataLakeSettings(DataLakeSettings&& value) { m_dataLakeSettings = std::move(value); }

    /**
     * <p>A list of AWS Lake Formation principals. </p>
     */
    inline GetDataLakeSettingsResult& WithDataLakeSettings(const DataLakeSettings& value) { SetDataLakeSettings(value); return *this;}

    /**
     * <p>A list of AWS Lake Formation principals. </p>
     */
    inline GetDataLakeSettingsResult& WithDataLakeSettings(DataLakeSettings&& value) { SetDataLakeSettings(std::move(value)); return *this;}

  private:

    DataLakeSettings m_dataLakeSettings;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
