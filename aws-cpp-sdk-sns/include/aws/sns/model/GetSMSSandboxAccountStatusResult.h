/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/model/ResponseMetadata.h>
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
namespace SNS
{
namespace Model
{
  class GetSMSSandboxAccountStatusResult
  {
  public:
    AWS_SNS_API GetSMSSandboxAccountStatusResult();
    AWS_SNS_API GetSMSSandboxAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetSMSSandboxAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates whether the calling Amazon Web Services account is in the SMS
     * sandbox.</p>
     */
    inline bool GetIsInSandbox() const{ return m_isInSandbox; }

    /**
     * <p>Indicates whether the calling Amazon Web Services account is in the SMS
     * sandbox.</p>
     */
    inline void SetIsInSandbox(bool value) { m_isInSandbox = value; }

    /**
     * <p>Indicates whether the calling Amazon Web Services account is in the SMS
     * sandbox.</p>
     */
    inline GetSMSSandboxAccountStatusResult& WithIsInSandbox(bool value) { SetIsInSandbox(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSMSSandboxAccountStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSMSSandboxAccountStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_isInSandbox;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
