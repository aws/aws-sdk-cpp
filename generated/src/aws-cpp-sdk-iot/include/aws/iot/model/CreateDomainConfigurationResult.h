/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateDomainConfigurationResult
  {
  public:
    AWS_IOT_API CreateDomainConfigurationResult() = default;
    AWS_IOT_API CreateDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateDomainConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const { return m_domainConfigurationName; }
    template<typename DomainConfigurationNameT = Aws::String>
    void SetDomainConfigurationName(DomainConfigurationNameT&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::forward<DomainConfigurationNameT>(value); }
    template<typename DomainConfigurationNameT = Aws::String>
    CreateDomainConfigurationResult& WithDomainConfigurationName(DomainConfigurationNameT&& value) { SetDomainConfigurationName(std::forward<DomainConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const { return m_domainConfigurationArn; }
    template<typename DomainConfigurationArnT = Aws::String>
    void SetDomainConfigurationArn(DomainConfigurationArnT&& value) { m_domainConfigurationArnHasBeenSet = true; m_domainConfigurationArn = std::forward<DomainConfigurationArnT>(value); }
    template<typename DomainConfigurationArnT = Aws::String>
    CreateDomainConfigurationResult& WithDomainConfigurationArn(DomainConfigurationArnT&& value) { SetDomainConfigurationArn(std::forward<DomainConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDomainConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    Aws::String m_domainConfigurationArn;
    bool m_domainConfigurationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
