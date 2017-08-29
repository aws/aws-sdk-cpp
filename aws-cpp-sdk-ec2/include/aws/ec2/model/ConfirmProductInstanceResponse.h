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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  /**
   * <p>Contains the output of ConfirmProductInstance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConfirmProductInstanceResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ConfirmProductInstanceResponse
  {
  public:
    ConfirmProductInstanceResponse();
    ConfirmProductInstanceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ConfirmProductInstanceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline ConfirmProductInstanceResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline ConfirmProductInstanceResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the instance owner. This is only present if the product
     * code is attached to the instance.</p>
     */
    inline ConfirmProductInstanceResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The return value of the request. Returns <code>true</code> if the specified
     * product code is owned by the requester and associated with the specified
     * instance.</p>
     */
    inline bool GetReturn() const{ return m_return; }

    /**
     * <p>The return value of the request. Returns <code>true</code> if the specified
     * product code is owned by the requester and associated with the specified
     * instance.</p>
     */
    inline void SetReturn(bool value) { m_return = value; }

    /**
     * <p>The return value of the request. Returns <code>true</code> if the specified
     * product code is owned by the requester and associated with the specified
     * instance.</p>
     */
    inline ConfirmProductInstanceResponse& WithReturn(bool value) { SetReturn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ConfirmProductInstanceResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ConfirmProductInstanceResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_ownerId;

    bool m_return;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
