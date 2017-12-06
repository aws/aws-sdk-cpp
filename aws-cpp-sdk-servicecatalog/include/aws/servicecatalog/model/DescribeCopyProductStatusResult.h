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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/CopyProductStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeCopyProductStatusResult
  {
  public:
    DescribeCopyProductStatusResult();
    DescribeCopyProductStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCopyProductStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the copy product operation.</p>
     */
    inline const CopyProductStatus& GetCopyProductStatus() const{ return m_copyProductStatus; }

    /**
     * <p>The status of the copy product operation.</p>
     */
    inline void SetCopyProductStatus(const CopyProductStatus& value) { m_copyProductStatus = value; }

    /**
     * <p>The status of the copy product operation.</p>
     */
    inline void SetCopyProductStatus(CopyProductStatus&& value) { m_copyProductStatus = std::move(value); }

    /**
     * <p>The status of the copy product operation.</p>
     */
    inline DescribeCopyProductStatusResult& WithCopyProductStatus(const CopyProductStatus& value) { SetCopyProductStatus(value); return *this;}

    /**
     * <p>The status of the copy product operation.</p>
     */
    inline DescribeCopyProductStatusResult& WithCopyProductStatus(CopyProductStatus&& value) { SetCopyProductStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the copied product.</p>
     */
    inline const Aws::String& GetTargetProductId() const{ return m_targetProductId; }

    /**
     * <p>The identifier of the copied product.</p>
     */
    inline void SetTargetProductId(const Aws::String& value) { m_targetProductId = value; }

    /**
     * <p>The identifier of the copied product.</p>
     */
    inline void SetTargetProductId(Aws::String&& value) { m_targetProductId = std::move(value); }

    /**
     * <p>The identifier of the copied product.</p>
     */
    inline void SetTargetProductId(const char* value) { m_targetProductId.assign(value); }

    /**
     * <p>The identifier of the copied product.</p>
     */
    inline DescribeCopyProductStatusResult& WithTargetProductId(const Aws::String& value) { SetTargetProductId(value); return *this;}

    /**
     * <p>The identifier of the copied product.</p>
     */
    inline DescribeCopyProductStatusResult& WithTargetProductId(Aws::String&& value) { SetTargetProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the copied product.</p>
     */
    inline DescribeCopyProductStatusResult& WithTargetProductId(const char* value) { SetTargetProductId(value); return *this;}


    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetail = value; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetail = std::move(value); }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusDetail(const char* value) { m_statusDetail.assign(value); }

    /**
     * <p>The status message.</p>
     */
    inline DescribeCopyProductStatusResult& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline DescribeCopyProductStatusResult& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline DescribeCopyProductStatusResult& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}

  private:

    CopyProductStatus m_copyProductStatus;

    Aws::String m_targetProductId;

    Aws::String m_statusDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
