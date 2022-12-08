/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/ControlPanel.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListControlPanelsResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListControlPanelsResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListControlPanelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListControlPanelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline const Aws::Vector<ControlPanel>& GetControlPanels() const{ return m_controlPanels; }

    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline void SetControlPanels(const Aws::Vector<ControlPanel>& value) { m_controlPanels = value; }

    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline void SetControlPanels(Aws::Vector<ControlPanel>&& value) { m_controlPanels = std::move(value); }

    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline ListControlPanelsResult& WithControlPanels(const Aws::Vector<ControlPanel>& value) { SetControlPanels(value); return *this;}

    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline ListControlPanelsResult& WithControlPanels(Aws::Vector<ControlPanel>&& value) { SetControlPanels(std::move(value)); return *this;}

    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline ListControlPanelsResult& AddControlPanels(const ControlPanel& value) { m_controlPanels.push_back(value); return *this; }

    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline ListControlPanelsResult& AddControlPanels(ControlPanel&& value) { m_controlPanels.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListControlPanelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListControlPanelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListControlPanelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ControlPanel> m_controlPanels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
