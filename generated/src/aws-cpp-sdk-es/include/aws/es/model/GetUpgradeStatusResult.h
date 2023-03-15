﻿/**
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
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeStatusResult();
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline const UpgradeStep& GetUpgradeStep() const{ return m_upgradeStep; }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline void SetUpgradeStep(const UpgradeStep& value) { m_upgradeStep = value; }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline void SetUpgradeStep(UpgradeStep&& value) { m_upgradeStep = std::move(value); }

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline GetUpgradeStatusResult& WithUpgradeStep(const UpgradeStep& value) { SetUpgradeStep(value); return *this;}

    /**
     * <p> Represents one of 3 steps that an Upgrade or Upgrade Eligibility Check does
     * through: <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul>
     * </p>
     */
    inline GetUpgradeStatusResult& WithUpgradeStep(UpgradeStep&& value) { SetUpgradeStep(std::move(value)); return *this;}


    /**
     * <p> One of 4 statuses that a step can go through returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetStepStatus() const{ return m_stepStatus; }

    /**
     * <p> One of 4 statuses that a step can go through returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetStepStatus(const UpgradeStatus& value) { m_stepStatus = value; }

    /**
     * <p> One of 4 statuses that a step can go through returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetStepStatus(UpgradeStatus&& value) { m_stepStatus = std::move(value); }

    /**
     * <p> One of 4 statuses that a step can go through returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline GetUpgradeStatusResult& WithStepStatus(const UpgradeStatus& value) { SetStepStatus(value); return *this;}

    /**
     * <p> One of 4 statuses that a step can go through returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline GetUpgradeStatusResult& WithStepStatus(UpgradeStatus&& value) { SetStepStatus(std::move(value)); return *this;}


    /**
     * <p>A string that describes the update briefly</p>
     */
    inline const Aws::String& GetUpgradeName() const{ return m_upgradeName; }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline void SetUpgradeName(const Aws::String& value) { m_upgradeName = value; }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline void SetUpgradeName(Aws::String&& value) { m_upgradeName = std::move(value); }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline void SetUpgradeName(const char* value) { m_upgradeName.assign(value); }

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline GetUpgradeStatusResult& WithUpgradeName(const Aws::String& value) { SetUpgradeName(value); return *this;}

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline GetUpgradeStatusResult& WithUpgradeName(Aws::String&& value) { SetUpgradeName(std::move(value)); return *this;}

    /**
     * <p>A string that describes the update briefly</p>
     */
    inline GetUpgradeStatusResult& WithUpgradeName(const char* value) { SetUpgradeName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUpgradeStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUpgradeStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUpgradeStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UpgradeStep m_upgradeStep;

    UpgradeStatus m_stepStatus;

    Aws::String m_upgradeName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
