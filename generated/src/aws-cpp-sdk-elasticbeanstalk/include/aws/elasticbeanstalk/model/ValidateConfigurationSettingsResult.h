/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ValidationMessage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Provides a list of validation messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationSettingsValidationMessages">AWS
   * API Reference</a></p>
   */
  class ValidateConfigurationSettingsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ValidateConfigurationSettingsResult() = default;
    AWS_ELASTICBEANSTALK_API ValidateConfigurationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ValidateConfigurationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline const Aws::Vector<ValidationMessage>& GetMessages() const { return m_messages; }
    template<typename MessagesT = Aws::Vector<ValidationMessage>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<ValidationMessage>>
    ValidateConfigurationSettingsResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = ValidationMessage>
    ValidateConfigurationSettingsResult& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ValidateConfigurationSettingsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationMessage> m_messages;
    bool m_messagesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
