/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetPackageResult
  {
  public:
    AWS_IOT_API GetPackageResult();
    AWS_IOT_API GetPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetPackageResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the software package.</p>
     */
    inline GetPackageResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the software package.</p>
     */
    inline GetPackageResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The ARN for the package.</p>
     */
    inline const Aws::String& GetPackageArn() const{ return m_packageArn; }

    /**
     * <p>The ARN for the package.</p>
     */
    inline void SetPackageArn(const Aws::String& value) { m_packageArn = value; }

    /**
     * <p>The ARN for the package.</p>
     */
    inline void SetPackageArn(Aws::String&& value) { m_packageArn = std::move(value); }

    /**
     * <p>The ARN for the package.</p>
     */
    inline void SetPackageArn(const char* value) { m_packageArn.assign(value); }

    /**
     * <p>The ARN for the package.</p>
     */
    inline GetPackageResult& WithPackageArn(const Aws::String& value) { SetPackageArn(value); return *this;}

    /**
     * <p>The ARN for the package.</p>
     */
    inline GetPackageResult& WithPackageArn(Aws::String&& value) { SetPackageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the package.</p>
     */
    inline GetPackageResult& WithPackageArn(const char* value) { SetPackageArn(value); return *this;}


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
    inline GetPackageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The package description.</p>
     */
    inline GetPackageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The package description.</p>
     */
    inline GetPackageResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the default package version.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const{ return m_defaultVersionName; }

    /**
     * <p>The name of the default package version.</p>
     */
    inline void SetDefaultVersionName(const Aws::String& value) { m_defaultVersionName = value; }

    /**
     * <p>The name of the default package version.</p>
     */
    inline void SetDefaultVersionName(Aws::String&& value) { m_defaultVersionName = std::move(value); }

    /**
     * <p>The name of the default package version.</p>
     */
    inline void SetDefaultVersionName(const char* value) { m_defaultVersionName.assign(value); }

    /**
     * <p>The name of the default package version.</p>
     */
    inline GetPackageResult& WithDefaultVersionName(const Aws::String& value) { SetDefaultVersionName(value); return *this;}

    /**
     * <p>The name of the default package version.</p>
     */
    inline GetPackageResult& WithDefaultVersionName(Aws::String&& value) { SetDefaultVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the default package version.</p>
     */
    inline GetPackageResult& WithDefaultVersionName(const char* value) { SetDefaultVersionName(value); return *this;}


    /**
     * <p>The date the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the package was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the package was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the package was created.</p>
     */
    inline GetPackageResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the package was created.</p>
     */
    inline GetPackageResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date when the package was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date when the package was last updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date when the package was last updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date when the package was last updated.</p>
     */
    inline GetPackageResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date when the package was last updated.</p>
     */
    inline GetPackageResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_packageName;

    Aws::String m_packageArn;

    Aws::String m_description;

    Aws::String m_defaultVersionName;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
