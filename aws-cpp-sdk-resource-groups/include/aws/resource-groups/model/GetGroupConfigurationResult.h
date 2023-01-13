/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/GroupConfiguration.h>
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
namespace ResourceGroups
{
namespace Model
{
  class GetGroupConfigurationResult
  {
  public:
    AWS_RESOURCEGROUPS_API GetGroupConfigurationResult();
    AWS_RESOURCEGROUPS_API GetGroupConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GetGroupConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that describes the service configuration attached with the
     * specified group. For details about the service configuration syntax, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline const GroupConfiguration& GetGroupConfiguration() const{ return m_groupConfiguration; }

    /**
     * <p>A structure that describes the service configuration attached with the
     * specified group. For details about the service configuration syntax, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline void SetGroupConfiguration(const GroupConfiguration& value) { m_groupConfiguration = value; }

    /**
     * <p>A structure that describes the service configuration attached with the
     * specified group. For details about the service configuration syntax, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline void SetGroupConfiguration(GroupConfiguration&& value) { m_groupConfiguration = std::move(value); }

    /**
     * <p>A structure that describes the service configuration attached with the
     * specified group. For details about the service configuration syntax, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline GetGroupConfigurationResult& WithGroupConfiguration(const GroupConfiguration& value) { SetGroupConfiguration(value); return *this;}

    /**
     * <p>A structure that describes the service configuration attached with the
     * specified group. For details about the service configuration syntax, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline GetGroupConfigurationResult& WithGroupConfiguration(GroupConfiguration&& value) { SetGroupConfiguration(std::move(value)); return *this;}

  private:

    GroupConfiguration m_groupConfiguration;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
