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
#include <aws/rds/model/DBProxyTargetGroup.h>
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
  class AWS_RDS_API ModifyDBProxyTargetGroupResult
  {
  public:
    ModifyDBProxyTargetGroupResult();
    ModifyDBProxyTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyDBProxyTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The settings of the modified <code>DBProxyTarget</code>.</p>
     */
    inline const DBProxyTargetGroup& GetDBProxyTargetGroup() const{ return m_dBProxyTargetGroup; }

    /**
     * <p>The settings of the modified <code>DBProxyTarget</code>.</p>
     */
    inline void SetDBProxyTargetGroup(const DBProxyTargetGroup& value) { m_dBProxyTargetGroup = value; }

    /**
     * <p>The settings of the modified <code>DBProxyTarget</code>.</p>
     */
    inline void SetDBProxyTargetGroup(DBProxyTargetGroup&& value) { m_dBProxyTargetGroup = std::move(value); }

    /**
     * <p>The settings of the modified <code>DBProxyTarget</code>.</p>
     */
    inline ModifyDBProxyTargetGroupResult& WithDBProxyTargetGroup(const DBProxyTargetGroup& value) { SetDBProxyTargetGroup(value); return *this;}

    /**
     * <p>The settings of the modified <code>DBProxyTarget</code>.</p>
     */
    inline ModifyDBProxyTargetGroupResult& WithDBProxyTargetGroup(DBProxyTargetGroup&& value) { SetDBProxyTargetGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyDBProxyTargetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyDBProxyTargetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBProxyTargetGroup m_dBProxyTargetGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
