/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeValidDBInstanceModificationsResult
  {
  public:
    AWS_RDS_API DescribeValidDBInstanceModificationsResult();
    AWS_RDS_API DescribeValidDBInstanceModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeValidDBInstanceModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
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
