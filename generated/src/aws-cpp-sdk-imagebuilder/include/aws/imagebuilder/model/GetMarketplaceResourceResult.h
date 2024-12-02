/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class GetMarketplaceResourceResult
  {
  public:
    AWS_IMAGEBUILDER_API GetMarketplaceResourceResult();
    AWS_IMAGEBUILDER_API GetMarketplaceResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetMarketplaceResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Web Services Marketplace
     * resource that was requested.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetMarketplaceResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetMarketplaceResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetMarketplaceResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The obfuscated S3 URL to download the component artifact from.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline GetMarketplaceResourceResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline GetMarketplaceResourceResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline GetMarketplaceResourceResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns obfuscated data that contains the YAML content of the component.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }
    inline void SetData(const Aws::String& value) { m_data = value; }
    inline void SetData(Aws::String&& value) { m_data = std::move(value); }
    inline void SetData(const char* value) { m_data.assign(value); }
    inline GetMarketplaceResourceResult& WithData(const Aws::String& value) { SetData(value); return *this;}
    inline GetMarketplaceResourceResult& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}
    inline GetMarketplaceResourceResult& WithData(const char* value) { SetData(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMarketplaceResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMarketplaceResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMarketplaceResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    Aws::String m_url;

    Aws::String m_data;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
