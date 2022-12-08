/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of all identities that you have attempted to verify under your AWS
   * account, regardless of verification status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentitiesResponse">AWS
   * API Reference</a></p>
   */
  class ListIdentitiesResult
  {
  public:
    AWS_SES_API ListIdentitiesResult();
    AWS_SES_API ListIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of identities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentities() const{ return m_identities; }

    /**
     * <p>A list of identities.</p>
     */
    inline void SetIdentities(const Aws::Vector<Aws::String>& value) { m_identities = value; }

    /**
     * <p>A list of identities.</p>
     */
    inline void SetIdentities(Aws::Vector<Aws::String>&& value) { m_identities = std::move(value); }

    /**
     * <p>A list of identities.</p>
     */
    inline ListIdentitiesResult& WithIdentities(const Aws::Vector<Aws::String>& value) { SetIdentities(value); return *this;}

    /**
     * <p>A list of identities.</p>
     */
    inline ListIdentitiesResult& WithIdentities(Aws::Vector<Aws::String>&& value) { SetIdentities(std::move(value)); return *this;}

    /**
     * <p>A list of identities.</p>
     */
    inline ListIdentitiesResult& AddIdentities(const Aws::String& value) { m_identities.push_back(value); return *this; }

    /**
     * <p>A list of identities.</p>
     */
    inline ListIdentitiesResult& AddIdentities(Aws::String&& value) { m_identities.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identities.</p>
     */
    inline ListIdentitiesResult& AddIdentities(const char* value) { m_identities.push_back(value); return *this; }


    /**
     * <p>The token used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used for pagination.</p>
     */
    inline ListIdentitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used for pagination.</p>
     */
    inline ListIdentitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used for pagination.</p>
     */
    inline ListIdentitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListIdentitiesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListIdentitiesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_identities;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
