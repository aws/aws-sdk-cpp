/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class DeleteAuthenticationProfileResult
  {
  public:
    AWS_REDSHIFT_API DeleteAuthenticationProfileResult();
    AWS_REDSHIFT_API DeleteAuthenticationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DeleteAuthenticationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const{ return m_authenticationProfileName; }

    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline void SetAuthenticationProfileName(const Aws::String& value) { m_authenticationProfileName = value; }

    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline void SetAuthenticationProfileName(Aws::String&& value) { m_authenticationProfileName = std::move(value); }

    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline void SetAuthenticationProfileName(const char* value) { m_authenticationProfileName.assign(value); }

    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline DeleteAuthenticationProfileResult& WithAuthenticationProfileName(const Aws::String& value) { SetAuthenticationProfileName(value); return *this;}

    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline DeleteAuthenticationProfileResult& WithAuthenticationProfileName(Aws::String&& value) { SetAuthenticationProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the authentication profile that was deleted.</p>
     */
    inline DeleteAuthenticationProfileResult& WithAuthenticationProfileName(const char* value) { SetAuthenticationProfileName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteAuthenticationProfileResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteAuthenticationProfileResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_authenticationProfileName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
