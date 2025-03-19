/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchGetDevEndpointsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetDevEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDevEndpoints"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of <code>DevEndpoint</code> names, which might be the names returned
     * from the <code>ListDevEndpoint</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointNames() const { return m_devEndpointNames; }
    inline bool DevEndpointNamesHasBeenSet() const { return m_devEndpointNamesHasBeenSet; }
    template<typename DevEndpointNamesT = Aws::Vector<Aws::String>>
    void SetDevEndpointNames(DevEndpointNamesT&& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames = std::forward<DevEndpointNamesT>(value); }
    template<typename DevEndpointNamesT = Aws::Vector<Aws::String>>
    BatchGetDevEndpointsRequest& WithDevEndpointNames(DevEndpointNamesT&& value) { SetDevEndpointNames(std::forward<DevEndpointNamesT>(value)); return *this;}
    template<typename DevEndpointNamesT = Aws::String>
    BatchGetDevEndpointsRequest& AddDevEndpointNames(DevEndpointNamesT&& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames.emplace_back(std::forward<DevEndpointNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_devEndpointNames;
    bool m_devEndpointNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
