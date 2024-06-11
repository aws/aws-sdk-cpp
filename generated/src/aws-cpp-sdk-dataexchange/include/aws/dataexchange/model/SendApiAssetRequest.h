/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataExchange
{
namespace Model
{

  /**
   */
  class SendApiAssetRequest : public StreamingDataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API SendApiAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendApiAsset"; }

    AWS_DATAEXCHANGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_DATAEXCHANGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const{ return m_queryStringParameters; }
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
    inline void SetQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = value; }
    inline void SetQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::move(value); }
    inline SendApiAssetRequest& WithQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryStringParameters(value); return *this;}
    inline SendApiAssetRequest& WithQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryStringParameters(std::move(value)); return *this;}
    inline SendApiAssetRequest& AddQueryStringParameters(const Aws::String& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }
    inline SendApiAssetRequest& AddQueryStringParameters(Aws::String&& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }
    inline SendApiAssetRequest& AddQueryStringParameters(const Aws::String& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }
    inline SendApiAssetRequest& AddQueryStringParameters(Aws::String&& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SendApiAssetRequest& AddQueryStringParameters(const char* key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }
    inline SendApiAssetRequest& AddQueryStringParameters(Aws::String&& key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }
    inline SendApiAssetRequest& AddQueryStringParameters(const char* key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline SendApiAssetRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline SendApiAssetRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline SendApiAssetRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline SendApiAssetRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline SendApiAssetRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline SendApiAssetRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const{ return m_requestHeaders; }
    inline bool RequestHeadersHasBeenSet() const { return m_requestHeadersHasBeenSet; }
    inline void SetRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = value; }
    inline void SetRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::move(value); }
    inline SendApiAssetRequest& WithRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestHeaders(value); return *this;}
    inline SendApiAssetRequest& WithRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestHeaders(std::move(value)); return *this;}
    inline SendApiAssetRequest& AddRequestHeaders(const Aws::String& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }
    inline SendApiAssetRequest& AddRequestHeaders(Aws::String&& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }
    inline SendApiAssetRequest& AddRequestHeaders(const Aws::String& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }
    inline SendApiAssetRequest& AddRequestHeaders(Aws::String&& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), std::move(value)); return *this; }
    inline SendApiAssetRequest& AddRequestHeaders(const char* key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }
    inline SendApiAssetRequest& AddRequestHeaders(Aws::String&& key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }
    inline SendApiAssetRequest& AddRequestHeaders(const char* key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }
    inline SendApiAssetRequest& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}
    inline SendApiAssetRequest& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}
    inline SendApiAssetRequest& WithMethod(const char* value) { SetMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline SendApiAssetRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline SendApiAssetRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline SendApiAssetRequest& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline SendApiAssetRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline SendApiAssetRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline SendApiAssetRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}
  private:


    Aws::Map<Aws::String, Aws::String> m_queryStringParameters;
    bool m_queryStringParametersHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestHeaders;
    bool m_requestHeadersHasBeenSet = false;

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
