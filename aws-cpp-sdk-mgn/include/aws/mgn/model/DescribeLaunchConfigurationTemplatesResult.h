/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LaunchConfigurationTemplate.h>
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
namespace mgn
{
namespace Model
{
  class AWS_MGN_API DescribeLaunchConfigurationTemplatesResult
  {
  public:
    DescribeLaunchConfigurationTemplatesResult();
    DescribeLaunchConfigurationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLaunchConfigurationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline const Aws::Vector<LaunchConfigurationTemplate>& GetItems() const{ return m_items; }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline void SetItems(const Aws::Vector<LaunchConfigurationTemplate>& value) { m_items = value; }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline void SetItems(Aws::Vector<LaunchConfigurationTemplate>&& value) { m_items = std::move(value); }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithItems(const Aws::Vector<LaunchConfigurationTemplate>& value) { SetItems(value); return *this;}

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithItems(Aws::Vector<LaunchConfigurationTemplate>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& AddItems(const LaunchConfigurationTemplate& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& AddItems(LaunchConfigurationTemplate&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to disconnect Source Server from service by Server ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LaunchConfigurationTemplate> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
