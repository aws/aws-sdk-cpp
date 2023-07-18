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
  class AWS_CLOUDWATCHEVENTS_API ConnectionOAuthClientResponseParameters
  {
  public:
    ConnectionOAuthClientResponseParameters();
    ConnectionOAuthClientResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    ConnectionOAuthClientResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline const Aws::String& GetClientID() const{ return m_clientID; }

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline void SetClientID(const Aws::String& value) { m_clientIDHasBeenSet = true; m_clientID = value; }

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline void SetClientID(Aws::String&& value) { m_clientIDHasBeenSet = true; m_clientID = std::move(value); }

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline void SetClientID(const char* value) { m_clientIDHasBeenSet = true; m_clientID.assign(value); }

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline ConnectionOAuthClientResponseParameters& WithClientID(const Aws::String& value) { SetClientID(value); return *this;}

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline ConnectionOAuthClientResponseParameters& WithClientID(Aws::String&& value) { SetClientID(std::move(value)); return *this;}

    /**
     * <p>The client ID associated with the response to the connection request.</p>
     */
    inline ConnectionOAuthClientResponseParameters& WithClientID(const char* value) { SetClientID(value); return *this;}

  private:

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
