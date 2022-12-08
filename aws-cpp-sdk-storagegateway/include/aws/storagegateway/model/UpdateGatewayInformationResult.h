/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the Amazon Resource Name (ARN) of the gateway that
   * was updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateGatewayInformationOutput">AWS
   * API Reference</a></p>
   */
  class UpdateGatewayInformationResult
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateGatewayInformationResult();
    AWS_STORAGEGATEWAY_API UpdateGatewayInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API UpdateGatewayInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline UpdateGatewayInformationResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateGatewayInformationResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(const Aws::String& value) { m_gatewayName = value; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(Aws::String&& value) { m_gatewayName = std::move(value); }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(const char* value) { m_gatewayName.assign(value); }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline UpdateGatewayInformationResult& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline UpdateGatewayInformationResult& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline UpdateGatewayInformationResult& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}

  private:

    Aws::String m_gatewayARN;

    Aws::String m_gatewayName;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
