/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>CreateOpenIDConnectProvider</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateOpenIDConnectProviderResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API CreateOpenIDConnectProviderResult
  {
  public:
    CreateOpenIDConnectProviderResult();
    CreateOpenIDConnectProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateOpenIDConnectProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline const Aws::String& GetOpenIDConnectProviderArn() const{ return m_openIDConnectProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline void SetOpenIDConnectProviderArn(const Aws::String& value) { m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline void SetOpenIDConnectProviderArn(Aws::String&& value) { m_openIDConnectProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline void SetOpenIDConnectProviderArn(const char* value) { m_openIDConnectProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline CreateOpenIDConnectProviderResult& WithOpenIDConnectProviderArn(const Aws::String& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline CreateOpenIDConnectProviderResult& WithOpenIDConnectProviderArn(Aws::String&& value) { SetOpenIDConnectProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM OpenID Connect provider that is
     * created. For more information, see <a>OpenIDConnectProviderListEntry</a>. </p>
     */
    inline CreateOpenIDConnectProviderResult& WithOpenIDConnectProviderArn(const char* value) { SetOpenIDConnectProviderArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateOpenIDConnectProviderResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateOpenIDConnectProviderResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_openIDConnectProviderArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
