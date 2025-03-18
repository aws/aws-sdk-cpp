/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains the client response parameters for the connection when OAuth is
   * specified as the authorization type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ConnectionOAuthClientResponseParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionOAuthClientResponseParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ConnectionOAuthClientResponseParameters() = default;
    AWS_CLOUDWATCHEVENTS_API ConnectionOAuthClientResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ConnectionOAuthClientResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline const Aws::String& GetClientID() const { return m_clientID; }
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }
    template<typename ClientIDT = Aws::String>
    void SetClientID(ClientIDT&& value) { m_clientIDHasBeenSet = true; m_clientID = std::forward<ClientIDT>(value); }
    template<typename ClientIDT = Aws::String>
    ConnectionOAuthClientResponseParameters& WithClientID(ClientIDT&& value) { SetClientID(std::forward<ClientIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
