/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DataLakeSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LAKEFORMATION_API GetDataLakeSettingsResult() = default;
    AWS_LAKEFORMATION_API GetDataLakeSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetDataLakeSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure representing a list of Lake Formation principals designated as
     * data lake administrators.</p>
     */
    inline const DataLakeSettings& GetDataLakeSettings() const { return m_dataLakeSettings; }
    template<typename DataLakeSettingsT = DataLakeSettings>
    void SetDataLakeSettings(DataLakeSettingsT&& value) { m_dataLakeSettingsHasBeenSet = true; m_dataLakeSettings = std::forward<DataLakeSettingsT>(value); }
    template<typename DataLakeSettingsT = DataLakeSettings>
    GetDataLakeSettingsResult& WithDataLakeSettings(DataLakeSettingsT&& value) { SetDataLakeSettings(std::forward<DataLakeSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataLakeSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataLakeSettings m_dataLakeSettings;
    bool m_dataLakeSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
