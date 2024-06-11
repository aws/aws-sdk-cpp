/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RegistryStatus.h>
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
namespace Glue
{
namespace Model
{
  class DeleteRegistryResult
  {
  public:
    AWS_GLUE_API DeleteRegistryResult();
    AWS_GLUE_API DeleteRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }
    inline DeleteRegistryResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline DeleteRegistryResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline DeleteRegistryResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }
    inline DeleteRegistryResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}
    inline DeleteRegistryResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}
    inline DeleteRegistryResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registry. A successful operation will return the
     * <code>Deleting</code> status.</p>
     */
    inline const RegistryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RegistryStatus& value) { m_status = value; }
    inline void SetStatus(RegistryStatus&& value) { m_status = std::move(value); }
    inline DeleteRegistryResult& WithStatus(const RegistryStatus& value) { SetStatus(value); return *this;}
    inline DeleteRegistryResult& WithStatus(RegistryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRegistryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRegistryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRegistryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryName;

    Aws::String m_registryArn;

    RegistryStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
