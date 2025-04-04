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
   * <p>The parameters for EventBridge to use when invoking the resource
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeConnectionResourceParameters">AWS
   * API Reference</a></p>
   */
  class DescribeConnectionResourceParameters
  {
  public:
    AWS_EVENTBRIDGE_API DescribeConnectionResourceParameters() = default;
    AWS_EVENTBRIDGE_API DescribeConnectionResourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API DescribeConnectionResourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration for the private
     * API.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    template<typename ResourceConfigurationArnT = Aws::String>
    void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value); }
    template<typename ResourceConfigurationArnT = Aws::String>
    DescribeConnectionResourceParameters& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) { SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections to private APIs, the Amazon Resource Name (ARN) of the
     * resource association EventBridge created between the connection and the private
     * API's resource configuration.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/connection-private.html#connection-private-snra">
     * Managing service network resource associations for connections</a> in the <i>
     * <i>Amazon EventBridge User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetResourceAssociationArn() const { return m_resourceAssociationArn; }
    inline bool ResourceAssociationArnHasBeenSet() const { return m_resourceAssociationArnHasBeenSet; }
    template<typename ResourceAssociationArnT = Aws::String>
    void SetResourceAssociationArn(ResourceAssociationArnT&& value) { m_resourceAssociationArnHasBeenSet = true; m_resourceAssociationArn = std::forward<ResourceAssociationArnT>(value); }
    template<typename ResourceAssociationArnT = Aws::String>
    DescribeConnectionResourceParameters& WithResourceAssociationArn(ResourceAssociationArnT&& value) { SetResourceAssociationArn(std::forward<ResourceAssociationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;

    Aws::String m_resourceAssociationArn;
    bool m_resourceAssociationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
