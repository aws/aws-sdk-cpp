/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ConfirmProductInstanceResponse
  {
  public:
    AWS_EC2_API ConfirmProductInstanceResponse();
    AWS_EC2_API ConfirmProductInstanceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ConfirmProductInstanceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
     */
    inline ConfirmProductInstanceResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
     */
    inline ConfirmProductInstanceResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the instance owner. This is only
     * present if the product code is attached to the instance.</p>
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
