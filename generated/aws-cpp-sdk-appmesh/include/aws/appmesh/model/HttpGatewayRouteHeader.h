﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HeaderMatchMethod.h>
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
   * <p>An object that represents the HTTP header in the gateway route.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRouteHeader">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API HttpGatewayRouteHeader
  {
  public:
    HttpGatewayRouteHeader();
    HttpGatewayRouteHeader(Aws::Utils::Json::JsonView jsonValue);
    HttpGatewayRouteHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline HttpGatewayRouteHeader& WithInvert(bool value) { SetInvert(value); return *this;}


    
    inline const HeaderMatchMethod& GetMatch() const{ return m_match; }

    
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    
    inline void SetMatch(const HeaderMatchMethod& value) { m_matchHasBeenSet = true; m_match = value; }

    
    inline void SetMatch(HeaderMatchMethod&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    
    inline HttpGatewayRouteHeader& WithMatch(const HeaderMatchMethod& value) { SetMatch(value); return *this;}

    
    inline HttpGatewayRouteHeader& WithMatch(HeaderMatchMethod&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline HttpGatewayRouteHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline HttpGatewayRouteHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the HTTP header in the gateway route that will be matched on.</p>
     */
    inline HttpGatewayRouteHeader& WithName(const char* value) { SetName(value); return *this;}

  private:

    bool m_invert;
    bool m_invertHasBeenSet;

    HeaderMatchMethod m_match;
    bool m_matchHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
