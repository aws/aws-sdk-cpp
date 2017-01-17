﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IdFormat.h>

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
  /**
   * <p>Contains the output of DescribeIdentityIdFormat.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdentityIdFormatResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeIdentityIdFormatResponse
  {
  public:
    DescribeIdentityIdFormatResponse();
    DescribeIdentityIdFormatResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeIdentityIdFormatResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline const Aws::Vector<IdFormat>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline void SetStatuses(const Aws::Vector<IdFormat>& value) { m_statuses = value; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline void SetStatuses(Aws::Vector<IdFormat>&& value) { m_statuses = value; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& WithStatuses(const Aws::Vector<IdFormat>& value) { SetStatuses(value); return *this;}

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& WithStatuses(Aws::Vector<IdFormat>&& value) { SetStatuses(value); return *this;}

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& AddStatuses(const IdFormat& value) { m_statuses.push_back(value); return *this; }

    /**
     * <p>Information about the ID format for the resources.</p>
     */
    inline DescribeIdentityIdFormatResponse& AddStatuses(IdFormat&& value) { m_statuses.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeIdentityIdFormatResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIdentityIdFormatResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<IdFormat> m_statuses;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws