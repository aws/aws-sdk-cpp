/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayServiceInclude.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class DescribeExpressGatewayServiceRequest : public ECSRequest {
 public:
  AWS_ECS_API DescribeExpressGatewayServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeExpressGatewayService"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Express service to describe. The ARN
   * uniquely identifies the service within your Amazon Web Services account and
   * region.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  DescribeExpressGatewayServiceRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies additional information to include in the response. Valid values are
   * <code>TAGS</code> to include resource tags associated with the Express
   * service.</p>
   */
  inline const Aws::Vector<ExpressGatewayServiceInclude>& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = Aws::Vector<ExpressGatewayServiceInclude>>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = Aws::Vector<ExpressGatewayServiceInclude>>
  DescribeExpressGatewayServiceRequest& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  inline DescribeExpressGatewayServiceRequest& AddInclude(ExpressGatewayServiceInclude value) {
    m_includeHasBeenSet = true;
    m_include.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;
  bool m_serviceArnHasBeenSet = false;

  Aws::Vector<ExpressGatewayServiceInclude> m_include;
  bool m_includeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
