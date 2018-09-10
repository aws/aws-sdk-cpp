﻿/*
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ResponseMetadata.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>Represents a request to return the email sending status for your Amazon SES
   * account in the current AWS Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetAccountSendingEnabledResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API GetAccountSendingEnabledResult
  {
  public:
    GetAccountSendingEnabledResult();
    GetAccountSendingEnabledResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccountSendingEnabledResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline GetAccountSendingEnabledResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAccountSendingEnabledResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccountSendingEnabledResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_enabled;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
