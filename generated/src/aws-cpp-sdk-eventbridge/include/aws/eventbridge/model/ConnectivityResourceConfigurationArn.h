/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The Amazon Resource Name (ARN) of the resource configuration for the resource
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectivityResourceConfigurationArn">AWS
   * API Reference</a></p>
   */
  class ConnectivityResourceConfigurationArn
  {
  public:
    AWS_EVENTBRIDGE_API ConnectivityResourceConfigurationArn();
    AWS_EVENTBRIDGE_API ConnectivityResourceConfigurationArn(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectivityResourceConfigurationArn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration for the resource
     * endpoint.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn.assign(value); }
    inline ConnectivityResourceConfigurationArn& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline ConnectivityResourceConfigurationArn& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline ConnectivityResourceConfigurationArn& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
