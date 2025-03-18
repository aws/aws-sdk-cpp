/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceIntrospectionStatus.h>
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
namespace AppSync
{
namespace Model
{
  class StartDataSourceIntrospectionResult
  {
  public:
    AWS_APPSYNC_API StartDataSourceIntrospectionResult() = default;
    AWS_APPSYNC_API StartDataSourceIntrospectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API StartDataSourceIntrospectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline const Aws::String& GetIntrospectionId() const { return m_introspectionId; }
    template<typename IntrospectionIdT = Aws::String>
    void SetIntrospectionId(IntrospectionIdT&& value) { m_introspectionIdHasBeenSet = true; m_introspectionId = std::forward<IntrospectionIdT>(value); }
    template<typename IntrospectionIdT = Aws::String>
    StartDataSourceIntrospectionResult& WithIntrospectionId(IntrospectionIdT&& value) { SetIntrospectionId(std::forward<IntrospectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the introspection during creation. By default, when a new
     * instrospection has been created, the status will be set to
     * <code>PROCESSING</code>. Once the operation has been completed, the status will
     * change to <code>SUCCESS</code> or <code>FAILED</code> depending on how the data
     * was parsed. A <code>FAILED</code> operation will return an error and its details
     * as an <code>introspectionStatusDetail</code>.</p>
     */
    inline DataSourceIntrospectionStatus GetIntrospectionStatus() const { return m_introspectionStatus; }
    inline void SetIntrospectionStatus(DataSourceIntrospectionStatus value) { m_introspectionStatusHasBeenSet = true; m_introspectionStatus = value; }
    inline StartDataSourceIntrospectionResult& WithIntrospectionStatus(DataSourceIntrospectionStatus value) { SetIntrospectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error detail field. When a <code>FAILED</code>
     * <code>introspectionStatus</code> is returned, the
     * <code>introspectionStatusDetail</code> will also return the exact error that was
     * generated during the operation.</p>
     */
    inline const Aws::String& GetIntrospectionStatusDetail() const { return m_introspectionStatusDetail; }
    template<typename IntrospectionStatusDetailT = Aws::String>
    void SetIntrospectionStatusDetail(IntrospectionStatusDetailT&& value) { m_introspectionStatusDetailHasBeenSet = true; m_introspectionStatusDetail = std::forward<IntrospectionStatusDetailT>(value); }
    template<typename IntrospectionStatusDetailT = Aws::String>
    StartDataSourceIntrospectionResult& WithIntrospectionStatusDetail(IntrospectionStatusDetailT&& value) { SetIntrospectionStatusDetail(std::forward<IntrospectionStatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDataSourceIntrospectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_introspectionId;
    bool m_introspectionIdHasBeenSet = false;

    DataSourceIntrospectionStatus m_introspectionStatus{DataSourceIntrospectionStatus::NOT_SET};
    bool m_introspectionStatusHasBeenSet = false;

    Aws::String m_introspectionStatusDetail;
    bool m_introspectionStatusDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
