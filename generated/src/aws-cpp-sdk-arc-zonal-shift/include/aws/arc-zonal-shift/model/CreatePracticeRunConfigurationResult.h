/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/PracticeRunConfiguration.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
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
namespace ARCZonalShift
{
namespace Model
{
  class CreatePracticeRunConfigurationResult
  {
  public:
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationResult();
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API CreatePracticeRunConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you configured the
     * practice run for.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline CreatePracticeRunConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline CreatePracticeRunConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource that you configured the practice run for. </p>
     */
    inline CreatePracticeRunConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A practice run configuration for a resource. Configurations include the
     * outcome alarm that you specify for practice runs, and, optionally, a blocking
     * alarm and blocking dates and windows.</p>
     */
    inline const PracticeRunConfiguration& GetPracticeRunConfiguration() const{ return m_practiceRunConfiguration; }

    /**
     * <p>A practice run configuration for a resource. Configurations include the
     * outcome alarm that you specify for practice runs, and, optionally, a blocking
     * alarm and blocking dates and windows.</p>
     */
    inline void SetPracticeRunConfiguration(const PracticeRunConfiguration& value) { m_practiceRunConfiguration = value; }

    /**
     * <p>A practice run configuration for a resource. Configurations include the
     * outcome alarm that you specify for practice runs, and, optionally, a blocking
     * alarm and blocking dates and windows.</p>
     */
    inline void SetPracticeRunConfiguration(PracticeRunConfiguration&& value) { m_practiceRunConfiguration = std::move(value); }

    /**
     * <p>A practice run configuration for a resource. Configurations include the
     * outcome alarm that you specify for practice runs, and, optionally, a blocking
     * alarm and blocking dates and windows.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithPracticeRunConfiguration(const PracticeRunConfiguration& value) { SetPracticeRunConfiguration(value); return *this;}

    /**
     * <p>A practice run configuration for a resource. Configurations include the
     * outcome alarm that you specify for practice runs, and, optionally, a blocking
     * alarm and blocking dates and windows.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithPracticeRunConfiguration(PracticeRunConfiguration&& value) { SetPracticeRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status for zonal autoshift for a resource. When you specify the autoshift
     * status as <code>ENABLED</code>, Amazon Web Services shifts traffic away from
     * shifts away application resource traffic from an Availability Zone, on your
     * behalf, when Amazon Web Services determines that there's an issue in the
     * Availability Zone that could potentially affect customers.</p> <p>When you
     * enable zonal autoshift, you must also configure practice runs for the
     * resource.</p>
     */
    inline const ZonalAutoshiftStatus& GetZonalAutoshiftStatus() const{ return m_zonalAutoshiftStatus; }

    /**
     * <p>The status for zonal autoshift for a resource. When you specify the autoshift
     * status as <code>ENABLED</code>, Amazon Web Services shifts traffic away from
     * shifts away application resource traffic from an Availability Zone, on your
     * behalf, when Amazon Web Services determines that there's an issue in the
     * Availability Zone that could potentially affect customers.</p> <p>When you
     * enable zonal autoshift, you must also configure practice runs for the
     * resource.</p>
     */
    inline void SetZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { m_zonalAutoshiftStatus = value; }

    /**
     * <p>The status for zonal autoshift for a resource. When you specify the autoshift
     * status as <code>ENABLED</code>, Amazon Web Services shifts traffic away from
     * shifts away application resource traffic from an Availability Zone, on your
     * behalf, when Amazon Web Services determines that there's an issue in the
     * Availability Zone that could potentially affect customers.</p> <p>When you
     * enable zonal autoshift, you must also configure practice runs for the
     * resource.</p>
     */
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { m_zonalAutoshiftStatus = std::move(value); }

    /**
     * <p>The status for zonal autoshift for a resource. When you specify the autoshift
     * status as <code>ENABLED</code>, Amazon Web Services shifts traffic away from
     * shifts away application resource traffic from an Availability Zone, on your
     * behalf, when Amazon Web Services determines that there's an issue in the
     * Availability Zone that could potentially affect customers.</p> <p>When you
     * enable zonal autoshift, you must also configure practice runs for the
     * resource.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { SetZonalAutoshiftStatus(value); return *this;}

    /**
     * <p>The status for zonal autoshift for a resource. When you specify the autoshift
     * status as <code>ENABLED</code>, Amazon Web Services shifts traffic away from
     * shifts away application resource traffic from an Availability Zone, on your
     * behalf, when Amazon Web Services determines that there's an issue in the
     * Availability Zone that could potentially affect customers.</p> <p>When you
     * enable zonal autoshift, you must also configure practice runs for the
     * resource.</p>
     */
    inline CreatePracticeRunConfigurationResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { SetZonalAutoshiftStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePracticeRunConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePracticeRunConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePracticeRunConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    PracticeRunConfiguration m_practiceRunConfiguration;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
