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
    AWS_EVENTBRIDGE_API DescribeConnectionResourceParameters();
    AWS_EVENTBRIDGE_API DescribeConnectionResourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API DescribeConnectionResourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration for the private
     * API.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn.assign(value); }
    inline DescribeConnectionResourceParameters& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline DescribeConnectionResourceParameters& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline DescribeConnectionResourceParameters& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections to private APIs, the Amazon Resource Name (ARN) of the
     * resource association EventBridge created between the connection and the private
     * API's resource configuration.</p>
     */
    inline const Aws::String& GetResourceAssociationArn() const{ return m_resourceAssociationArn; }
    inline bool ResourceAssociationArnHasBeenSet() const { return m_resourceAssociationArnHasBeenSet; }
    inline void SetResourceAssociationArn(const Aws::String& value) { m_resourceAssociationArnHasBeenSet = true; m_resourceAssociationArn = value; }
    inline void SetResourceAssociationArn(Aws::String&& value) { m_resourceAssociationArnHasBeenSet = true; m_resourceAssociationArn = std::move(value); }
    inline void SetResourceAssociationArn(const char* value) { m_resourceAssociationArnHasBeenSet = true; m_resourceAssociationArn.assign(value); }
    inline DescribeConnectionResourceParameters& WithResourceAssociationArn(const Aws::String& value) { SetResourceAssociationArn(value); return *this;}
    inline DescribeConnectionResourceParameters& WithResourceAssociationArn(Aws::String&& value) { SetResourceAssociationArn(std::move(value)); return *this;}
    inline DescribeConnectionResourceParameters& WithResourceAssociationArn(const char* value) { SetResourceAssociationArn(value); return *this;}
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
