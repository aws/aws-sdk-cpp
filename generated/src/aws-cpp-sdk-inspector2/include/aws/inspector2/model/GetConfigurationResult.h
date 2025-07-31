/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrConfigurationState.h>
#include <aws/inspector2/model/Ec2ConfigurationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector2
{
namespace Model
{
  class GetConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API GetConfigurationResult() = default;
    AWS_INSPECTOR2_API GetConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies how the ECR automated re-scan duration is currently configured for
     * your environment.</p>
     */
    inline const EcrConfigurationState& GetEcrConfiguration() const { return m_ecrConfiguration; }
    template<typename EcrConfigurationT = EcrConfigurationState>
    void SetEcrConfiguration(EcrConfigurationT&& value) { m_ecrConfigurationHasBeenSet = true; m_ecrConfiguration = std::forward<EcrConfigurationT>(value); }
    template<typename EcrConfigurationT = EcrConfigurationState>
    GetConfigurationResult& WithEcrConfiguration(EcrConfigurationT&& value) { SetEcrConfiguration(std::forward<EcrConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the Amazon EC2 automated scan mode is currently configured for
     * your environment.</p>
     */
    inline const Ec2ConfigurationState& GetEc2Configuration() const { return m_ec2Configuration; }
    template<typename Ec2ConfigurationT = Ec2ConfigurationState>
    void SetEc2Configuration(Ec2ConfigurationT&& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration = std::forward<Ec2ConfigurationT>(value); }
    template<typename Ec2ConfigurationT = Ec2ConfigurationState>
    GetConfigurationResult& WithEc2Configuration(Ec2ConfigurationT&& value) { SetEc2Configuration(std::forward<Ec2ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EcrConfigurationState m_ecrConfiguration;
    bool m_ecrConfigurationHasBeenSet = false;

    Ec2ConfigurationState m_ec2Configuration;
    bool m_ec2ConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
