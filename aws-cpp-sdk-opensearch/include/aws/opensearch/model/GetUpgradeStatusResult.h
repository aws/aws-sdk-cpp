/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/UpgradeStep.h>
#include <aws/opensearch/model/UpgradeStatus.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p> Container for the response returned by the <code> <a>GetUpgradeStatus</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeStatusResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult
  {
  public:
    GetUpgradeStatusResult();
    GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUpgradeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline const UpgradeStep& GetUpgradeStep() const{ return m_upgradeStep; }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline void SetUpgradeStep(const UpgradeStep& value) { m_upgradeStep = value; }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline void SetUpgradeStep(UpgradeStep&& value) { m_upgradeStep = std::move(value); }

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline GetUpgradeStatusResult& WithUpgradeStep(const UpgradeStep& value) { SetUpgradeStep(value); return *this;}

    /**
     * <p> One of three steps an upgrade or upgrade eligibility check goes through:
     * <ul> <li>PreUpgradeCheck</li> <li>Snapshot</li> <li>Upgrade</li> </ul> </p>
     */
    inline GetUpgradeStatusResult& WithUpgradeStep(UpgradeStep&& value) { SetUpgradeStep(std::move(value)); return *this;}


    /**
     * <p> One of four statuses an upgrade have, returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline const UpgradeStatus& GetStepStatus() const{ return m_stepStatus; }

    /**
     * <p> One of four statuses an upgrade have, returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetStepStatus(const UpgradeStatus& value) { m_stepStatus = value; }

    /**
     * <p> One of four statuses an upgrade have, returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline void SetStepStatus(UpgradeStatus&& value) { m_stepStatus = std::move(value); }

    /**
     * <p> One of four statuses an upgrade have, returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline GetUpgradeStatusResult& WithStepStatus(const UpgradeStatus& value) { SetStepStatus(value); return *this;}

    /**
     * <p> One of four statuses an upgrade have, returned as part of the <code>
     * <a>GetUpgradeStatusResponse</a> </code> object. The status can take one of the
     * following values: <ul> <li>In Progress</li> <li>Succeeded</li> <li>Succeeded
     * with Issues</li> <li>Failed</li> </ul> </p>
     */
    inline GetUpgradeStatusResult& WithStepStatus(UpgradeStatus&& value) { SetStepStatus(std::move(value)); return *this;}


    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline const Aws::String& GetUpgradeName() const{ return m_upgradeName; }

    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline void SetUpgradeName(const Aws::String& value) { m_upgradeName = value; }

    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline void SetUpgradeName(Aws::String&& value) { m_upgradeName = std::move(value); }

    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline void SetUpgradeName(const char* value) { m_upgradeName.assign(value); }

    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline GetUpgradeStatusResult& WithUpgradeName(const Aws::String& value) { SetUpgradeName(value); return *this;}

    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline GetUpgradeStatusResult& WithUpgradeName(Aws::String&& value) { SetUpgradeName(std::move(value)); return *this;}

    /**
     * <p>A string that briefly describes the update.</p>
     */
    inline GetUpgradeStatusResult& WithUpgradeName(const char* value) { SetUpgradeName(value); return *this;}

  private:

    UpgradeStep m_upgradeStep;

    UpgradeStatus m_stepStatus;

    Aws::String m_upgradeName;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
