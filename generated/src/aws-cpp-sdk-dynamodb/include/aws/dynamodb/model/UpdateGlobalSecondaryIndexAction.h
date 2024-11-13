/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
#include <aws/dynamodb/model/WarmThroughput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the new provisioned throughput settings to be applied to a global
   * secondary index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalSecondaryIndexAction">AWS
   * API Reference</a></p>
   */
  class UpdateGlobalSecondaryIndexAction
  {
  public:
    AWS_DYNAMODB_API UpdateGlobalSecondaryIndexAction();
    AWS_DYNAMODB_API UpdateGlobalSecondaryIndexAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API UpdateGlobalSecondaryIndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline UpdateGlobalSecondaryIndexAction& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline UpdateGlobalSecondaryIndexAction& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline UpdateGlobalSecondaryIndexAction& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
     * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline UpdateGlobalSecondaryIndexAction& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline UpdateGlobalSecondaryIndexAction& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the maximum number of read and write units for the specified global
     * secondary index. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
     * both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const{ return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    inline void SetOnDemandThroughput(const OnDemandThroughput& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = value; }
    inline void SetOnDemandThroughput(OnDemandThroughput&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::move(value); }
    inline UpdateGlobalSecondaryIndexAction& WithOnDemandThroughput(const OnDemandThroughput& value) { SetOnDemandThroughput(value); return *this;}
    inline UpdateGlobalSecondaryIndexAction& WithOnDemandThroughput(OnDemandThroughput&& value) { SetOnDemandThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput value of the new provisioned throughput
     * settings to be applied to a global secondary index.</p>
     */
    inline const WarmThroughput& GetWarmThroughput() const{ return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    inline void SetWarmThroughput(const WarmThroughput& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = value; }
    inline void SetWarmThroughput(WarmThroughput&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::move(value); }
    inline UpdateGlobalSecondaryIndexAction& WithWarmThroughput(const WarmThroughput& value) { SetWarmThroughput(value); return *this;}
    inline UpdateGlobalSecondaryIndexAction& WithWarmThroughput(WarmThroughput&& value) { SetWarmThroughput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;

    WarmThroughput m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
