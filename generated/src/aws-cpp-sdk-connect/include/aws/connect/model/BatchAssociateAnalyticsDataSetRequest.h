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
  class BatchAssociateAnalyticsDataSetRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateAnalyticsDataSet"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline BatchAssociateAnalyticsDataSetRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline BatchAssociateAnalyticsDataSetRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline BatchAssociateAnalyticsDataSetRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of dataset identifiers to associate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const{ return m_dataSetIds; }
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }
    inline void SetDataSetIds(const Aws::Vector<Aws::String>& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = value; }
    inline void SetDataSetIds(Aws::Vector<Aws::String>&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::move(value); }
    inline BatchAssociateAnalyticsDataSetRequest& WithDataSetIds(const Aws::Vector<Aws::String>& value) { SetDataSetIds(value); return *this;}
    inline BatchAssociateAnalyticsDataSetRequest& WithDataSetIds(Aws::Vector<Aws::String>&& value) { SetDataSetIds(std::move(value)); return *this;}
    inline BatchAssociateAnalyticsDataSetRequest& AddDataSetIds(const Aws::String& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }
    inline BatchAssociateAnalyticsDataSetRequest& AddDataSetIds(Aws::String&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(std::move(value)); return *this; }
    inline BatchAssociateAnalyticsDataSetRequest& AddDataSetIds(const char* value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }
    inline BatchAssociateAnalyticsDataSetRequest& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}
    inline BatchAssociateAnalyticsDataSetRequest& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}
    inline BatchAssociateAnalyticsDataSetRequest& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}
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
