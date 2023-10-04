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


    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the software package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }

    /**
     * <p>The name of the software package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }

    /**
     * <p>The name of the software package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }

    /**
     * <p>The name of the software package.</p>
     */
    inline CreatePackageResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the software package.</p>
     */
    inline CreatePackageResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the software package.</p>
     */
    inline CreatePackageResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline const Aws::String& GetPackageArn() const{ return m_packageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline void SetPackageArn(const Aws::String& value) { m_packageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline void SetPackageArn(Aws::String&& value) { m_packageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline void SetPackageArn(const char* value) { m_packageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline CreatePackageResult& WithPackageArn(const Aws::String& value) { SetPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline CreatePackageResult& WithPackageArn(Aws::String&& value) { SetPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline CreatePackageResult& WithPackageArn(const char* value) { SetPackageArn(value); return *this;}


    /**
     * <p>The package description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The package description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The package description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The package description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The package description.</p>
     */
    inline CreatePackageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The package description.</p>
     */
    inline CreatePackageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The package description.</p>
     */
    inline CreatePackageResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_packageName;

    Aws::String m_packageArn;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
