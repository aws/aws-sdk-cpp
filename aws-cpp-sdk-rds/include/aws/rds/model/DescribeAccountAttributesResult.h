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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/AccountQuota.h>
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
  /**
   * <p>Data returned by the <b>DescribeAccountAttributes</b> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AccountAttributesMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeAccountAttributesResult
  {
  public:
    DescribeAccountAttributesResult();
    DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline const Aws::Vector<AccountQuota>& GetAccountQuotas() const{ return m_accountQuotas; }

    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline void SetAccountQuotas(const Aws::Vector<AccountQuota>& value) { m_accountQuotas = value; }

    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline void SetAccountQuotas(Aws::Vector<AccountQuota>&& value) { m_accountQuotas = std::move(value); }

    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountQuotas(const Aws::Vector<AccountQuota>& value) { SetAccountQuotas(value); return *this;}

    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountQuotas(Aws::Vector<AccountQuota>&& value) { SetAccountQuotas(std::move(value)); return *this;}

    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountQuotas(const AccountQuota& value) { m_accountQuotas.push_back(value); return *this; }

    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountQuotas(AccountQuota&& value) { m_accountQuotas.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAccountAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAccountAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AccountQuota> m_accountQuotas;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
