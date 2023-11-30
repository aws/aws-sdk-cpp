/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeletePracticeRunConfigurationResult
  {
  public:
    AWS_ARCZONALSHIFT_API DeletePracticeRunConfigurationResult();
    AWS_ARCZONALSHIFT_API DeletePracticeRunConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API DeletePracticeRunConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline DeletePracticeRunConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline DeletePracticeRunConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you deleted the practice
     * run for.</p>
     */
    inline DeletePracticeRunConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline DeletePracticeRunConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline DeletePracticeRunConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource that you deleted the practice run for. </p>
     */
    inline DeletePracticeRunConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of zonal autoshift for the resource.</p>
     */
    inline const ZonalAutoshiftStatus& GetZonalAutoshiftStatus() const{ return m_zonalAutoshiftStatus; }

    /**
     * <p>The status of zonal autoshift for the resource.</p>
     */
    inline void SetZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { m_zonalAutoshiftStatus = value; }

    /**
     * <p>The status of zonal autoshift for the resource.</p>
     */
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { m_zonalAutoshiftStatus = std::move(value); }

    /**
     * <p>The status of zonal autoshift for the resource.</p>
     */
    inline DeletePracticeRunConfigurationResult& WithZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { SetZonalAutoshiftStatus(value); return *this;}

    /**
     * <p>The status of zonal autoshift for the resource.</p>
     */
    inline DeletePracticeRunConfigurationResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { SetZonalAutoshiftStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePracticeRunConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePracticeRunConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePracticeRunConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
