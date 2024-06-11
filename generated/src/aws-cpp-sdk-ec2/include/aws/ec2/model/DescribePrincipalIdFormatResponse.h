/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/PrincipalIdFormat.h>
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
namespace EC2
{
namespace Model
{
  class DescribePrincipalIdFormatResponse
  {
  public:
    AWS_EC2_API DescribePrincipalIdFormatResponse();
    AWS_EC2_API DescribePrincipalIdFormatResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribePrincipalIdFormatResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the ID format settings for the ARN.</p>
     */
    inline const Aws::Vector<PrincipalIdFormat>& GetPrincipals() const{ return m_principals; }
    inline void SetPrincipals(const Aws::Vector<PrincipalIdFormat>& value) { m_principals = value; }
    inline void SetPrincipals(Aws::Vector<PrincipalIdFormat>&& value) { m_principals = std::move(value); }
    inline DescribePrincipalIdFormatResponse& WithPrincipals(const Aws::Vector<PrincipalIdFormat>& value) { SetPrincipals(value); return *this;}
    inline DescribePrincipalIdFormatResponse& WithPrincipals(Aws::Vector<PrincipalIdFormat>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline DescribePrincipalIdFormatResponse& AddPrincipals(const PrincipalIdFormat& value) { m_principals.push_back(value); return *this; }
    inline DescribePrincipalIdFormatResponse& AddPrincipals(PrincipalIdFormat&& value) { m_principals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribePrincipalIdFormatResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePrincipalIdFormatResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePrincipalIdFormatResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribePrincipalIdFormatResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribePrincipalIdFormatResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PrincipalIdFormat> m_principals;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
