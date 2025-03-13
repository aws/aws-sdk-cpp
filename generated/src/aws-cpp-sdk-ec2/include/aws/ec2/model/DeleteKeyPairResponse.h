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
    AWS_EC2_API DeleteKeyPairResponse() = default;
    AWS_EC2_API DeleteKeyPairResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteKeyPairResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
     */
    inline bool GetReturn() const { return m_return; }
    inline void SetReturn(bool value) { m_returnHasBeenSet = true; m_return = value; }
    inline DeleteKeyPairResponse& WithReturn(bool value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const { return m_keyPairId; }
    template<typename KeyPairIdT = Aws::String>
    void SetKeyPairId(KeyPairIdT&& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = std::forward<KeyPairIdT>(value); }
    template<typename KeyPairIdT = Aws::String>
    DeleteKeyPairResponse& WithKeyPairId(KeyPairIdT&& value) { SetKeyPairId(std::forward<KeyPairIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteKeyPairResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_return{false};
    bool m_returnHasBeenSet = false;

    Aws::String m_keyPairId;
    bool m_keyPairIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
