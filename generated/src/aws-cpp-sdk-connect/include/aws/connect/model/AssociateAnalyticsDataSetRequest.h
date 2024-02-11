/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateAnalyticsDataSetRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateAnalyticsDataSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAnalyticsDataSet"; }

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
    inline AssociateAnalyticsDataSetRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the dataset to associate with the target account.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target account. Use to associate a dataset to a
     * different account than the one containing the Amazon Connect instance. If not
     * specified, by default this value is the Amazon Web Services account that has the
     * Amazon Connect instance.</p>
     */
    inline AssociateAnalyticsDataSetRequest& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
