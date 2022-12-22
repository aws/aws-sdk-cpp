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
  class DescribeLaunchConfigurationTemplatesResult
  {
  public:
    AWS_MGN_API DescribeLaunchConfigurationTemplatesResult();
    AWS_MGN_API DescribeLaunchConfigurationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API DescribeLaunchConfigurationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline const Aws::Vector<LaunchConfigurationTemplate>& GetItems() const{ return m_items; }

    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline void SetItems(const Aws::Vector<LaunchConfigurationTemplate>& value) { m_items = value; }

    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline void SetItems(Aws::Vector<LaunchConfigurationTemplate>&& value) { m_items = std::move(value); }

    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithItems(const Aws::Vector<LaunchConfigurationTemplate>& value) { SetItems(value); return *this;}

    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithItems(Aws::Vector<LaunchConfigurationTemplate>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& AddItems(const LaunchConfigurationTemplate& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List of items returned by DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& AddItems(LaunchConfigurationTemplate&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LaunchConfigurationTemplate> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
