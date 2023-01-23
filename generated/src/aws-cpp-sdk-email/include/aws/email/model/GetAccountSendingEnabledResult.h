/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetAccountSendingEnabledResult
  {
  public:
    AWS_SES_API GetAccountSendingEnabledResult();
    AWS_SES_API GetAccountSendingEnabledResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetAccountSendingEnabledResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
