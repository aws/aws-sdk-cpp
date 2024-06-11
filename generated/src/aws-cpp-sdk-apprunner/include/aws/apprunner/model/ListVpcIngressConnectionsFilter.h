/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Returns a list of VPC Ingress Connections based on the filter provided. It
   * can return either <code>ServiceArn</code> or <code>VpcEndpointId</code>, or
   * both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListVpcIngressConnectionsFilter">AWS
   * API Reference</a></p>
   */
  class ListVpcIngressConnectionsFilter
  {
  public:
    AWS_APPRUNNER_API ListVpcIngressConnectionsFilter();
    AWS_APPRUNNER_API ListVpcIngressConnectionsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ListVpcIngressConnectionsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a service to filter by. </p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline ListVpcIngressConnectionsFilter& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline ListVpcIngressConnectionsFilter& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline ListVpcIngressConnectionsFilter& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a VPC Endpoint to filter by. </p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline ListVpcIngressConnectionsFilter& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline ListVpcIngressConnectionsFilter& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline ListVpcIngressConnectionsFilter& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
