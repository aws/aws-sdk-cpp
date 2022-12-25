/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcMetadataMatchMethod.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the metadata of the gateway route.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcGatewayRouteMetadata">AWS
   * API Reference</a></p>
   */
  class GrpcGatewayRouteMetadata
  {
  public:
    AWS_APPMESH_API GrpcGatewayRouteMetadata();
    AWS_APPMESH_API GrpcGatewayRouteMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcGatewayRouteMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>True</code> to match anything except the match criteria. The
     * default value is <code>False</code>.</p>
     */
    inline bool GetInvert() const{ return m_invert; }

    /**
     * <p>Specify <code>True</code> to match anything except the match criteria. The
     * default value is <code>False</code>.</p>
     */
    inline bool InvertHasBeenSet() const { return m_invertHasBeenSet; }

    /**
     * <p>Specify <code>True</code> to match anything except the match criteria. The
     * default value is <code>False</code>.</p>
     */
    inline void SetInvert(bool value) { m_invertHasBeenSet = true; m_invert = value; }

    /**
     * <p>Specify <code>True</code> to match anything except the match criteria. The
     * default value is <code>False</code>.</p>
     */
    inline GrpcGatewayRouteMetadata& WithInvert(bool value) { SetInvert(value); return *this;}


    /**
     * <p>The criteria for determining a metadata match.</p>
     */
    inline const GrpcMetadataMatchMethod& GetMatch() const{ return m_match; }

    /**
     * <p>The criteria for determining a metadata match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The criteria for determining a metadata match.</p>
     */
    inline void SetMatch(const GrpcMetadataMatchMethod& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The criteria for determining a metadata match.</p>
     */
    inline void SetMatch(GrpcMetadataMatchMethod&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The criteria for determining a metadata match.</p>
     */
    inline GrpcGatewayRouteMetadata& WithMatch(const GrpcMetadataMatchMethod& value) { SetMatch(value); return *this;}

    /**
     * <p>The criteria for determining a metadata match.</p>
     */
    inline GrpcGatewayRouteMetadata& WithMatch(GrpcMetadataMatchMethod&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline GrpcGatewayRouteMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline GrpcGatewayRouteMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the gateway route metadata.</p>
     */
    inline GrpcGatewayRouteMetadata& WithName(const char* value) { SetName(value); return *this;}

  private:

    bool m_invert;
    bool m_invertHasBeenSet = false;

    GrpcMetadataMatchMethod m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
