/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeComputationModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeComputationModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComputationModel"; }

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
    DescribeComputationModelRequest& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelVersion() const { return m_computationModelVersion; }
    inline bool ComputationModelVersionHasBeenSet() const { return m_computationModelVersionHasBeenSet; }
    template<typename ComputationModelVersionT = Aws::String>
    void SetComputationModelVersion(ComputationModelVersionT&& value) { m_computationModelVersionHasBeenSet = true; m_computationModelVersion = std::forward<ComputationModelVersionT>(value); }
    template<typename ComputationModelVersionT = Aws::String>
    DescribeComputationModelRequest& WithComputationModelVersion(ComputationModelVersionT&& value) { SetComputationModelVersion(std::forward<ComputationModelVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;

    Aws::String m_computationModelVersion;
    bool m_computationModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
