/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMaintenanceConfigurationDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class UpdateApplicationMaintenanceConfigurationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationResult();
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The application maintenance configuration description after the update.</p>
     */
    inline const ApplicationMaintenanceConfigurationDescription& GetApplicationMaintenanceConfigurationDescription() const{ return m_applicationMaintenanceConfigurationDescription; }

    /**
     * <p>The application maintenance configuration description after the update.</p>
     */
    inline void SetApplicationMaintenanceConfigurationDescription(const ApplicationMaintenanceConfigurationDescription& value) { m_applicationMaintenanceConfigurationDescription = value; }

    /**
     * <p>The application maintenance configuration description after the update.</p>
     */
    inline void SetApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescription&& value) { m_applicationMaintenanceConfigurationDescription = std::move(value); }

    /**
     * <p>The application maintenance configuration description after the update.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationResult& WithApplicationMaintenanceConfigurationDescription(const ApplicationMaintenanceConfigurationDescription& value) { SetApplicationMaintenanceConfigurationDescription(value); return *this;}

    /**
     * <p>The application maintenance configuration description after the update.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationResult& WithApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescription&& value) { SetApplicationMaintenanceConfigurationDescription(std::move(value)); return *this;}

  private:

    Aws::String m_applicationARN;

    ApplicationMaintenanceConfigurationDescription m_applicationMaintenanceConfigurationDescription;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
