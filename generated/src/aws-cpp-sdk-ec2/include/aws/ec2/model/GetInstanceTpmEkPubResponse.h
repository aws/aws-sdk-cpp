/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EkPubKeyType.h>
#include <aws/ec2/model/EkPubKeyFormat.h>
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
  class GetInstanceTpmEkPubResponse
  {
  public:
    AWS_EC2_API GetInstanceTpmEkPubResponse() = default;
    AWS_EC2_API GetInstanceTpmEkPubResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetInstanceTpmEkPubResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetInstanceTpmEkPubResponse& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public endorsement key type.</p>
     */
    inline EkPubKeyType GetKeyType() const { return m_keyType; }
    inline void SetKeyType(EkPubKeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline GetInstanceTpmEkPubResponse& WithKeyType(EkPubKeyType value) { SetKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public endorsement key format.</p>
     */
    inline EkPubKeyFormat GetKeyFormat() const { return m_keyFormat; }
    inline void SetKeyFormat(EkPubKeyFormat value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }
    inline GetInstanceTpmEkPubResponse& WithKeyFormat(EkPubKeyFormat value) { SetKeyFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public endorsement key material.</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    GetInstanceTpmEkPubResponse& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetInstanceTpmEkPubResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    EkPubKeyType m_keyType{EkPubKeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;

    EkPubKeyFormat m_keyFormat{EkPubKeyFormat::NOT_SET};
    bool m_keyFormatHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
