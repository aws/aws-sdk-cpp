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
  class UpdatePracticeRunConfigurationResult
  {
  public:
    AWS_ARCZONALSHIFT_API UpdatePracticeRunConfigurationResult();
    AWS_ARCZONALSHIFT_API UpdatePracticeRunConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdatePracticeRunConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you updated the practice
     * run for.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline UpdatePracticeRunConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline UpdatePracticeRunConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource that you updated the practice run for. </p>
     */
    inline UpdatePracticeRunConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The practice run configuration that was updated.</p>
     */
    inline const PracticeRunConfiguration& GetPracticeRunConfiguration() const{ return m_practiceRunConfiguration; }

    /**
     * <p>The practice run configuration that was updated.</p>
     */
    inline void SetPracticeRunConfiguration(const PracticeRunConfiguration& value) { m_practiceRunConfiguration = value; }

    /**
     * <p>The practice run configuration that was updated.</p>
     */
    inline void SetPracticeRunConfiguration(PracticeRunConfiguration&& value) { m_practiceRunConfiguration = std::move(value); }

    /**
     * <p>The practice run configuration that was updated.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithPracticeRunConfiguration(const PracticeRunConfiguration& value) { SetPracticeRunConfiguration(value); return *this;}

    /**
     * <p>The practice run configuration that was updated.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithPracticeRunConfiguration(PracticeRunConfiguration&& value) { SetPracticeRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>The zonal autoshift status for the resource that you updated the practice run
     * for.</p>
     */
    inline const ZonalAutoshiftStatus& GetZonalAutoshiftStatus() const{ return m_zonalAutoshiftStatus; }

    /**
     * <p>The zonal autoshift status for the resource that you updated the practice run
     * for.</p>
     */
    inline void SetZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { m_zonalAutoshiftStatus = value; }

    /**
     * <p>The zonal autoshift status for the resource that you updated the practice run
     * for.</p>
     */
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { m_zonalAutoshiftStatus = std::move(value); }

    /**
     * <p>The zonal autoshift status for the resource that you updated the practice run
     * for.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { SetZonalAutoshiftStatus(value); return *this;}

    /**
     * <p>The zonal autoshift status for the resource that you updated the practice run
     * for.</p>
     */
    inline UpdatePracticeRunConfigurationResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { SetZonalAutoshiftStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePracticeRunConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePracticeRunConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePracticeRunConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
