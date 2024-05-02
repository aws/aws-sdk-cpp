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
    AWS_EC2_API GetInstanceTpmEkPubResponse();
    AWS_EC2_API GetInstanceTpmEkPubResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetInstanceTpmEkPubResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The public endorsement key type.</p>
     */
    inline const EkPubKeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The public endorsement key type.</p>
     */
    inline void SetKeyType(const EkPubKeyType& value) { m_keyType = value; }

    /**
     * <p>The public endorsement key type.</p>
     */
    inline void SetKeyType(EkPubKeyType&& value) { m_keyType = std::move(value); }

    /**
     * <p>The public endorsement key type.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyType(const EkPubKeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The public endorsement key type.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyType(EkPubKeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * <p>The public endorsement key format.</p>
     */
    inline const EkPubKeyFormat& GetKeyFormat() const{ return m_keyFormat; }

    /**
     * <p>The public endorsement key format.</p>
     */
    inline void SetKeyFormat(const EkPubKeyFormat& value) { m_keyFormat = value; }

    /**
     * <p>The public endorsement key format.</p>
     */
    inline void SetKeyFormat(EkPubKeyFormat&& value) { m_keyFormat = std::move(value); }

    /**
     * <p>The public endorsement key format.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyFormat(const EkPubKeyFormat& value) { SetKeyFormat(value); return *this;}

    /**
     * <p>The public endorsement key format.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyFormat(EkPubKeyFormat&& value) { SetKeyFormat(std::move(value)); return *this;}


    /**
     * <p>The public endorsement key material.</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The public endorsement key material.</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValue = value; }

    /**
     * <p>The public endorsement key material.</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValue = std::move(value); }

    /**
     * <p>The public endorsement key material.</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValue.assign(value); }

    /**
     * <p>The public endorsement key material.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The public endorsement key material.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The public endorsement key material.</p>
     */
    inline GetInstanceTpmEkPubResponse& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetInstanceTpmEkPubResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetInstanceTpmEkPubResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;

    EkPubKeyType m_keyType;

    EkPubKeyFormat m_keyFormat;

    Aws::String m_keyValue;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
