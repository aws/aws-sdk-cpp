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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBSecurityGroup.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{
  class AWS_RDS_API AuthorizeDBSecurityGroupIngressResult
  {
  public:
    AuthorizeDBSecurityGroupIngressResult();
    AuthorizeDBSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AuthorizeDBSecurityGroupIngressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBSecurityGroup& GetDBSecurityGroup() const{ return m_dBSecurityGroup; }

    
    inline void SetDBSecurityGroup(const DBSecurityGroup& value) { m_dBSecurityGroup = value; }

    
    inline void SetDBSecurityGroup(DBSecurityGroup&& value) { m_dBSecurityGroup = std::move(value); }

    
    inline AuthorizeDBSecurityGroupIngressResult& WithDBSecurityGroup(const DBSecurityGroup& value) { SetDBSecurityGroup(value); return *this;}

    
    inline AuthorizeDBSecurityGroupIngressResult& WithDBSecurityGroup(DBSecurityGroup&& value) { SetDBSecurityGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AuthorizeDBSecurityGroupIngressResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AuthorizeDBSecurityGroupIngressResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBSecurityGroup m_dBSecurityGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
