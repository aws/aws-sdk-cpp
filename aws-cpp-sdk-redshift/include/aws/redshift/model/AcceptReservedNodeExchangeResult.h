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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ReservedNode.h>
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
  class AWS_REDSHIFT_API AcceptReservedNodeExchangeResult
  {
  public:
    AcceptReservedNodeExchangeResult();
    AcceptReservedNodeExchangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AcceptReservedNodeExchangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p/>
     */
    inline const ReservedNode& GetExchangedReservedNode() const{ return m_exchangedReservedNode; }

    /**
     * <p/>
     */
    inline void SetExchangedReservedNode(const ReservedNode& value) { m_exchangedReservedNode = value; }

    /**
     * <p/>
     */
    inline void SetExchangedReservedNode(ReservedNode&& value) { m_exchangedReservedNode = std::move(value); }

    /**
     * <p/>
     */
    inline AcceptReservedNodeExchangeResult& WithExchangedReservedNode(const ReservedNode& value) { SetExchangedReservedNode(value); return *this;}

    /**
     * <p/>
     */
    inline AcceptReservedNodeExchangeResult& WithExchangedReservedNode(ReservedNode&& value) { SetExchangedReservedNode(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AcceptReservedNodeExchangeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AcceptReservedNodeExchangeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReservedNode m_exchangedReservedNode;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
