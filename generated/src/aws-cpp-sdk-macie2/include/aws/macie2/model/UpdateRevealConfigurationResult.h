/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/RevealConfiguration.h>
#include <aws/macie2/model/RetrievalConfiguration.h>
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
namespace Macie2
{
namespace Model
{
  class UpdateRevealConfigurationResult
  {
  public:
    AWS_MACIE2_API UpdateRevealConfigurationResult() = default;
    AWS_MACIE2_API UpdateRevealConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API UpdateRevealConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline const RevealConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = RevealConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = RevealConfiguration>
    UpdateRevealConfigurationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline const RetrievalConfiguration& GetRetrievalConfiguration() const { return m_retrievalConfiguration; }
    template<typename RetrievalConfigurationT = RetrievalConfiguration>
    void SetRetrievalConfiguration(RetrievalConfigurationT&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::forward<RetrievalConfigurationT>(value); }
    template<typename RetrievalConfigurationT = RetrievalConfiguration>
    UpdateRevealConfigurationResult& WithRetrievalConfiguration(RetrievalConfigurationT&& value) { SetRetrievalConfiguration(std::forward<RetrievalConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRevealConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RevealConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    RetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
