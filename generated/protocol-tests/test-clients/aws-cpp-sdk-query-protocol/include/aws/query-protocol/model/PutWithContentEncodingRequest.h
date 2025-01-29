/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class PutWithContentEncodingRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API PutWithContentEncodingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWithContentEncoding"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
    virtual Aws::Client::CompressionAlgorithm
    GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const override;
#endif

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetEncoding() const{ return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    inline void SetEncoding(const Aws::String& value) { m_encodingHasBeenSet = true; m_encoding = value; }
    inline void SetEncoding(Aws::String&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }
    inline void SetEncoding(const char* value) { m_encodingHasBeenSet = true; m_encoding.assign(value); }
    inline PutWithContentEncodingRequest& WithEncoding(const Aws::String& value) { SetEncoding(value); return *this;}
    inline PutWithContentEncodingRequest& WithEncoding(Aws::String&& value) { SetEncoding(std::move(value)); return *this;}
    inline PutWithContentEncodingRequest& WithEncoding(const char* value) { SetEncoding(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }
    inline PutWithContentEncodingRequest& WithData(const Aws::String& value) { SetData(value); return *this;}
    inline PutWithContentEncodingRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}
    inline PutWithContentEncodingRequest& WithData(const char* value) { SetData(value); return *this;}
    ///@}
  private:

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
