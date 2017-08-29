/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICBEANSTALK_API ValidateConfigurationSettingsResult
  {
  public:
    ValidateConfigurationSettingsResult();
    ValidateConfigurationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ValidateConfigurationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline const Aws::Vector<ValidationMessage>& GetMessages() const{ return m_messages; }

    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline void SetMessages(const Aws::Vector<ValidationMessage>& value) { m_messages = value; }

    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline void SetMessages(Aws::Vector<ValidationMessage>&& value) { m_messages = std::move(value); }

    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline ValidateConfigurationSettingsResult& WithMessages(const Aws::Vector<ValidationMessage>& value) { SetMessages(value); return *this;}

    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline ValidateConfigurationSettingsResult& WithMessages(Aws::Vector<ValidationMessage>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline ValidateConfigurationSettingsResult& AddMessages(const ValidationMessage& value) { m_messages.push_back(value); return *this; }

    /**
     * <p> A list of <a>ValidationMessage</a>. </p>
     */
    inline ValidateConfigurationSettingsResult& AddMessages(ValidationMessage&& value) { m_messages.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ValidateConfigurationSettingsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ValidateConfigurationSettingsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ValidationMessage> m_messages;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
