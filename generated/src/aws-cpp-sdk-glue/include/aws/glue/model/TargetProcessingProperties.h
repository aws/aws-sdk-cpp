/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The resource properties associated with the integration target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TargetProcessingProperties">AWS
   * API Reference</a></p>
   */
  class TargetProcessingProperties
  {
  public:
    AWS_GLUE_API TargetProcessingProperties();
    AWS_GLUE_API TargetProcessingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TargetProcessingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role to access the Glue database.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline TargetProcessingProperties& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline TargetProcessingProperties& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline TargetProcessingProperties& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key used for encryption.</p>
     */
    inline const Aws::String& GetKmsArn() const{ return m_kmsArn; }
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }
    inline void SetKmsArn(const Aws::String& value) { m_kmsArnHasBeenSet = true; m_kmsArn = value; }
    inline void SetKmsArn(Aws::String&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::move(value); }
    inline void SetKmsArn(const char* value) { m_kmsArnHasBeenSet = true; m_kmsArn.assign(value); }
    inline TargetProcessingProperties& WithKmsArn(const Aws::String& value) { SetKmsArn(value); return *this;}
    inline TargetProcessingProperties& WithKmsArn(Aws::String&& value) { SetKmsArn(std::move(value)); return *this;}
    inline TargetProcessingProperties& WithKmsArn(const char* value) { SetKmsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue network connection to configure the Glue job running in the customer
     * VPC.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline TargetProcessingProperties& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline TargetProcessingProperties& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline TargetProcessingProperties& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an Eventbridge event bus to receive the integration status
     * notification.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }
    inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = value; }
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::move(value); }
    inline void SetEventBusArn(const char* value) { m_eventBusArnHasBeenSet = true; m_eventBusArn.assign(value); }
    inline TargetProcessingProperties& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}
    inline TargetProcessingProperties& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}
    inline TargetProcessingProperties& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
