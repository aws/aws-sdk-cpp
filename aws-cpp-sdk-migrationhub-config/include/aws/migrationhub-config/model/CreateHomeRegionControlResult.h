/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/model/HomeRegionControl.h>
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
namespace MigrationHubConfig
{
namespace Model
{
  class CreateHomeRegionControlResult
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult();
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline const HomeRegionControl& GetHomeRegionControl() const{ return m_homeRegionControl; }

    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline void SetHomeRegionControl(const HomeRegionControl& value) { m_homeRegionControl = value; }

    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline void SetHomeRegionControl(HomeRegionControl&& value) { m_homeRegionControl = std::move(value); }

    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline CreateHomeRegionControlResult& WithHomeRegionControl(const HomeRegionControl& value) { SetHomeRegionControl(value); return *this;}

    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline CreateHomeRegionControlResult& WithHomeRegionControl(HomeRegionControl&& value) { SetHomeRegionControl(std::move(value)); return *this;}

  private:

    HomeRegionControl m_homeRegionControl;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
