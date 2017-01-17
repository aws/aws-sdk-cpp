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
#include <aws/ec2/model/ResponseMetadata.h>

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
   * <p>Contains the output of DeleteVpcPeeringConnection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcPeeringConnectionResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DeleteVpcPeeringConnectionResponse
  {
  public:
    DeleteVpcPeeringConnectionResponse();
    DeleteVpcPeeringConnectionResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteVpcPeeringConnectionResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline bool GetReturn() const{ return m_return; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline void SetReturn(bool value) { m_return = value; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline DeleteVpcPeeringConnectionResponse& WithReturn(bool value) { SetReturn(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteVpcPeeringConnectionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteVpcPeeringConnectionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    bool m_return;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws