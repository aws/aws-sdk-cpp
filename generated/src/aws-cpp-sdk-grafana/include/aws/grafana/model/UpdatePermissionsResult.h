/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/UpdateError.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class UpdatePermissionsResult
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdatePermissionsResult();
    AWS_MANAGEDGRAFANA_API UpdatePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API UpdatePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline const Aws::Vector<UpdateError>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline void SetErrors(const Aws::Vector<UpdateError>& value) { m_errors = value; }

    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline void SetErrors(Aws::Vector<UpdateError>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline UpdatePermissionsResult& WithErrors(const Aws::Vector<UpdateError>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline UpdatePermissionsResult& WithErrors(Aws::Vector<UpdateError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline UpdatePermissionsResult& AddErrors(const UpdateError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the errors from the operation, if
     * any.</p>
     */
    inline UpdatePermissionsResult& AddErrors(UpdateError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UpdateError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
