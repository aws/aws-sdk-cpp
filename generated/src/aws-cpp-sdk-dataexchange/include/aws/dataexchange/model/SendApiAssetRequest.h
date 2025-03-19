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
    AWS_DATAEXCHANGE_API SendApiAssetRequest() = default;

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
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const { return m_queryStringParameters; }
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
    template<typename QueryStringParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetQueryStringParameters(QueryStringParametersT&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::forward<QueryStringParametersT>(value); }
    template<typename QueryStringParametersT = Aws::Map<Aws::String, Aws::String>>
    SendApiAssetRequest& WithQueryStringParameters(QueryStringParametersT&& value) { SetQueryStringParameters(std::forward<QueryStringParametersT>(value)); return *this;}
    template<typename QueryStringParametersKeyT = Aws::String, typename QueryStringParametersValueT = Aws::String>
    SendApiAssetRequest& AddQueryStringParameters(QueryStringParametersKeyT&& key, QueryStringParametersValueT&& value) {
      m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::forward<QueryStringParametersKeyT>(key), std::forward<QueryStringParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Asset ID value for the API request.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    SendApiAssetRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data set ID value for the API request.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    SendApiAssetRequest& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any header value prefixed with x-amzn-dataexchange-header- will have that
     * stripped before sending the Asset API request. Use this when you want to
     * override a header that AWS Data Exchange uses. Alternatively, you can use the
     * header without a prefix to the HTTP request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const { return m_requestHeaders; }
    inline bool RequestHeadersHasBeenSet() const { return m_requestHeadersHasBeenSet; }
    template<typename RequestHeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestHeaders(RequestHeadersT&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::forward<RequestHeadersT>(value); }
    template<typename RequestHeadersT = Aws::Map<Aws::String, Aws::String>>
    SendApiAssetRequest& WithRequestHeaders(RequestHeadersT&& value) { SetRequestHeaders(std::forward<RequestHeadersT>(value)); return *this;}
    template<typename RequestHeadersKeyT = Aws::String, typename RequestHeadersValueT = Aws::String>
    SendApiAssetRequest& AddRequestHeaders(RequestHeadersKeyT&& key, RequestHeadersValueT&& value) {
      m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::forward<RequestHeadersKeyT>(key), std::forward<RequestHeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>HTTP method value for the API request. Alternatively, you can use the
     * appropriate verb in your request.</p>
     */
    inline const Aws::String& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Aws::String>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Aws::String>
    SendApiAssetRequest& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI path value for the API request. Alternatively, you can set the URI path
     * directly by invoking /v1/{pathValue}.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    SendApiAssetRequest& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Revision ID value for the API request.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    SendApiAssetRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
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
