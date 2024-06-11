/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/MessagingDataType.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The configuration for connecting a messaging stream to Amazon
   * Kinesis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/StreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class StreamingConfiguration
  {
  public:
    AWS_CHIMESDKMESSAGING_API StreamingConfiguration();
    AWS_CHIMESDKMESSAGING_API StreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API StreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type of the configuration.</p>
     */
    inline const MessagingDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const MessagingDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(MessagingDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline StreamingConfiguration& WithDataType(const MessagingDataType& value) { SetDataType(value); return *this;}
    inline StreamingConfiguration& WithDataType(MessagingDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource in the configuration. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline StreamingConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline StreamingConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline StreamingConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    MessagingDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
