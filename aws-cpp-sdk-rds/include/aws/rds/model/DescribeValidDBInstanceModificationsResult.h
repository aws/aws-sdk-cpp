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
#include <aws/rds/model/ValidDBInstanceModificationsMessage.h>
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
  class AWS_RDS_API DescribeValidDBInstanceModificationsResult
  {
  public:
    DescribeValidDBInstanceModificationsResult();
    DescribeValidDBInstanceModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeValidDBInstanceModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ValidDBInstanceModificationsMessage& GetValidDBInstanceModificationsMessage() const{ return m_validDBInstanceModificationsMessage; }

    
    inline void SetValidDBInstanceModificationsMessage(const ValidDBInstanceModificationsMessage& value) { m_validDBInstanceModificationsMessage = value; }

    
    inline void SetValidDBInstanceModificationsMessage(ValidDBInstanceModificationsMessage&& value) { m_validDBInstanceModificationsMessage = std::move(value); }

    
    inline DescribeValidDBInstanceModificationsResult& WithValidDBInstanceModificationsMessage(const ValidDBInstanceModificationsMessage& value) { SetValidDBInstanceModificationsMessage(value); return *this;}

    
    inline DescribeValidDBInstanceModificationsResult& WithValidDBInstanceModificationsMessage(ValidDBInstanceModificationsMessage&& value) { SetValidDBInstanceModificationsMessage(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeValidDBInstanceModificationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeValidDBInstanceModificationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ValidDBInstanceModificationsMessage m_validDBInstanceModificationsMessage;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
