/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/UpgradeStep.h>
#include <aws/es/model/UpgradeStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code> <a>GetUpgradeStatus</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetUpgradeStatusResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeStatusResult() = default;
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline UpgradeStep GetUpgradeStep() const { return m_upgradeStep; }
    inline void SetUpgradeStep(UpgradeStep value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = value; }
    inline GetUpgradeStatusResult& WithUpgradeStep(UpgradeStep value) { SetUpgradeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One of 4 statuses that a step can go through returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline UpgradeStatus GetStepStatus() const { return m_stepStatus; }
    inline void SetStepStatus(UpgradeStatus value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }
    inline GetUpgradeStatusResult& WithStepStatus(UpgradeStatus value) { SetStepStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the update briefly</p>
     */
    inline const Aws::String& GetUpgradeName() const { return m_upgradeName; }
    template<typename UpgradeNameT = Aws::String>
    void SetUpgradeName(UpgradeNameT&& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = std::forward<UpgradeNameT>(value); }
    template<typename UpgradeNameT = Aws::String>
    GetUpgradeStatusResult& WithUpgradeName(UpgradeNameT&& value) { SetUpgradeName(std::forward<UpgradeNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUpgradeStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UpgradeStep m_upgradeStep{UpgradeStep::NOT_SET};
    bool m_upgradeStepHasBeenSet = false;

    UpgradeStatus m_stepStatus{UpgradeStatus::NOT_SET};
    bool m_stepStatusHasBeenSet = false;

    Aws::String m_upgradeName;
    bool m_upgradeNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
