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


    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const{ return m_queryStringParameters; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline void SetQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = value; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline void SetQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::move(value); }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& WithQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryStringParameters(value); return *this;}

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& WithQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryStringParameters(std::move(value)); return *this;}

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(const Aws::String& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(Aws::String&& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(const Aws::String& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(Aws::String&& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(const char* key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(Aws::String&& key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Attach query string parameters to the end of the URI (for example,
     * /v1/examplePath?exampleParam=exampleValue).</p>
     */
    inline SendApiAssetRequest& AddQueryStringParameters(const char* key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }


    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const{ return m_requestHeaders; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline bool RequestHeadersHasBeenSet() const { return m_requestHeadersHasBeenSet; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline void SetRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = value; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline void SetRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::move(value); }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& WithRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestHeaders(value); return *this;}

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& WithRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestHeaders(std::move(value)); return *this;}

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(const Aws::String& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(Aws::String&& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(const Aws::String& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(Aws::String&& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(const char* key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(Aws::String&& key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline SendApiAssetRequest& AddRequestHeaders(const char* key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }


    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline SendApiAssetRequest& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline SendApiAssetRequest& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}

    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline SendApiAssetRequest& WithMethod(const char* value) { SetMethod(value); return *this;}


    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline SendApiAssetRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline SendApiAssetRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline SendApiAssetRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline SendApiAssetRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

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
