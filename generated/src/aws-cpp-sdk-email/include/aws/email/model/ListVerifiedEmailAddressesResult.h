/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of email addresses that you have verified with Amazon SES under your
   * AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddressesResponse">AWS
   * API Reference</a></p>
   */
  class ListVerifiedEmailAddressesResult
  {
  public:
    AWS_SES_API ListVerifiedEmailAddressesResult();
    AWS_SES_API ListVerifiedEmailAddressesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListVerifiedEmailAddressesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVerifiedEmailAddresses() const{ return m_verifiedEmailAddresses; }

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline void SetVerifiedEmailAddresses(const Aws::Vector<Aws::String>& value) { m_verifiedEmailAddresses = value; }

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline void SetVerifiedEmailAddresses(Aws::Vector<Aws::String>&& value) { m_verifiedEmailAddresses = std::move(value); }

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline ListVerifiedEmailAddressesResult& WithVerifiedEmailAddresses(const Aws::Vector<Aws::String>& value) { SetVerifiedEmailAddresses(value); return *this;}

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline ListVerifiedEmailAddressesResult& WithVerifiedEmailAddresses(Aws::Vector<Aws::String>&& value) { SetVerifiedEmailAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline ListVerifiedEmailAddressesResult& AddVerifiedEmailAddresses(const Aws::String& value) { m_verifiedEmailAddresses.push_back(value); return *this; }

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline ListVerifiedEmailAddressesResult& AddVerifiedEmailAddresses(Aws::String&& value) { m_verifiedEmailAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of email addresses that have been verified.</p>
     */
    inline ListVerifiedEmailAddressesResult& AddVerifiedEmailAddresses(const char* value) { m_verifiedEmailAddresses.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListVerifiedEmailAddressesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListVerifiedEmailAddressesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_verifiedEmailAddresses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
