/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class StartAppResult
  {
  public:
    AWS_SIMSPACEWEAVER_API StartAppResult();
    AWS_SIMSPACEWEAVER_API StartAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API StartAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the domain of the app.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domain = value; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(const char* value) { m_domain.assign(value); }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline StartAppResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline StartAppResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline StartAppResult& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline StartAppResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline StartAppResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline StartAppResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const Aws::String& value) { m_simulation = value; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(Aws::String&& value) { m_simulation = std::move(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const char* value) { m_simulation.assign(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline StartAppResult& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline StartAppResult& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline StartAppResult& WithSimulation(const char* value) { SetSimulation(value); return *this;}

  private:

    Aws::String m_domain;

    Aws::String m_name;

    Aws::String m_simulation;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
