/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API BatchGetDevEndpointsRequest : public GlueRequest
  {
  public:
    BatchGetDevEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDevEndpoints"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointNames() const{ return m_devEndpointNames; }

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline bool DevEndpointNamesHasBeenSet() const { return m_devEndpointNamesHasBeenSet; }

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline void SetDevEndpointNames(const Aws::Vector<Aws::String>& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames = value; }

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline void SetDevEndpointNames(Aws::Vector<Aws::String>&& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames = std::move(value); }

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline BatchGetDevEndpointsRequest& WithDevEndpointNames(const Aws::Vector<Aws::String>& value) { SetDevEndpointNames(value); return *this;}

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline BatchGetDevEndpointsRequest& WithDevEndpointNames(Aws::Vector<Aws::String>&& value) { SetDevEndpointNames(std::move(value)); return *this;}

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline BatchGetDevEndpointsRequest& AddDevEndpointNames(const Aws::String& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames.push_back(value); return *this; }

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline BatchGetDevEndpointsRequest& AddDevEndpointNames(Aws::String&& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of DevEndpoint names, which may be the names returned from the
     * <code>ListDevEndpoint</code> operation.</p>
     */
    inline BatchGetDevEndpointsRequest& AddDevEndpointNames(const char* value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_devEndpointNames;
    bool m_devEndpointNamesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
