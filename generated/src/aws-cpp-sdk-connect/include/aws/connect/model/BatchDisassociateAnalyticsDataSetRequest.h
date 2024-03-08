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
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateAnalyticsDataSet"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const{ return m_dataSetIds; }

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline void SetDataSetIds(const Aws::Vector<Aws::String>& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = value; }

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline void SetDataSetIds(Aws::Vector<Aws::String>&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::move(value); }

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithDataSetIds(const Aws::Vector<Aws::String>& value) { SetDataSetIds(value); return *this;}

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithDataSetIds(Aws::Vector<Aws::String>&& value) { SetDataSetIds(std::move(value)); return *this;}

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& AddDataSetIds(const Aws::String& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& AddDataSetIds(Aws::String&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of associated dataset identifiers to remove.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& AddDataSetIds(const char* value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target account. Use to disassociate a dataset from a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline BatchDisassociateAnalyticsDataSetRequest& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}

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
