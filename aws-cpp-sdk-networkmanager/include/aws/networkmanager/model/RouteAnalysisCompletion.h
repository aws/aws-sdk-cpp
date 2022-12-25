/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/RouteAnalysisCompletionResultCode.h>
#include <aws/networkmanager/model/RouteAnalysisCompletionReasonCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the status of an analysis at completion.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteAnalysisCompletion">AWS
   * API Reference</a></p>
   */
  class RouteAnalysisCompletion
  {
  public:
    AWS_NETWORKMANAGER_API RouteAnalysisCompletion();
    AWS_NETWORKMANAGER_API RouteAnalysisCompletion(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysisCompletion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The result of the analysis. If the status is <code>NOT_CONNECTED</code>,
     * check the reason code.</p>
     */
    inline const RouteAnalysisCompletionResultCode& GetResultCode() const{ return m_resultCode; }

    /**
     * <p>The result of the analysis. If the status is <code>NOT_CONNECTED</code>,
     * check the reason code.</p>
     */
    inline bool ResultCodeHasBeenSet() const { return m_resultCodeHasBeenSet; }

    /**
     * <p>The result of the analysis. If the status is <code>NOT_CONNECTED</code>,
     * check the reason code.</p>
     */
    inline void SetResultCode(const RouteAnalysisCompletionResultCode& value) { m_resultCodeHasBeenSet = true; m_resultCode = value; }

    /**
     * <p>The result of the analysis. If the status is <code>NOT_CONNECTED</code>,
     * check the reason code.</p>
     */
    inline void SetResultCode(RouteAnalysisCompletionResultCode&& value) { m_resultCodeHasBeenSet = true; m_resultCode = std::move(value); }

    /**
     * <p>The result of the analysis. If the status is <code>NOT_CONNECTED</code>,
     * check the reason code.</p>
     */
    inline RouteAnalysisCompletion& WithResultCode(const RouteAnalysisCompletionResultCode& value) { SetResultCode(value); return *this;}

    /**
     * <p>The result of the analysis. If the status is <code>NOT_CONNECTED</code>,
     * check the reason code.</p>
     */
    inline RouteAnalysisCompletion& WithResultCode(RouteAnalysisCompletionResultCode&& value) { SetResultCode(std::move(value)); return *this;}


    /**
     * <p>The reason code. Available only if a connection is not found.</p> <ul> <li>
     * <p> <code>BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND</code> - Found a black hole
     * route with the destination CIDR block.</p> </li> <li> <p>
     * <code>CYCLIC_PATH_DETECTED</code> - Found the same resource multiple times while
     * traversing the path.</p> </li> <li> <p>
     * <code>INACTIVE_ROUTE_FOR_DESTINATION_FOUND</code> - Found an inactive route with
     * the destination CIDR block.</p> </li> <li> <p> <code>MAX_HOPS_EXCEEDED</code> -
     * Analysis exceeded 64 hops without finding the destination.</p> </li> <li> <p>
     * <code>ROUTE_NOT_FOUND</code> - Cannot find a route table with the destination
     * CIDR block.</p> </li> <li> <p> <code>TGW_ATTACH_ARN_NO_MATCH</code> - Found an
     * attachment, but not with the correct destination ARN.</p> </li> <li> <p>
     * <code>TGW_ATTACH_NOT_FOUND</code> - Cannot find an attachment.</p> </li> <li>
     * <p> <code>TGW_ATTACH_NOT_IN_TGW</code> - Found an attachment, but not to the
     * correct transit gateway.</p> </li> <li> <p>
     * <code>TGW_ATTACH_STABLE_ROUTE_TABLE_NOT_FOUND</code> - The state of the route
     * table association is not associated.</p> </li> </ul>
     */
    inline const RouteAnalysisCompletionReasonCode& GetReasonCode() const{ return m_reasonCode; }

    /**
     * <p>The reason code. Available only if a connection is not found.</p> <ul> <li>
     * <p> <code>BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND</code> - Found a black hole
     * route with the destination CIDR block.</p> </li> <li> <p>
     * <code>CYCLIC_PATH_DETECTED</code> - Found the same resource multiple times while
     * traversing the path.</p> </li> <li> <p>
     * <code>INACTIVE_ROUTE_FOR_DESTINATION_FOUND</code> - Found an inactive route with
     * the destination CIDR block.</p> </li> <li> <p> <code>MAX_HOPS_EXCEEDED</code> -
     * Analysis exceeded 64 hops without finding the destination.</p> </li> <li> <p>
     * <code>ROUTE_NOT_FOUND</code> - Cannot find a route table with the destination
     * CIDR block.</p> </li> <li> <p> <code>TGW_ATTACH_ARN_NO_MATCH</code> - Found an
     * attachment, but not with the correct destination ARN.</p> </li> <li> <p>
     * <code>TGW_ATTACH_NOT_FOUND</code> - Cannot find an attachment.</p> </li> <li>
     * <p> <code>TGW_ATTACH_NOT_IN_TGW</code> - Found an attachment, but not to the
     * correct transit gateway.</p> </li> <li> <p>
     * <code>TGW_ATTACH_STABLE_ROUTE_TABLE_NOT_FOUND</code> - The state of the route
     * table association is not associated.</p> </li> </ul>
     */
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }

    /**
     * <p>The reason code. Available only if a connection is not found.</p> <ul> <li>
     * <p> <code>BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND</code> - Found a black hole
     * route with the destination CIDR block.</p> </li> <li> <p>
     * <code>CYCLIC_PATH_DETECTED</code> - Found the same resource multiple times while
     * traversing the path.</p> </li> <li> <p>
     * <code>INACTIVE_ROUTE_FOR_DESTINATION_FOUND</code> - Found an inactive route with
     * the destination CIDR block.</p> </li> <li> <p> <code>MAX_HOPS_EXCEEDED</code> -
     * Analysis exceeded 64 hops without finding the destination.</p> </li> <li> <p>
     * <code>ROUTE_NOT_FOUND</code> - Cannot find a route table with the destination
     * CIDR block.</p> </li> <li> <p> <code>TGW_ATTACH_ARN_NO_MATCH</code> - Found an
     * attachment, but not with the correct destination ARN.</p> </li> <li> <p>
     * <code>TGW_ATTACH_NOT_FOUND</code> - Cannot find an attachment.</p> </li> <li>
     * <p> <code>TGW_ATTACH_NOT_IN_TGW</code> - Found an attachment, but not to the
     * correct transit gateway.</p> </li> <li> <p>
     * <code>TGW_ATTACH_STABLE_ROUTE_TABLE_NOT_FOUND</code> - The state of the route
     * table association is not associated.</p> </li> </ul>
     */
    inline void SetReasonCode(const RouteAnalysisCompletionReasonCode& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }

    /**
     * <p>The reason code. Available only if a connection is not found.</p> <ul> <li>
     * <p> <code>BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND</code> - Found a black hole
     * route with the destination CIDR block.</p> </li> <li> <p>
     * <code>CYCLIC_PATH_DETECTED</code> - Found the same resource multiple times while
     * traversing the path.</p> </li> <li> <p>
     * <code>INACTIVE_ROUTE_FOR_DESTINATION_FOUND</code> - Found an inactive route with
     * the destination CIDR block.</p> </li> <li> <p> <code>MAX_HOPS_EXCEEDED</code> -
     * Analysis exceeded 64 hops without finding the destination.</p> </li> <li> <p>
     * <code>ROUTE_NOT_FOUND</code> - Cannot find a route table with the destination
     * CIDR block.</p> </li> <li> <p> <code>TGW_ATTACH_ARN_NO_MATCH</code> - Found an
     * attachment, but not with the correct destination ARN.</p> </li> <li> <p>
     * <code>TGW_ATTACH_NOT_FOUND</code> - Cannot find an attachment.</p> </li> <li>
     * <p> <code>TGW_ATTACH_NOT_IN_TGW</code> - Found an attachment, but not to the
     * correct transit gateway.</p> </li> <li> <p>
     * <code>TGW_ATTACH_STABLE_ROUTE_TABLE_NOT_FOUND</code> - The state of the route
     * table association is not associated.</p> </li> </ul>
     */
    inline void SetReasonCode(RouteAnalysisCompletionReasonCode&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }

    /**
     * <p>The reason code. Available only if a connection is not found.</p> <ul> <li>
     * <p> <code>BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND</code> - Found a black hole
     * route with the destination CIDR block.</p> </li> <li> <p>
     * <code>CYCLIC_PATH_DETECTED</code> - Found the same resource multiple times while
     * traversing the path.</p> </li> <li> <p>
     * <code>INACTIVE_ROUTE_FOR_DESTINATION_FOUND</code> - Found an inactive route with
     * the destination CIDR block.</p> </li> <li> <p> <code>MAX_HOPS_EXCEEDED</code> -
     * Analysis exceeded 64 hops without finding the destination.</p> </li> <li> <p>
     * <code>ROUTE_NOT_FOUND</code> - Cannot find a route table with the destination
     * CIDR block.</p> </li> <li> <p> <code>TGW_ATTACH_ARN_NO_MATCH</code> - Found an
     * attachment, but not with the correct destination ARN.</p> </li> <li> <p>
     * <code>TGW_ATTACH_NOT_FOUND</code> - Cannot find an attachment.</p> </li> <li>
     * <p> <code>TGW_ATTACH_NOT_IN_TGW</code> - Found an attachment, but not to the
     * correct transit gateway.</p> </li> <li> <p>
     * <code>TGW_ATTACH_STABLE_ROUTE_TABLE_NOT_FOUND</code> - The state of the route
     * table association is not associated.</p> </li> </ul>
     */
    inline RouteAnalysisCompletion& WithReasonCode(const RouteAnalysisCompletionReasonCode& value) { SetReasonCode(value); return *this;}

    /**
     * <p>The reason code. Available only if a connection is not found.</p> <ul> <li>
     * <p> <code>BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND</code> - Found a black hole
     * route with the destination CIDR block.</p> </li> <li> <p>
     * <code>CYCLIC_PATH_DETECTED</code> - Found the same resource multiple times while
     * traversing the path.</p> </li> <li> <p>
     * <code>INACTIVE_ROUTE_FOR_DESTINATION_FOUND</code> - Found an inactive route with
     * the destination CIDR block.</p> </li> <li> <p> <code>MAX_HOPS_EXCEEDED</code> -
     * Analysis exceeded 64 hops without finding the destination.</p> </li> <li> <p>
     * <code>ROUTE_NOT_FOUND</code> - Cannot find a route table with the destination
     * CIDR block.</p> </li> <li> <p> <code>TGW_ATTACH_ARN_NO_MATCH</code> - Found an
     * attachment, but not with the correct destination ARN.</p> </li> <li> <p>
     * <code>TGW_ATTACH_NOT_FOUND</code> - Cannot find an attachment.</p> </li> <li>
     * <p> <code>TGW_ATTACH_NOT_IN_TGW</code> - Found an attachment, but not to the
     * correct transit gateway.</p> </li> <li> <p>
     * <code>TGW_ATTACH_STABLE_ROUTE_TABLE_NOT_FOUND</code> - The state of the route
     * table association is not associated.</p> </li> </ul>
     */
    inline RouteAnalysisCompletion& WithReasonCode(RouteAnalysisCompletionReasonCode&& value) { SetReasonCode(std::move(value)); return *this;}


    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetReasonContext() const{ return m_reasonContext; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline bool ReasonContextHasBeenSet() const { return m_reasonContextHasBeenSet; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline void SetReasonContext(const Aws::Map<Aws::String, Aws::String>& value) { m_reasonContextHasBeenSet = true; m_reasonContext = value; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline void SetReasonContext(Aws::Map<Aws::String, Aws::String>&& value) { m_reasonContextHasBeenSet = true; m_reasonContext = std::move(value); }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& WithReasonContext(const Aws::Map<Aws::String, Aws::String>& value) { SetReasonContext(value); return *this;}

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& WithReasonContext(Aws::Map<Aws::String, Aws::String>&& value) { SetReasonContext(std::move(value)); return *this;}

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(const Aws::String& key, const Aws::String& value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(key, value); return *this; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(Aws::String&& key, const Aws::String& value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(const Aws::String& key, Aws::String&& value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(Aws::String&& key, Aws::String&& value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(const char* key, Aws::String&& value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(Aws::String&& key, const char* value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional information about the path. Available only if a connection is not
     * found.</p>
     */
    inline RouteAnalysisCompletion& AddReasonContext(const char* key, const char* value) { m_reasonContextHasBeenSet = true; m_reasonContext.emplace(key, value); return *this; }

  private:

    RouteAnalysisCompletionResultCode m_resultCode;
    bool m_resultCodeHasBeenSet = false;

    RouteAnalysisCompletionReasonCode m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_reasonContext;
    bool m_reasonContextHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
