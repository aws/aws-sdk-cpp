/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class BatchDisassociateAnalyticsDataSetRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateAnalyticsDataSet"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    BatchDisassociateAnalyticsDataSetRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const { return m_dataSetIds; }
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }
    template<typename DataSetIdsT = Aws::Vector<Aws::String>>
    void SetDataSetIds(DataSetIdsT&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::forward<DataSetIdsT>(value); }
    template<typename DataSetIdsT = Aws::Vector<Aws::String>>
    BatchDisassociateAnalyticsDataSetRequest& WithDataSetIds(DataSetIdsT&& value) { SetDataSetIds(std::forward<DataSetIdsT>(value)); return *this;}
    template<typename DataSetIdsT = Aws::String>
    BatchDisassociateAnalyticsDataSetRequest& AddDataSetIds(DataSetIdsT&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.emplace_back(std::forward<DataSetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    template<typename TargetAccountIdT = Aws::String>
    void SetTargetAccountId(TargetAccountIdT&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::forward<TargetAccountIdT>(value); }
    template<typename TargetAccountIdT = Aws::String>
    BatchDisassociateAnalyticsDataSetRequest& WithTargetAccountId(TargetAccountIdT&& value) { SetTargetAccountId(std::forward<TargetAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSetIds;
    bool m_dataSetIdsHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
