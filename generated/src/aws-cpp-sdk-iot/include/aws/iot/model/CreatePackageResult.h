/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreatePackageResult
  {
  public:
    AWS_IOT_API CreatePackageResult();
    AWS_IOT_API CreatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }
    inline CreatePackageResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline CreatePackageResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline CreatePackageResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline const Aws::String& GetPackageArn() const{ return m_packageArn; }
    inline void SetPackageArn(const Aws::String& value) { m_packageArn = value; }
    inline void SetPackageArn(Aws::String&& value) { m_packageArn = std::move(value); }
    inline void SetPackageArn(const char* value) { m_packageArn.assign(value); }
    inline CreatePackageResult& WithPackageArn(const Aws::String& value) { SetPackageArn(value); return *this;}
    inline CreatePackageResult& WithPackageArn(Aws::String&& value) { SetPackageArn(std::move(value)); return *this;}
    inline CreatePackageResult& WithPackageArn(const char* value) { SetPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreatePackageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePackageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePackageResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_packageName;

    Aws::String m_packageArn;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
