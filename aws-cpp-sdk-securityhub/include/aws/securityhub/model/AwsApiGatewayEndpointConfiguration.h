/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the endpoints for the API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayEndpointConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayEndpointConfiguration();
    AWS_SECURITYHUB_API AwsApiGatewayEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline AwsApiGatewayEndpointConfiguration& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline AwsApiGatewayEndpointConfiguration& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline AwsApiGatewayEndpointConfiguration& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline AwsApiGatewayEndpointConfiguration& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline AwsApiGatewayEndpointConfiguration& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
