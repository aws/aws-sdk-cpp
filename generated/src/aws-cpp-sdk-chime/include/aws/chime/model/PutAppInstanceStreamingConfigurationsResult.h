/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/AppInstanceStreamingConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class PutAppInstanceStreamingConfigurationsResult
  {
  public:
    AWS_CHIME_API PutAppInstanceStreamingConfigurationsResult();
    AWS_CHIME_API PutAppInstanceStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutAppInstanceStreamingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline const Aws::Vector<AppInstanceStreamingConfiguration>& GetAppInstanceStreamingConfigurations() const{ return m_appInstanceStreamingConfigurations; }

    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceStreamingConfigurations(const Aws::Vector<AppInstanceStreamingConfiguration>& value) { m_appInstanceStreamingConfigurations = value; }

    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceStreamingConfigurations(Aws::Vector<AppInstanceStreamingConfiguration>&& value) { m_appInstanceStreamingConfigurations = std::move(value); }

    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsResult& WithAppInstanceStreamingConfigurations(const Aws::Vector<AppInstanceStreamingConfiguration>& value) { SetAppInstanceStreamingConfigurations(value); return *this;}

    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsResult& WithAppInstanceStreamingConfigurations(Aws::Vector<AppInstanceStreamingConfiguration>&& value) { SetAppInstanceStreamingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsResult& AddAppInstanceStreamingConfigurations(const AppInstanceStreamingConfiguration& value) { m_appInstanceStreamingConfigurations.push_back(value); return *this; }

    /**
     * <p>The streaming configurations of an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsResult& AddAppInstanceStreamingConfigurations(AppInstanceStreamingConfiguration&& value) { m_appInstanceStreamingConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AppInstanceStreamingConfiguration> m_appInstanceStreamingConfigurations;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
