/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/DataSourceConfigurations.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateMemberDetectorsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateMemberDetectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMemberDetectors"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline const DataSourceConfigurations& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline void SetDataSources(const DataSourceConfigurations& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline void SetDataSources(DataSourceConfigurations&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDataSources(const DataSourceConfigurations& value) { SetDataSources(value); return *this;}

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDataSources(DataSourceConfigurations&& value) { SetDataSources(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    DataSourceConfigurations m_dataSources;
    bool m_dataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
