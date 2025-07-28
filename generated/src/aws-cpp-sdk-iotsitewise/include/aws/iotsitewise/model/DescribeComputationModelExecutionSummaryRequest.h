/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ResolveToResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeComputationModelExecutionSummaryRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeComputationModelExecutionSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComputationModelExecutionSummary"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelId() const { return m_computationModelId; }
    inline bool ComputationModelIdHasBeenSet() const { return m_computationModelIdHasBeenSet; }
    template<typename ComputationModelIdT = Aws::String>
    void SetComputationModelId(ComputationModelIdT&& value) { m_computationModelIdHasBeenSet = true; m_computationModelId = std::forward<ComputationModelIdT>(value); }
    template<typename ComputationModelIdT = Aws::String>
    DescribeComputationModelExecutionSummaryRequest& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resolved resource.</p>
     */
    inline ResolveToResourceType GetResolveToResourceType() const { return m_resolveToResourceType; }
    inline bool ResolveToResourceTypeHasBeenSet() const { return m_resolveToResourceTypeHasBeenSet; }
    inline void SetResolveToResourceType(ResolveToResourceType value) { m_resolveToResourceTypeHasBeenSet = true; m_resolveToResourceType = value; }
    inline DescribeComputationModelExecutionSummaryRequest& WithResolveToResourceType(ResolveToResourceType value) { SetResolveToResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resolved resource.</p>
     */
    inline const Aws::String& GetResolveToResourceId() const { return m_resolveToResourceId; }
    inline bool ResolveToResourceIdHasBeenSet() const { return m_resolveToResourceIdHasBeenSet; }
    template<typename ResolveToResourceIdT = Aws::String>
    void SetResolveToResourceId(ResolveToResourceIdT&& value) { m_resolveToResourceIdHasBeenSet = true; m_resolveToResourceId = std::forward<ResolveToResourceIdT>(value); }
    template<typename ResolveToResourceIdT = Aws::String>
    DescribeComputationModelExecutionSummaryRequest& WithResolveToResourceId(ResolveToResourceIdT&& value) { SetResolveToResourceId(std::forward<ResolveToResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;

    ResolveToResourceType m_resolveToResourceType{ResolveToResourceType::NOT_SET};
    bool m_resolveToResourceTypeHasBeenSet = false;

    Aws::String m_resolveToResourceId;
    bool m_resolveToResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
