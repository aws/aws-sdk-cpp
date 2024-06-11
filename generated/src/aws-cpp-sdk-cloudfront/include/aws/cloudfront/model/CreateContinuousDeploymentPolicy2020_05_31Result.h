/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class CreateContinuousDeploymentPolicy2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Result();
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A continuous deployment policy.</p>
     */
    inline const ContinuousDeploymentPolicy& GetContinuousDeploymentPolicy() const{ return m_continuousDeploymentPolicy; }
    inline void SetContinuousDeploymentPolicy(const ContinuousDeploymentPolicy& value) { m_continuousDeploymentPolicy = value; }
    inline void SetContinuousDeploymentPolicy(ContinuousDeploymentPolicy&& value) { m_continuousDeploymentPolicy = std::move(value); }
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithContinuousDeploymentPolicy(const ContinuousDeploymentPolicy& value) { SetContinuousDeploymentPolicy(value); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithContinuousDeploymentPolicy(ContinuousDeploymentPolicy&& value) { SetContinuousDeploymentPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the continuous deployment policy.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContinuousDeploymentPolicy2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContinuousDeploymentPolicy m_continuousDeploymentPolicy;

    Aws::String m_location;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
