/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/VpcConnector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppRunner
{
namespace Model
{
  class CreateVpcConnectorResult
  {
  public:
    AWS_APPRUNNER_API CreateVpcConnectorResult();
    AWS_APPRUNNER_API CreateVpcConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API CreateVpcConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner VPC connector that's created by this
     * request.</p>
     */
    inline const VpcConnector& GetVpcConnector() const{ return m_vpcConnector; }

    /**
     * <p>A description of the App Runner VPC connector that's created by this
     * request.</p>
     */
    inline void SetVpcConnector(const VpcConnector& value) { m_vpcConnector = value; }

    /**
     * <p>A description of the App Runner VPC connector that's created by this
     * request.</p>
     */
    inline void SetVpcConnector(VpcConnector&& value) { m_vpcConnector = std::move(value); }

    /**
     * <p>A description of the App Runner VPC connector that's created by this
     * request.</p>
     */
    inline CreateVpcConnectorResult& WithVpcConnector(const VpcConnector& value) { SetVpcConnector(value); return *this;}

    /**
     * <p>A description of the App Runner VPC connector that's created by this
     * request.</p>
     */
    inline CreateVpcConnectorResult& WithVpcConnector(VpcConnector&& value) { SetVpcConnector(std::move(value)); return *this;}

  private:

    VpcConnector m_vpcConnector;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
