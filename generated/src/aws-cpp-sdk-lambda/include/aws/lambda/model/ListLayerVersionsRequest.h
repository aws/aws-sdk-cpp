/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class ListLayerVersionsRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API ListLayerVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLayerVersions"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A runtime identifier.</p> <p>The following list includes deprecated runtimes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-deprecation-levels">Runtime
     * use after deprecation</a>.</p> <p>For a list of all currently supported
     * runtimes, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtimes-supported">Supported
     * runtimes</a>.</p>
     */
    inline Runtime GetCompatibleRuntime() const { return m_compatibleRuntime; }
    inline bool CompatibleRuntimeHasBeenSet() const { return m_compatibleRuntimeHasBeenSet; }
    inline void SetCompatibleRuntime(Runtime value) { m_compatibleRuntimeHasBeenSet = true; m_compatibleRuntime = value; }
    inline ListLayerVersionsRequest& WithCompatibleRuntime(Runtime value) { SetCompatibleRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const { return m_layerName; }
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }
    template<typename LayerNameT = Aws::String>
    void SetLayerName(LayerNameT&& value) { m_layerNameHasBeenSet = true; m_layerName = std::forward<LayerNameT>(value); }
    template<typename LayerNameT = Aws::String>
    ListLayerVersionsRequest& WithLayerName(LayerNameT&& value) { SetLayerName(std::forward<LayerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListLayerVersionsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of versions to return.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListLayerVersionsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architecture</a>.</p>
     */
    inline Architecture GetCompatibleArchitecture() const { return m_compatibleArchitecture; }
    inline bool CompatibleArchitectureHasBeenSet() const { return m_compatibleArchitectureHasBeenSet; }
    inline void SetCompatibleArchitecture(Architecture value) { m_compatibleArchitectureHasBeenSet = true; m_compatibleArchitecture = value; }
    inline ListLayerVersionsRequest& WithCompatibleArchitecture(Architecture value) { SetCompatibleArchitecture(value); return *this;}
    ///@}
  private:

    Runtime m_compatibleRuntime{Runtime::NOT_SET};
    bool m_compatibleRuntimeHasBeenSet = false;

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    Architecture m_compatibleArchitecture{Architecture::NOT_SET};
    bool m_compatibleArchitectureHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
