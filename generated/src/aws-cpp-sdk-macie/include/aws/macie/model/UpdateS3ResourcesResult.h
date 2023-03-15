﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie/model/FailedS3Resource.h>
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
namespace Macie
{
namespace Model
{
  class UpdateS3ResourcesResult
  {
  public:
    AWS_MACIE_API UpdateS3ResourcesResult();
    AWS_MACIE_API UpdateS3ResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE_API UpdateS3ResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline const Aws::Vector<FailedS3Resource>& GetFailedS3Resources() const{ return m_failedS3Resources; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline void SetFailedS3Resources(const Aws::Vector<FailedS3Resource>& value) { m_failedS3Resources = value; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline void SetFailedS3Resources(Aws::Vector<FailedS3Resource>&& value) { m_failedS3Resources = std::move(value); }

    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline UpdateS3ResourcesResult& WithFailedS3Resources(const Aws::Vector<FailedS3Resource>& value) { SetFailedS3Resources(value); return *this;}

    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline UpdateS3ResourcesResult& WithFailedS3Resources(Aws::Vector<FailedS3Resource>&& value) { SetFailedS3Resources(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline UpdateS3ResourcesResult& AddFailedS3Resources(const FailedS3Resource& value) { m_failedS3Resources.push_back(value); return *this; }

    /**
     * <p>(Discontinued) The S3 resources whose classification types can't be updated.
     * An error code and an error message are provided for each failed item.</p>
     */
    inline UpdateS3ResourcesResult& AddFailedS3Resources(FailedS3Resource&& value) { m_failedS3Resources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateS3ResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateS3ResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateS3ResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FailedS3Resource> m_failedS3Resources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
