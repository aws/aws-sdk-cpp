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
  class DeleteKeyPairResponse
  {
  public:
    AWS_EC2_API DeleteKeyPairResponse();
    AWS_EC2_API DeleteKeyPairResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteKeyPairResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
     */
    inline bool GetReturn() const{ return m_return; }

    /**
     * <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
     */
    inline void SetReturn(bool value) { m_return = value; }

    /**
     * <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
     */
    inline DeleteKeyPairResponse& WithReturn(bool value) { SetReturn(value); return *this;}


    /**
     * <p>The ID of the key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const{ return m_keyPairId; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const Aws::String& value) { m_keyPairId = value; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(Aws::String&& value) { m_keyPairId = std::move(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const char* value) { m_keyPairId.assign(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline DeleteKeyPairResponse& WithKeyPairId(const Aws::String& value) { SetKeyPairId(value); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline DeleteKeyPairResponse& WithKeyPairId(Aws::String&& value) { SetKeyPairId(std::move(value)); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline DeleteKeyPairResponse& WithKeyPairId(const char* value) { SetKeyPairId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteKeyPairResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteKeyPairResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_return;

    Aws::String m_keyPairId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
