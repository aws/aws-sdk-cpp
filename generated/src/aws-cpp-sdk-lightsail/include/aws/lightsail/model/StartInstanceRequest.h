/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceAttributeUpdates.h>

#include <utility>

namespace Aws {
namespace Lightsail {
namespace Model {

/**
 */
class StartInstanceRequest : public LightsailRequest {
 public:
  AWS_LIGHTSAIL_API StartInstanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartInstance"; }

  AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

  AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the instance (a virtual private server) to start.</p>
   */
  inline const Aws::String& GetInstanceName() const { return m_instanceName; }
  inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
  template <typename InstanceNameT = Aws::String>
  void SetInstanceName(InstanceNameT&& value) {
    m_instanceNameHasBeenSet = true;
    m_instanceName = std::forward<InstanceNameT>(value);
  }
  template <typename InstanceNameT = Aws::String>
  StartInstanceRequest& WithInstanceName(InstanceNameT&& value) {
    SetInstanceName(std::forward<InstanceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the attributes to update on the instance before it
   * starts.</p>
   */
  inline const InstanceAttributeUpdates& GetAttributeUpdates() const { return m_attributeUpdates; }
  inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
  template <typename AttributeUpdatesT = InstanceAttributeUpdates>
  void SetAttributeUpdates(AttributeUpdatesT&& value) {
    m_attributeUpdatesHasBeenSet = true;
    m_attributeUpdates = std::forward<AttributeUpdatesT>(value);
  }
  template <typename AttributeUpdatesT = InstanceAttributeUpdates>
  StartInstanceRequest& WithAttributeUpdates(AttributeUpdatesT&& value) {
    SetAttributeUpdates(std::forward<AttributeUpdatesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceName;

  InstanceAttributeUpdates m_attributeUpdates;
  bool m_instanceNameHasBeenSet = false;
  bool m_attributeUpdatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
