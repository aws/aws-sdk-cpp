/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/SamplingStatisticsDocument.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API GetSamplingTargetsRequest : public XRayRequest
  {
  public:
    GetSamplingTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSamplingTargets"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline const Aws::Vector<SamplingStatisticsDocument>& GetSamplingStatisticsDocuments() const{ return m_samplingStatisticsDocuments; }

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline bool SamplingStatisticsDocumentsHasBeenSet() const { return m_samplingStatisticsDocumentsHasBeenSet; }

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline void SetSamplingStatisticsDocuments(const Aws::Vector<SamplingStatisticsDocument>& value) { m_samplingStatisticsDocumentsHasBeenSet = true; m_samplingStatisticsDocuments = value; }

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline void SetSamplingStatisticsDocuments(Aws::Vector<SamplingStatisticsDocument>&& value) { m_samplingStatisticsDocumentsHasBeenSet = true; m_samplingStatisticsDocuments = std::move(value); }

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline GetSamplingTargetsRequest& WithSamplingStatisticsDocuments(const Aws::Vector<SamplingStatisticsDocument>& value) { SetSamplingStatisticsDocuments(value); return *this;}

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline GetSamplingTargetsRequest& WithSamplingStatisticsDocuments(Aws::Vector<SamplingStatisticsDocument>&& value) { SetSamplingStatisticsDocuments(std::move(value)); return *this;}

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline GetSamplingTargetsRequest& AddSamplingStatisticsDocuments(const SamplingStatisticsDocument& value) { m_samplingStatisticsDocumentsHasBeenSet = true; m_samplingStatisticsDocuments.push_back(value); return *this; }

    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline GetSamplingTargetsRequest& AddSamplingStatisticsDocuments(SamplingStatisticsDocument&& value) { m_samplingStatisticsDocumentsHasBeenSet = true; m_samplingStatisticsDocuments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SamplingStatisticsDocument> m_samplingStatisticsDocuments;
    bool m_samplingStatisticsDocumentsHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
