/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameSparks
{
namespace Model
{
  class DisconnectPlayerResult
  {
  public:
    AWS_GAMESPARKS_API DisconnectPlayerResult();
    AWS_GAMESPARKS_API DisconnectPlayerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API DisconnectPlayerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisconnectFailures() const{ return m_disconnectFailures; }

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline void SetDisconnectFailures(const Aws::Vector<Aws::String>& value) { m_disconnectFailures = value; }

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline void SetDisconnectFailures(Aws::Vector<Aws::String>&& value) { m_disconnectFailures = std::move(value); }

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline DisconnectPlayerResult& WithDisconnectFailures(const Aws::Vector<Aws::String>& value) { SetDisconnectFailures(value); return *this;}

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline DisconnectPlayerResult& WithDisconnectFailures(Aws::Vector<Aws::String>&& value) { SetDisconnectFailures(std::move(value)); return *this;}

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline DisconnectPlayerResult& AddDisconnectFailures(const Aws::String& value) { m_disconnectFailures.push_back(value); return *this; }

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline DisconnectPlayerResult& AddDisconnectFailures(Aws::String&& value) { m_disconnectFailures.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of the connection ids that could not be disconnected.</p>
     */
    inline DisconnectPlayerResult& AddDisconnectFailures(const char* value) { m_disconnectFailures.push_back(value); return *this; }


    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisconnectSuccesses() const{ return m_disconnectSuccesses; }

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline void SetDisconnectSuccesses(const Aws::Vector<Aws::String>& value) { m_disconnectSuccesses = value; }

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline void SetDisconnectSuccesses(Aws::Vector<Aws::String>&& value) { m_disconnectSuccesses = std::move(value); }

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline DisconnectPlayerResult& WithDisconnectSuccesses(const Aws::Vector<Aws::String>& value) { SetDisconnectSuccesses(value); return *this;}

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline DisconnectPlayerResult& WithDisconnectSuccesses(Aws::Vector<Aws::String>&& value) { SetDisconnectSuccesses(std::move(value)); return *this;}

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline DisconnectPlayerResult& AddDisconnectSuccesses(const Aws::String& value) { m_disconnectSuccesses.push_back(value); return *this; }

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline DisconnectPlayerResult& AddDisconnectSuccesses(Aws::String&& value) { m_disconnectSuccesses.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of the connection ids that were disconnected.</p>
     */
    inline DisconnectPlayerResult& AddDisconnectSuccesses(const char* value) { m_disconnectSuccesses.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_disconnectFailures;

    Aws::Vector<Aws::String> m_disconnectSuccesses;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
